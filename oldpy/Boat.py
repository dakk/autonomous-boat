from RouteManager import RouteManager
from GPS import GPS, Position

class Boat:
	def __init__ (self, conf):
		self.loop = False
		self.conf = conf
		self.route = RouteManager (conf['waypoints'])
		self.gps = GPS ()
		self.wind = Wind ()
		self.compass = Compass ()
		
	def startup (self):
		self.gps.start ()
		
		
	# Turn the boat pointing to the given direction
	def turnTo (self, angle):
		cdir = self.compass.get ()
		
		
		insight = False
		while not insigth:
			dr = self.compass.get ()
			if 
			
	# Dobbiamo andare verso nextangle ed al momento siamo direzionati su cangle
	# Sapendo che il vento arriva da wdirection
	def getCruiseBestAngle (self, cangle, nextangle):
		(wdirection, wspeed) = self.wind.get ()
		
		# Bolina
		if wdirection - nextangle < 45:
			if cangle - wdirection 
		else:
		
		
	def mainLoop (self):
		self.loop = True
		
		while self.loop:
			cpos = self.gps.getPosition ()
			cangle = self.compass.get ()

			(nextposition, nextangle, distance) = self.route.getNextWaypoint (cpos)
			cruiseangle = self.getCruiseBestAngle (cangle, nextangle)
			self.turnTo (cruiseangle)
			
			
			
			
			
