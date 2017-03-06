#ifndef __LOCATION_H
#define __LOCATION_H

typedef struct {
    double latitude;
    double longitude;
} location_t;

double location_distance (location_t, location_t);
double location_hdg (location_t, location_t);

#endif