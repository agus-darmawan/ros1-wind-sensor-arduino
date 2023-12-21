# ROS SERIAL ARDUINO FOR WIND SENSOR
This an Arduino sketch for the wind sensor that sends the data to the ROS serial node. The ROS serial node is a ROS node that allows the communication between ROS and Arduino.

## Getting Started
### Prerequisites
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
* [ROS](http://wiki.ros.org/ROS/Installation)
* [ROS serial node](http://wiki.ros.org/rosserial_arduino/Tutorials/Arduino%20IDE%20Setup)
* [ROS serial library](https://www.arduino.cc/reference/en/libraries/rosserial-arduino-library/)

### Installing
* Clone the repository
* Open the Arduino IDE
* Install the ROS serial Library in the Arduino IDE
* Open the sketch
* Upload the sketch to the Arduino

## Running the tests
* Open the Arduino IDE
* Open the serial monitor
* Check that the data is being sent correctly
* Connect the Arduino to the computer
* Run the ROS serial node
* Check that the data is being received correctly

## Topics List
* /lss/gc/wind_sensor (std_msgs/String) -> Dictionary with the wind sensor data