#include <ros.h>
#include <std_msgs/String.h>
#include "utility.h"
#include "wind_sensor.h"

ros::NodeHandle  nh;

std_msgs::String str_msg;
ros::Publisher chatter("lss/gcs/wind_sensor", &str_msg);
void setup(){
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.advertise(chatter);
  Serial.begin(115200);
}

void loop(){
  struct wind wind_data;
  get_wind_data(&wind_data);
  char buff[40];
  sprintf(buff,"{'dire': %d, 'vel' : %d}",wind_data.direction, wind_data.velocity);
  str_msg.data = buff;
  chatter.publish( &str_msg );
  nh.spinOnce();
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
}