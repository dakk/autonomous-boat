#ifndef __CONFIG_H
#define __CONFIG_H

typedef struct {
	char route_file [128];
	int update_interval;
} config_t;

int config_load (char *, config_t *);
void config_default (config_t *);

#endif
