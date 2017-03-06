#ifndef __ROUTE_H
#define __ROUTE_H

#include "location.h"

typedef struct {
	location_t *checkpoints;
	int checkpoints_number;
} route_t;


int route_load (char *, route_t *);

#endif
