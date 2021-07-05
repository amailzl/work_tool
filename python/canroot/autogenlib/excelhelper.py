import xlrd
import xlwt
import os
import os.path
from xlutils.copy import copy
from xlwt import *
from autogenlib.tokemapbuilder import tokenmapbuilder
from autogenlib.fileope import write_autogen_property

class excelhelper(object):
	"""docstring for excelhelper"""
	property_book=None
	property_sheet=None
	history_sheet=None
	env=None
	excel_path = ""

	ht_st_cols={}
	ht_st_cols["ver"]=0
	ht_st_cols["comment"]=ht_st_cols["ver"]+1

	pt_st_cols = {}
	pt_st_cols["WRAPPER"]=0
	pt_st_cols["at_gen_category"]=pt_st_cols["WRAPPER"]+1
	pt_st_cols["at_gen_name"]=pt_st_cols["at_gen_category"]+1
	pt_st_cols["at_gen_method"]=pt_st_cols["at_gen_name"]+1
	pt_st_cols["value_type"]=pt_st_cols["at_gen_method"]+1
	pt_st_cols["real_type"]=pt_st_cols["value_type"]+1
	pt_st_cols["custom_area_id_enabled"]=pt_st_cols["real_type"]+1
	pt_st_cols["set_enabled"]=pt_st_cols["custom_area_id_enabled"]+1
	pt_st_cols["default_zone"]=pt_st_cols["set_enabled"]+1
	pt_st_cols["auto_gen_enabled"]=pt_st_cols["default_zone"]+1
	pt_st_cols["extra"]=pt_st_cols["auto_gen_enabled"]+1
	pt_st_cols["legacy"]=pt_st_cols["extra"]+1
	pt_st_cols["property"]=pt_st_cols["legacy"]+1
	pt_st_cols["propertyid"]=pt_st_cols["property"]+1
	pt_st_cols["propertyns"]=pt_st_cols["propertyid"]+1

	pt_st_row=0

	red_line=XFStyle()

	def __init__(self, arg):
		super(excelhelper, self).__init__()
		# print(arg)
		fnt=Font()
		fnt.name=u'微软雅黑'
		fnt.colour_index=0x02
		fnt.bold=True
		self.red_line.font=fnt
		self.env=arg
		self.excel_path = self.env.get_script_root() + "/auto_gen_property.xls"

	def init_property_sheet(self):
		#check book exist
		# print(self.excel_root + "propertyexcel.xlsx")
		if(os.path.isfile(self.excel_path)) :
			print("property excel book exists, Pass creation...")
			self.property_book=xlrd.open_workbook(self.excel_path)
			if('History' in self.property_book.sheet_names()):
				print("History sheet exists, Pass check ...")
			else :
				print("someting wrong happened, pls remove old excel, and re-run program")
			if('Properties' in self.property_book.sheet_names()):
				print("Properties sheet exists, Pass check ...")
			else :
				print("someting wrong happened, pls remove old excel, and re-run program")

		else:
			self.property_book = xlwt.Workbook(encoding = 'utf-8')
			self.history_sheet = self.property_book.add_sheet('History')
			self.property_sheet = self.property_book.add_sheet('Properties')

			self.history_sheet.write(self.pt_st_row,self.ht_st_cols["ver"],"version")
			self.history_sheet.write(self.pt_st_row,self.ht_st_cols["comment"],"comment")

			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_category"],"category(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["legacy"],"legacy(自动生成)")
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["property"],"property(自动生成)")
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyid"],"property ID(自动生成)")
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyns"],"property namespace(自动生成)")
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_name"],"Class name(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_method"],"method name(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["value_type"],"value_type(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["real_type"],"real_type(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["custom_area_id_enabled"],"custom_area_id_enabled(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["set_enabled"],"set_enabled(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["default_zone"],"default_zone(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["extra"],"extra(需手动确认)",self.red_line)
			self.property_sheet.write(self.pt_st_row,self.pt_st_cols["auto_gen_enabled"],"auto_gen_enabled(需手动确认)",self.red_line)
			self.ps_row_write()

		print("excel init Done")

	def write_property(self, tokenmap):
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["legacy"], tokenmap["#legacy"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["property"], tokenmap["#property_namespace"] + "." + tokenmap["#property_ID"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyid"],tokenmap["#property_ID"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyns"],tokenmap["#property_namespace"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_name"],tokenmap["#class_name"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_method"],"(set/get)"+tokenmap["#opename"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["value_type"],tokenmap["#value_type"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["real_type"],tokenmap["#real_type"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["custom_area_id_enabled"],tokenmap["#custom_area_id_enabled"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["set_enabled"],tokenmap["#set_enabled"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["default_zone"],tokenmap["#default_zone"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["extra"],tokenmap["#extra"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_category"], tokenmap["#category"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["auto_gen_enabled"], tokenmap["#auto_gen_enabled"])
		self.ps_row_write()
		self.property_book.save('patac_legacy_property.xls')

	def hal_name_reset(self):
		self.property_book = xlwt.Workbook(encoding = 'utf-8')
		self.history_sheet = self.property_book.add_sheet('History')
		self.property_sheet = self.property_book.add_sheet('Properties')

		self.history_sheet.write(self.pt_st_row,self.ht_st_cols["ver"],"version")
		self.history_sheet.write(self.pt_st_row,self.ht_st_cols["comment"],"comment")
		self.property_sheet.write(0,self.pt_st_cols["WRAPPER"],"category(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["at_gen_category"],"func(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["legacy"],"VehiclePropertyGroup")
		self.property_sheet.write(0,self.pt_st_cols["property"],"property(自动生成)")
		self.property_sheet.write(0,self.pt_st_cols["propertyid"],"property ID(自动生成)")
		self.property_sheet.write(0,self.pt_st_cols["propertyns"],"property namespace(自动生成)")
		self.property_sheet.write(0,self.pt_st_cols["at_gen_name"],"Class name(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["at_gen_method"],"method name(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["value_type"],"value_type(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["real_type"],"real_type(自动生成)")
		self.property_sheet.write(0,self.pt_st_cols["custom_area_id_enabled"],"custom_area_id_enabled(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["set_enabled"],"set_enabled(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["default_zone"],"default_zone(需手动确认)",self.red_line)
		self.property_sheet.write(0,self.pt_st_cols["extra"],"signalID(自动生成)")
		self.property_sheet.write(0,self.pt_st_cols["auto_gen_enabled"],"auto_gen_enabled(需手动确认)",self.red_line)
		self.ps_row_write()

	def write_hal_property(self, tokenmap):
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["WRAPPER"], tokenmap["#WRAPPER"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["legacy"], tokenmap["#legacy"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["property"], tokenmap["#property_namespace"] + "." + tokenmap["#property_ID"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyid"],tokenmap["#property_ID"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["propertyns"],tokenmap["#property_namespace"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_name"],tokenmap["#class_name"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_method"],"(set/get)"+tokenmap["#opename"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["value_type"],tokenmap["#value_type"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["real_type"],tokenmap["#real_type"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["custom_area_id_enabled"],tokenmap["#custom_area_id_enabled"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["set_enabled"],tokenmap["#set_enabled"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["default_zone"],tokenmap["#default_zone"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["extra"],tokenmap["#extra"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["at_gen_category"], tokenmap["#category"])
		self.property_sheet.write(self.pt_st_row,self.pt_st_cols["auto_gen_enabled"], tokenmap["#auto_gen_enabled"])
		self.ps_row_write()
		self.property_book.save('hal_property.xls')

	def read_property(self):
		tb=tokenmapbuilder()

		self.property_book=xlrd.open_workbook(self.excel_path)
		self.property_sheet=self.property_book.sheet_by_name('Properties')
		self.pt_st_row=1
		# while(not self.property_sheet.cell_type(self.pt_st_row, 0) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
		all_row_values = self.property_sheet.row_values(self.pt_st_row)
		print(all_row_values)

		# token=tb.set_category(all_row_values[self.pt_st_cols["at_gen_category"]]).\
		# 	set_class_name(all_row_values[self.pt_st_cols["at_gen_name"]]).\
		# 	set_property_id(all_row_values[self.pt_st_cols["propertyid"]]).\
		# 	set_property_namespace(all_row_values[self.pt_st_cols["propertyns"]]).\
		# 	set_value_type(all_row_values[self.pt_st_cols["value_type"]]).\
		# 	set_enabled(all_row_values[self.pt_st_cols["set_enabled"]]).\
		# 	set_custom_area_id_enabled(all_row_values[self.pt_st_cols["custom_area_id_enabled"]]).\
		# 	set_real_type(all_row_values[self.pt_st_cols["real_type"]]).\
		# 	set_opename(all_row_values[self.pt_st_cols["at_gen_method"]]).\
		# 	set_auto_gen_enabled(all_row_values[self.pt_st_cols["auto_gen_enabled"]]).\
		# 	set_default_zone(all_row_values[self.pt_st_cols["default_zone"]]).\
		# 	set_extra(all_row_values[self.pt_st_cols["extra"]]).\
		# 	get_token_map()
		token=tb.set_category(all_row_values[self.pt_st_cols["at_gen_category"]]).\
			set_class_name(all_row_values[self.pt_st_cols["at_gen_name"]]).\
			set_property_id(all_row_values[self.pt_st_cols["propertyid"]]).\
			set_property_namespace(all_row_values[self.pt_st_cols["propertyns"]]).\
			set_value_type(all_row_values[self.pt_st_cols["value_type"]]).\
			set_enabled(all_row_values[self.pt_st_cols["set_enabled"]]).\
			set_custom_area_id_enabled(all_row_values[self.pt_st_cols["custom_area_id_enabled"]]).\
			set_real_type(all_row_values[self.pt_st_cols["real_type"]]).\
			set_opename(all_row_values[self.pt_st_cols["at_gen_method"]]).\
			set_auto_gen_enabled(all_row_values[self.pt_st_cols["auto_gen_enabled"]]).\
			set_default_zone("defaultzone").\
			set_extra(all_row_values[self.pt_st_cols["extra"]]).\
			get_token_map_and_check()
		print(token)
			# self.pt_st_row=self.pt_st_row+1

		py_out_dir = "/home/amai/Work/workdesk/canroot/autogenlib"
		# print(str(write_autogen_property(py_out_dir + "/temp_property",py_out_dir + "/test_dst_file", token, True)) + " times replacement happened ")
		# env.get_autogen_file()

	def ps_row_write(self):
		self.pt_st_row=self.pt_st_row+1

	def read_property(self, row):
		self.property_book=xlrd.open_workbook("/home/amai/Work/MY-github/work_tool/python/canroot/hal_property.xls")
		self.property_sheet=self.property_book.sheet_by_name('DriveAssistProperty')
		self.pt_st_row=row
		if (not self.property_sheet.cell_type(self.pt_st_row, 0) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
			all_row_values = self.property_sheet.row_values(self.pt_st_row)
			return all_row_values
		else:
			return None