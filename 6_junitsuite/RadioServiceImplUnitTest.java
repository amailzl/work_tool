/**
* Copyright @ 2017 - 2020 iAUTO(Shanghai) Co., Ltd.
* All Rights Reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are NOT permitted except as agreed by
* iAUTO(Shanghai) Co., Ltd.
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*/

package ;

import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.lang.reflect.Method;
import java.lang.reflect.Constructor;
import java.lang.*;
import java.lang.Exception;
import java.lang.IllegalAccessException;
import java.util.NoSuchElementException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import android.content.Context;
import android.os.IBinder;
import android.support.annotation.VisibleForTesting;
import android.os.RemoteException;
import android.os.Looper;
import android.os.Handler;
import android.util.Log;
import android.util.Log;
import android.os.IBinder;
import android.os.IHwBinder;
import android.support.test.InstrumentationRegistry;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.junit.Assert;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.mockito.junit.MockitoJUnitRunner;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;

import android.content.Context;
import android.os.IBinder;
import android.util.Log;
import android.os.RemoteException;
import android.os.Looper;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.ServiceManager;
import android.os.ServiceManager.ServiceNotFoundException;
import android.os.Message;
import android.os.Bundle;
import com.android.internal.annotations.GuardedBy;
import java.io.PrintWriter;
import java.io.Serializable;
import java.util.HashMap;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.NoSuchElementException;
import java.util.List;
import com.iauto.radio.IRadioDef;
import com.iauto.media.manager.source.SourceManager;
import com.iauto.media.manager.source.SourceListener;
import com.iauto.media.manager.source.Source;
import com.iauto.media.manager.source.SourceManagerDef;
import vendor.iauto.hardware.mediamanager.source.V1_0.StMediaManagerAudioChangeReqInfo;
import vendor.iauto.hardware.mediamanager.source.V1_0.StMediaManagerAudioChangeNotifyInfo;
import com.iauto.media.manager.source.MediaManager;
import com.iauto.media.session.MediaInfoCollectorManager;
import com.iauto.media.session.MediaSessionRadioInfo;
import com.iauto.media.session.IMediaSessionDef;
import com.iauto.cardata.CarDataManager;
import com.iauto.cardata.CarDataManagerDef;
import com.iauto.cardata.CarDataManagerValue;
import com.iauto.util.NCPerformance;
import com.iauto.dtlib.DTLib;
import com.iauto.ErrorCodeBase;
import iauto.hardware.ucom.tuner.V1_1.IComdTuner;
import iauto.hardware.ucom.tuner.V1_1.IComdTunerListener;
import iauto.hardware.ucom.tuner.V1_0.EnComdTunerFuncResult;
import iauto.hardware.ucom.tuner.V1_0.EnComdTunerBandInfoType;
import iauto.hardware.ucom.tuner.V1_0.EnComdTunerListenerID;
import iauto.hardware.ucom.tuner.V1_1.EnComdTunerEventId;
import iauto.hardware.ucom.tuner.V1_0.EnComdTunerPresetIndex;
import iauto.hardware.ucom.tuner.V1_0.StComdTunerInfo;
import iauto.hardware.ucom.tuner.V1_0.StComdPresetInfo;
import iauto.hardware.ucom.tuner.V1_0.StComdPresetList;
import iauto.hardware.ucom.tuner.V1_0.StComdTunerChannel;
import iauto.hardware.ucom.tuner.V1_1.EnComdStationListCmd;
import iauto.hardware.ucom.tuner.V1_1.EnComdStationDisplay;
import iauto.hardware.ucom.tuner.V1_1.EnComdTunerBandType;
import iauto.hardware.ucom.tuner.V1_1.StComdStationlistdata;
import iauto.hardware.ucom.tuner.V1_1.StComdStationListdataRes;
import iauto.hardware.ucom.tuner.V1_1.StComdStationListinfoRes;
import iauto.hardware.ucom.tuner.V1_1.StComdStationListdataReq;

@RunWith(MockitoJUnitRunner.class)
public class RadioServiceImplUnitTest{
    private static String TAG = "RadioServiceImplUnitTest";
    private RadioServiceImpl testRadioServiceImpl = null;

    private Class<RadioServiceImpl> RadioServiceImplClazz = RadioServiceImpl.class;
    private Class<?> ComdTunerListenerClazz = null;
    private Class<?> IComdTunerDeathRecipientClazz = null;
    private Class<?> RadioDeathRecipientClazz = null;
    private Class<?> RadioSourceListenerClazz = null;
    private Class<?> RadioMediaInfoListenerClazz = null;
    private Class<?> RadioDispInfoClazz = null;

    @Before
    public void setUp(){
        testRadioServiceImpl = new RadioServiceImpl();
    }

    @After
    public void tearDown(){
        testRadioServiceImpl = null;
    })

    public Object getComdTunerListenerObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$ComdTunerListener)){
                ComdTunerListenerClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = ComdTunerListenerClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "ComdTunerListenerClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "ComdTunerListenerbuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }

    public Object getIComdTunerDeathRecipientObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$IComdTunerDeathRecipient)){
                IComdTunerDeathRecipientClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = IComdTunerDeathRecipientClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "IComdTunerDeathRecipientClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "IComdTunerDeathRecipientbuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }

    public Object getRadioDeathRecipientObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$RadioDeathRecipient)){
                RadioDeathRecipientClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = RadioDeathRecipientClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "RadioDeathRecipientClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "RadioDeathRecipientbuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }

    public Object getRadioSourceListenerObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$RadioSourceListener)){
                RadioSourceListenerClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = RadioSourceListenerClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "RadioSourceListenerClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "RadioSourceListenerbuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }

    public Object getRadioMediaInfoListenerObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$RadioMediaInfoListener)){
                RadioMediaInfoListenerClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = RadioMediaInfoListenerClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "RadioMediaInfoListenerClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "RadioMediaInfoListenerbuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }

    public Object getRadioDispInfoObject(){
        for(Class c:RadioServiceImplClazz.getDeclaredClasses()){
            if(c.getName().equals(iauto.system.radio.RadioServiceImpl$RadioDispInfo)){
                RadioDispInfoClazz = c;
                break;
            }
        }
        try{
            Constructor[] cons = RadioDispInfoClazz.getDeclaredConstructors();
            for (Constructor con:cons){
                Log.e(TAG, "RadioDispInfoClazz con: [" + con + "]");
            }
            Constructor con = cons[0];
            con.setAccessible(true);
            Object obj = con.newInstance(testRadioServiceImpl);
            return obj;
        }catch(Exception e){
            Log.e(TAG, "RadioDispInfobuilder error:" + e);
            assertEquals(2, 1);
        }
        return null;
    }


    public void init_sInstance(RadioServiceImpl initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("sInstance");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_sInstance error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mListenersMap(HashMap<IBinder,IRadioListener> initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mListenersMap");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mListenersMap error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mDeathRecipientMap(HashMap<IBinder,RadioDeathRecipient> initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mDeathRecipientMap");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mDeathRecipientMap error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mContext(Context initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mContext");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mContext error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mLock(Object initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mLock");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mLock error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mBand(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mBand");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mBand error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mMode(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mMode");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mMode error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mProgramInfo(ProgramInfoParcel initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mProgramInfo");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mProgramInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mSourceManager(SourceManager initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mSourceManager");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mSourceManager error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mMediaManager(MediaManager initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mMediaManager");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mMediaManager error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mSourceListener(SourceListener initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mSourceListener");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mSourceListener error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mRadioMediaInfoListener(MediaInfoCollectorManager.MediaInfoCollectorListener initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mRadioMediaInfoListener");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mRadioMediaInfoListener error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mIComdTuner(IComdTuner initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mIComdTuner");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mIComdTuner error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mIComdTunerListener(IComdTunerListener initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mIComdTunerListener");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mIComdTunerListener error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mEventHandler(Handler initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mEventHandler");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mEventHandler error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mIComdTunerDeathRecipient(IComdTunerDeathRecipient initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mIComdTunerDeathRecipient");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mIComdTunerDeathRecipient error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mMediaInfoCollectorManager(MediaInfoCollectorManager initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mMediaInfoCollectorManager");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mMediaInfoCollectorManager error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mMediaSessionRadioInfo(MediaSessionRadioInfo initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mMediaSessionRadioInfo");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mMediaSessionRadioInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mRadioBackUp(RadioBackUp initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mRadioBackUp");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mRadioBackUp error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mDTHandler(long initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mDTHandler");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mDTHandler error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mErrorCodeBase(ErrorCodeBase initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mErrorCodeBase");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mErrorCodeBase error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mPresetList(PresetInfoParcel[] initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mPresetList");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mPresetList error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mFavouriteList(List<RadioInfoParcel> initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mFavouriteList");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mFavouriteList error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mStationList(List<RadioInfoParcel> initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mStationList");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mStationList error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mIsUpdating(boolean initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mIsUpdating");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mIsUpdating error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mIsSourcePlay(boolean initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mIsSourcePlay");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mIsSourcePlay error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mSourceToRadio(boolean initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mSourceToRadio");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mSourceToRadio error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mListLength(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mListLength");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mListLength error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mCurListIndex(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mCurListIndex");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mCurListIndex error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mAddListIndex(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mAddListIndex");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mAddListIndex error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mListReqNum(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mListReqNum");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mListReqNum error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mRadioSounds(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mRadioSounds");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mRadioSounds error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mPlayStatus(int initArg){
        try{
            Field field = RadioServiceImplClazz.getDeclaredField("mPlayStatus");
            field.setAccessible(true);
            field.set(testRadioServiceImpl, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mPlayStatus error:" + e);
            assertEquals(2, 1);
        }
    }

    public void init_mListenerBinder(IBinder initArg){
        try{
            Field field = RadioDeathRecipientClazz.getDeclaredField("mListenerBinder");
            field.setAccessible(true);
            field.set(testRadioDeathRecipient, initArg);
        }catch(Exception e){
            Log.e(TAG, "init_mListenerBinder error:" + e);
            assertEquals(2, 1);
        }
    }


    //test getInstance
    @Test
    public void test_getInstance(){
        Log.d(TAG, "[RadioServiceImpl] [getInstance] test");
    }

    //test releaseInstance
    @Test
    public void test_releaseInstance(){
        Log.d(TAG, "[RadioServiceImpl] [releaseInstance] test");
    }

    //test RadioServiceImpl
    @Test
    public void test_RadioServiceImpl(){
        Log.d(TAG, "[RadioServiceImpl] [RadioServiceImpl] test");
    }

    //test start
    @Test
    public void test_start(){
        Log.d(TAG, "[RadioServiceImpl] [start] test");
    }

    //test stop
    @Test
    public void test_stop(){
        Log.d(TAG, "[RadioServiceImpl] [stop] test");
    }

    //test suspend
    @Test
    public void test_suspend(){
        Log.d(TAG, "[RadioServiceImpl] [suspend] test");
    }

    //test dtWrite
    @Test
    public void test_dtWrite(){
        Log.d(TAG, "[RadioServiceImpl] [dtWrite] test");
        try {
            Method dtWriteMethod = RadioServiceImplClazz.getDeclaredMethod("dtWrite",String.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_dtWrite error:" + e);
            assertEquals(2, 1);
        }
    }

    //test awake
    @Test
    public void test_awake(){
        Log.d(TAG, "[RadioServiceImpl] [awake] test");
    }

    //test init
    @Test
    public void test_init(){
        Log.d(TAG, "[RadioServiceImpl] [init] test");
        try {
            Method initMethod = RadioServiceImplClazz.getDeclaredMethod("init");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_init error:" + e);
            assertEquals(2, 1);
        }
    }

    //test initPresetListArray
    @Test
    public void test_initPresetListArray(){
        Log.d(TAG, "[RadioServiceImpl] [initPresetListArray] test");
        try {
            Method initPresetListArrayMethod = RadioServiceImplClazz.getDeclaredMethod("initPresetListArray");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_initPresetListArray error:" + e);
            assertEquals(2, 1);
        }
    }

    //test release
    @Test
    public void test_release(){
        Log.d(TAG, "[RadioServiceImpl] [release] test");
        try {
            Method releaseMethod = RadioServiceImplClazz.getDeclaredMethod("release");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_release error:" + e);
            assertEquals(2, 1);
        }
    }

    //test scanUp
    @Test
    public void test_scanUp(){
        Log.d(TAG, "[RadioServiceImpl] [scanUp] test");
    }

    //test seek
    @Test
    public void test_seek(){
        Log.d(TAG, "[RadioServiceImpl] [seek] test");
    }

    //test seekStop
    @Test
    public void test_seekStop(){
        Log.d(TAG, "[RadioServiceImpl] [seekStop] test");
    }

    //test seekCancel
    @Test
    public void test_seekCancel(){
        Log.d(TAG, "[RadioServiceImpl] [seekCancel] test");
    }

    //test tune
    @Test
    public void test_tune(){
        Log.d(TAG, "[RadioServiceImpl] [tune] test");
    }

    //test fastSeek
    @Test
    public void test_fastSeek(){
        Log.d(TAG, "[RadioServiceImpl] [fastSeek] test");
    }

    //test fastTune
    @Test
    public void test_fastTune(){
        Log.d(TAG, "[RadioServiceImpl] [fastTune] test");
    }

    //test changeBand
    @Test
    public void test_changeBand(){
        Log.d(TAG, "[RadioServiceImpl] [changeBand] test");
    }

    //test tuneToPreset
    @Test
    public void test_tuneToPreset(){
        Log.d(TAG, "[RadioServiceImpl] [tuneToPreset] test");
    }

    //test getBand
    @Test
    public void test_getBand(){
        Log.d(TAG, "[RadioServiceImpl] [getBand] test");
    }

    //test fastRelease
    @Test
    public void test_fastRelease(){
        Log.d(TAG, "[RadioServiceImpl] [fastRelease] test");
    }

    //test toggleBand
    @Test
    public void test_toggleBand(){
        Log.d(TAG, "[RadioServiceImpl] [toggleBand] test");
    }

    //test presetTune
    @Test
    public void test_presetTune(){
        Log.d(TAG, "[RadioServiceImpl] [presetTune] test");
    }

    //test getPresetList
    @Test
    public void test_getPresetList(){
        Log.d(TAG, "[RadioServiceImpl] [getPresetList] test");
    }

    //test setPreset
    @Test
    public void test_setPreset(){
        Log.d(TAG, "[RadioServiceImpl] [setPreset] test");
    }

    //test autoPreset
    @Test
    public void test_autoPreset(){
        Log.d(TAG, "[RadioServiceImpl] [autoPreset] test");
    }

    //test getProgramInformation
    @Test
    public void test_getProgramInformation(){
        Log.d(TAG, "[RadioServiceImpl] [getProgramInformation] test");
    }

    //test registerListener
    @Test
    public void test_registerListener(){
        Log.d(TAG, "[RadioServiceImpl] [registerListener] test");
    }

    //test unregisterListener
    @Test
    public void test_unregisterListener(){
        Log.d(TAG, "[RadioServiceImpl] [unregisterListener] test");
    }

    //test stationListReq
    @Test
    public void test_stationListReq(){
        Log.d(TAG, "[RadioServiceImpl] [stationListReq] test");
    }

    //test stationListUpdate
    @Test
    public void test_stationListUpdate(){
        Log.d(TAG, "[RadioServiceImpl] [stationListUpdate] test");
    }

    //test favouriteListReq
    @Test
    public void test_favouriteListReq(){
        Log.d(TAG, "[RadioServiceImpl] [favouriteListReq] test");
        try {
            Method favouriteListReqMethod = RadioServiceImplClazz.getDeclaredMethod("favouriteListReq");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_favouriteListReq error:" + e);
            assertEquals(2, 1);
        }
    }

    //test addFavourite
    @Test
    public void test_addFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [addFavourite] test");
    }

    //test removeFavourite
    @Test
    public void test_removeFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [removeFavourite] test");
    }

    //test clearFavourite
    @Test
    public void test_clearFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [clearFavourite] test");
    }

    //test favouriteUpDown
    @Test
    public void test_favouriteUpDown(){
        Log.d(TAG, "[RadioServiceImpl] [favouriteUpDown] test");
    }

    //test stationListCall
    @Test
    public void test_stationListCall(){
        Log.d(TAG, "[RadioServiceImpl] [stationListCall] test");
    }

    //test favouriteListCall
    @Test
    public void test_favouriteListCall(){
        Log.d(TAG, "[RadioServiceImpl] [favouriteListCall] test");
    }

    //test changeMode
    @Test
    public void test_changeMode(){
        Log.d(TAG, "[RadioServiceImpl] [changeMode] test");
    }

    //test radioSounds
    @Test
    public void test_radioSounds(){
        Log.d(TAG, "[RadioServiceImpl] [radioSounds] test");
    }

    //test getMode
    @Test
    public void test_getMode(){
        Log.d(TAG, "[RadioServiceImpl] [getMode] test");
    }

    //test getStationList
    @Test
    public void test_getStationList(){
        Log.d(TAG, "[RadioServiceImpl] [getStationList] test");
    }

    //test getFavouriteList
    @Test
    public void test_getFavouriteList(){
        Log.d(TAG, "[RadioServiceImpl] [getFavouriteList] test");
    }

    //test getRadioSounds
    @Test
    public void test_getRadioSounds(){
        Log.d(TAG, "[RadioServiceImpl] [getRadioSounds] test");
    }

    //test requestStationListInfo
    @Test
    public void test_requestStationListInfo(){
        Log.d(TAG, "[RadioServiceImpl] [requestStationListInfo] test");
        try {
            Method requestStationListInfoMethod = RadioServiceImplClazz.getDeclaredMethod("requestStationListInfo");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_requestStationListInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test requestStationListData
    @Test
    public void test_requestStationListData(){
        Log.d(TAG, "[RadioServiceImpl] [requestStationListData] test");
        try {
            Method requestStationListDataMethod = RadioServiceImplClazz.getDeclaredMethod("requestStationListData");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_requestStationListData error:" + e);
            assertEquals(2, 1);
        }
    }

    //test unregisterListenerLocked
    @Test
    public void test_unregisterListenerLocked(){
        Log.d(TAG, "[RadioServiceImpl] [unregisterListenerLocked] test");
        try {
            Method unregisterListenerLockedMethod = RadioServiceImplClazz.getDeclaredMethod("unregisterListenerLocked",IBinder.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_unregisterListenerLocked error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyBandChanged
    @Test
    public void test_notifyBandChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyBandChanged] test");
        try {
            Method notifyBandChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyBandChanged",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyBandChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyProgramInfoChanged
    @Test
    public void test_notifyProgramInfoChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyProgramInfoChanged] test");
        try {
            Method notifyProgramInfoChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyProgramInfoChanged",ProgramInfoParcel.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyProgramInfoChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyPresetInfoChanged
    @Test
    public void test_notifyPresetInfoChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyPresetInfoChanged] test");
        try {
            Method notifyPresetInfoChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyPresetInfoChanged",PresetInfoParcel.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyPresetInfoChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyStationListChanged
    @Test
    public void test_notifyStationListChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyStationListChanged] test");
        try {
            Method notifyStationListChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyStationListChanged",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyStationListChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyFavouriteListChanged
    @Test
    public void test_notifyFavouriteListChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyFavouriteListChanged] test");
        try {
            Method notifyFavouriteListChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyFavouriteListChanged",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyFavouriteListChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyModeChanged
    @Test
    public void test_notifyModeChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyModeChanged] test");
        try {
            Method notifyModeChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyModeChanged",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyModeChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test notifyRadioSoundsChanged
    @Test
    public void test_notifyRadioSoundsChanged(){
        Log.d(TAG, "[RadioServiceImpl] [notifyRadioSoundsChanged] test");
        try {
            Method notifyRadioSoundsChangedMethod = RadioServiceImplClazz.getDeclaredMethod("notifyRadioSoundsChanged",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_notifyRadioSoundsChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test initRadioSessionInfo
    @Test
    public void test_initRadioSessionInfo(){
        Log.d(TAG, "[RadioServiceImpl] [initRadioSessionInfo] test");
        try {
            Method initRadioSessionInfoMethod = RadioServiceImplClazz.getDeclaredMethod("initRadioSessionInfo");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_initRadioSessionInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test handlerSetRadioDispInfo
    @Test
    public void test_handlerSetRadioDispInfo(){
        Log.d(TAG, "[RadioServiceImpl] [handlerSetRadioDispInfo] test");
        try {
            Method handlerSetRadioDispInfoMethod = RadioServiceImplClazz.getDeclaredMethod("handlerSetRadioDispInfo",RadioDispInfo.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_handlerSetRadioDispInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test queryStationNumber
    @Test
    public void test_queryStationNumber(){
        Log.d(TAG, "[RadioServiceImpl] [queryStationNumber] test");
        try {
            Method queryStationNumberMethod = RadioServiceImplClazz.getDeclaredMethod("queryStationNumber",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_queryStationNumber error:" + e);
            assertEquals(2, 1);
        }
    }

    //test onFavouriteChanged
    @Test
    public void test_onFavouriteChanged(){
        Log.d(TAG, "[RadioServiceImpl] [onFavouriteChanged] test");
        try {
            Method onFavouriteChangedMethod = RadioServiceImplClazz.getDeclaredMethod("onFavouriteChanged",int.class,int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_onFavouriteChanged error:" + e);
            assertEquals(2, 1);
        }
    }

    //test queryFavouriteNumber
    @Test
    public void test_queryFavouriteNumber(){
        Log.d(TAG, "[RadioServiceImpl] [queryFavouriteNumber] test");
        try {
            Method queryFavouriteNumberMethod = RadioServiceImplClazz.getDeclaredMethod("queryFavouriteNumber",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_queryFavouriteNumber error:" + e);
            assertEquals(2, 1);
        }
    }

    //test setTunerPresetListInfo
    @Test
    public void test_setTunerPresetListInfo(){
        Log.d(TAG, "[RadioServiceImpl] [setTunerPresetListInfo] test");
        try {
            Method setTunerPresetListInfoMethod = RadioServiceImplClazz.getDeclaredMethod("setTunerPresetListInfo",StComdPresetList.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_setTunerPresetListInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test setTunerPresetListInfo
    @Test
    public void test_setTunerPresetListInfo(){
        Log.d(TAG, "[RadioServiceImpl] [setTunerPresetListInfo] test");
        try {
            Method setTunerPresetListInfoMethod = RadioServiceImplClazz.getDeclaredMethod("setTunerPresetListInfo",StComdPresetInfo.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_setTunerPresetListInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test setTunerStationListData
    @Test
    public void test_setTunerStationListData(){
        Log.d(TAG, "[RadioServiceImpl] [setTunerStationListData] test");
        try {
            Method setTunerStationListDataMethod = RadioServiceImplClazz.getDeclaredMethod("setTunerStationListData",StComdStationListdataRes.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_setTunerStationListData error:" + e);
            assertEquals(2, 1);
        }
    }

    //test setTunerStationListInfo
    @Test
    public void test_setTunerStationListInfo(){
        Log.d(TAG, "[RadioServiceImpl] [setTunerStationListInfo] test");
        try {
            Method setTunerStationListInfoMethod = RadioServiceImplClazz.getDeclaredMethod("setTunerStationListInfo",StComdStationListinfoRes.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_setTunerStationListInfo error:" + e);
            assertEquals(2, 1);
        }
    }

    //test radioSoundCheck
    @Test
    public void test_radioSoundCheck(){
        Log.d(TAG, "[RadioServiceImpl] [radioSoundCheck] test");
        try {
            Method radioSoundCheckMethod = RadioServiceImplClazz.getDeclaredMethod("radioSoundCheck");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_radioSoundCheck error:" + e);
            assertEquals(2, 1);
        }
    }

    //test onAudioOff
    @Test
    public void test_onAudioOff(){
        Log.d(TAG, "[RadioServiceImpl] [onAudioOff] test");
        try {
            Method onAudioOffMethod = RadioServiceImplClazz.getDeclaredMethod("onAudioOff");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_onAudioOff error:" + e);
            assertEquals(2, 1);
        }
    }

    //test bindComdTuner
    @Test
    public void test_bindComdTuner(){
        Log.d(TAG, "[RadioServiceImpl] [bindComdTuner] test");
        try {
            Method bindComdTunerMethod = RadioServiceImplClazz.getDeclaredMethod("bindComdTuner");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_bindComdTuner error:" + e);
            assertEquals(2, 1);
        }
    }

    //test syncComdTunerData
    @Test
    public void test_syncComdTunerData(){
        Log.d(TAG, "[RadioServiceImpl] [syncComdTunerData] test");
        try {
            Method syncComdTunerDataMethod = RadioServiceImplClazz.getDeclaredMethod("syncComdTunerData");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_syncComdTunerData error:" + e);
            assertEquals(2, 1);
        }
    }

    //test onValues
    @Test
    public void test_onValues(){
        Log.d(TAG, "[RadioServiceImpl] [onValues] test");
    }

    //test onValues
    @Test
    public void test_onValues(){
        Log.d(TAG, "[RadioServiceImpl] [onValues] test");
    }

    //test handlerAddFavourite
    @Test
    public void test_handlerAddFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [handlerAddFavourite] test");
        try {
            Method handlerAddFavouriteMethod = RadioServiceImplClazz.getDeclaredMethod("handlerAddFavourite",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_handlerAddFavourite error:" + e);
            assertEquals(2, 1);
        }
    }

    //test handlerDelFavourite
    @Test
    public void test_handlerDelFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [handlerDelFavourite] test");
        try {
            Method handlerDelFavouriteMethod = RadioServiceImplClazz.getDeclaredMethod("handlerDelFavourite",int.class);
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_handlerDelFavourite error:" + e);
            assertEquals(2, 1);
        }
    }

    //test handlerClrFavourite
    @Test
    public void test_handlerClrFavourite(){
        Log.d(TAG, "[RadioServiceImpl] [handlerClrFavourite] test");
        try {
            Method handlerClrFavouriteMethod = RadioServiceImplClazz.getDeclaredMethod("handlerClrFavourite");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_handlerClrFavourite error:" + e);
            assertEquals(2, 1);
        }
    }

    //test initHandler
    @Test
    public void test_initHandler(){
        Log.d(TAG, "[RadioServiceImpl] [initHandler] test");
        try {
            Method initHandlerMethod = RadioServiceImplClazz.getDeclaredMethod("initHandler");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_initHandler error:" + e);
            assertEquals(2, 1);
        }
    }

    //test handleMessage
    @Test
    public void test_handleMessage(){
        Log.d(TAG, "[RadioServiceImpl] [handleMessage] test");
    }

    //test Runnable
    @Test
    public void test_Runnable(){
        Log.d(TAG, "[RadioServiceImpl] [Runnable] test");
        try {
            Method RunnableMethod = RadioServiceImplClazz.getDeclaredMethod("Runnable");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_Runnable error:" + e);
            assertEquals(2, 1);
        }
    }

    //test run
    @Test
    public void test_run(){
        Log.d(TAG, "[RadioServiceImpl] [run] test");
    }

    //test Runnable
    @Test
    public void test_Runnable(){
        Log.d(TAG, "[RadioServiceImpl] [Runnable] test");
        try {
            Method RunnableMethod = RadioServiceImplClazz.getDeclaredMethod("Runnable");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_Runnable error:" + e);
            assertEquals(2, 1);
        }
    }

    //test run
    @Test
    public void test_run(){
        Log.d(TAG, "[RadioServiceImpl] [run] test");
    }

    //test Runnable
    @Test
    public void test_Runnable(){
        Log.d(TAG, "[RadioServiceImpl] [Runnable] test");
        try {
            Method RunnableMethod = RadioServiceImplClazz.getDeclaredMethod("Runnable");
            innerMethod1.setAccessible(true);
        } catch (Exception e){
            Log.e(TAG, "test_Runnable error:" + e);
            assertEquals(2, 1);
        }
    }

    //test run
    @Test
    public void test_run(){
        Log.d(TAG, "[RadioServiceImpl] [run] test");
    }

    //test ComdTunerListener
    @Test
    public void test_ComdTunerListener(){
        Log.d(TAG, "[ComdTunerListener] [ComdTunerListener] test");
        Object ComdTunerListenerObj = getComdTunerListenerObject();
    }

    //test notifyTunerDispInfo
    @Test
    public void test_notifyTunerDispInfo(){
        Log.d(TAG, "[ComdTunerListener] [notifyTunerDispInfo] test");
        Object ComdTunerListenerObj = getComdTunerListenerObject();
    }

    //test notifyTunerPresetListInfo
    @Test
    public void test_notifyTunerPresetListInfo(){
        Log.d(TAG, "[ComdTunerListener] [notifyTunerPresetListInfo] test");
        Object ComdTunerListenerObj = getComdTunerListenerObject();
    }

    //test notifyTunerstationListdata
    @Test
    public void test_notifyTunerstationListdata(){
        Log.d(TAG, "[ComdTunerListener] [notifyTunerstationListdata] test");
        Object ComdTunerListenerObj = getComdTunerListenerObject();
    }

    //test notifyTunerStationListInfo
    @Test
    public void test_notifyTunerStationListInfo(){
        Log.d(TAG, "[ComdTunerListener] [notifyTunerStationListInfo] test");
        Object ComdTunerListenerObj = getComdTunerListenerObject();
    }

    //test serviceDied
    @Test
    public void test_serviceDied(){
        Log.d(TAG, "[IComdTunerDeathRecipient] [serviceDied] test");
        Object IComdTunerDeathRecipientObj = getIComdTunerDeathRecipientObject();
    }

    //test binderDied
    @Test
    public void test_binderDied(){
        Log.d(TAG, "[RadioDeathRecipient] [binderDied] test");
        Object RadioDeathRecipientObj = getRadioDeathRecipientObject();
    }

    //test RadioSourceListener
    @Test
    public void test_RadioSourceListener(){
        Log.d(TAG, "[RadioSourceListener] [RadioSourceListener] test");
        Object RadioSourceListenerObj = getRadioSourceListenerObject();
    }

    //test onRequestSourceChange
    @Test
    public void test_onRequestSourceChange(){
        Log.d(TAG, "[RadioSourceListener] [onRequestSourceChange] test");
        Object RadioSourceListenerObj = getRadioSourceListenerObject();
    }

    //test onRequestSourcePlay
    @Test
    public void test_onRequestSourcePlay(){
        Log.d(TAG, "[RadioSourceListener] [onRequestSourcePlay] test");
        Object RadioSourceListenerObj = getRadioSourceListenerObject();
    }

    //test onRequestAudioChange
    @Test
    public void test_onRequestAudioChange(){
        Log.d(TAG, "[RadioSourceListener] [onRequestAudioChange] test");
        Object RadioSourceListenerObj = getRadioSourceListenerObject();
    }

    //test needUpdateMediaInfo
    @Test
    public void test_needUpdateMediaInfo(){
        Log.d(TAG, "[RadioMediaInfoListener] [needUpdateMediaInfo] test");
        Object RadioMediaInfoListenerObj = getRadioMediaInfoListenerObject();
    }

    //test RadioDispInfo
    @Test
    public void test_RadioDispInfo(){
        Log.d(TAG, "[RadioDispInfo] [RadioDispInfo] test");
        Object RadioDispInfoObj = getRadioDispInfoObject();
    }
}