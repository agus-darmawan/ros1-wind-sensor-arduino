#include "wind_sensor.h"

float map_float(float x, float in_min, float in_max, float out_min, float out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int get_wind_direction(){
  int direction = map(analogRead(WIND_DIRECTION_PIN), 0, 1023, 0, 360);
  if(direction  > 360){
    direction  -= 360;
  }
  else if(direction <0){
    direction  += 360;
  }
  return direction;
}

float get_wind_velocity(){
  float sensor_voltage  = (analogRead(WIND_VELOCITY_PIN) / 1023) * 5;
  float velocity = map_float(sensor_voltage, 0.4, 2, 0.0, 32.4);
  return ((velocity *3600)/1609.344);
}
void get_wind_data(struct wind *wind_data){
  wind_data->direction = get_wind_direction();
  wind_data->velocity = get_wind_velocity();
  Serial.print("Direction : ");
  Serial.print(wind_data->direction);
  Serial.println("deg");
  Serial.print("Velocity : ");
  Serial.print(wind_data->velocity);
  Serial.println(" mph");
}