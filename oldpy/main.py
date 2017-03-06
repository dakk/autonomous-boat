import json
from Boat import Boat

if __name__ == "__main__":
	fc = open ('boatconfig.json', 'r').read ()
	conf = json.loads (fc)
	
	b = Boat (conf)
	b.startup ()
	b.mainLoop ()
	
