#include <stdio.h>
#include <string.h>
#include "config.h"

int config_load (char *path, config_t *config) {
	return -1;
}


void config_default (config_t *config) {
	config->update_interval = 6;
	strcpy (config->route_file, "default_route.csv");
}

