#ifndef __ROUTE_H
#define __ROUTE_H

typedef struct {
	double latitude;
	double longitude;
} checkpoint_t;


typedef struct {
	checkpoint_t *checkpoints;
	int checkpoints_number;
} route_t;


int route_load (char *, route_t *);

#endif
