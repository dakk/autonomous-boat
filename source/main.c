#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include "route.h"
#include "logger.h"

int main () {
	config_t config;
	route_t route;

	log ("main", "autonomousboat 0.1\n");

	/* Configuration loading */
	if (config_load ("config.cfg", &config)) {
		log ("main", "error while loading config, loading default\n");
		config_default (&config);
	}

	log ("config", "update interval: %d\n", config.update_interval);
	log ("config", "route file: %s\n", config.route_file);


	/* Loading route */
	

	return 0;
}
