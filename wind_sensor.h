#ifndef WIND_SENSOR_H
#define WIND_SENSOR_H
#include <Arduino.h>
#include "utility.h"

#define WIND_DIRECTION_PIN 27
#define WIND_VELOCITY_PIN  26

float map_float(float x, float in_min, float in_max, float out_min, float out_max);
float get_wind_velocity();
int get_wind_direction();
void get_wind_data(struct wind *);
#endif