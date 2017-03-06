class Position:
	def __init__ (self, lat, lon, speed = 0, sats = 0):
		self.latitude = lat
		self.logitude = lon
		self.speed = speed
		self.satellites = sats
		
		
class GPS:
	def __init__ (self):
		pass
		
	def start (self):
		pass
		
	def getPosition (self):
		return Position (0, 0, 0, 0)
