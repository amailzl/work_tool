class vehicle_property(object):
	propid=""
	access="NA";
	signalid=""

	"""docstring for vehicle_property"""
	def __init__(self, propid, access, signalid):
		super(vehicle_property, self).__init__()
		self.propid = propid
		self.access = access
		self.signalid = signalid

	def get_propid(self):
		return self.propid

	def get_access(self):
		return self.access

	def get_signalid(self):
		return self.signalid