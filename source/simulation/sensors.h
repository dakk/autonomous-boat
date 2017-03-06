#ifndef __SIMULATION_SENSORS_H
#define __SIMULATION_SENSORS_H

#include "../wind.h"
#include "../location.h"

int gps_get (location_t *);
int compass_get (double *);
int wind_get (wind_t *);

#endif