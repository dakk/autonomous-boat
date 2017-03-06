#ifndef __WIND_H
#define __WIND_H

typedef struct {
    double direction;
    double speed;
} wind_t;


int wind_get (wind_t *);

#endif