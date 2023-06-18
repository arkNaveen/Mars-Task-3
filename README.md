# Mars-Task-3
An Ultrasonic sensor based Movement Detection and Distance Measurement system in Arduino Uno

The push button is used with interrupt driven programming as a on/off state for the system.
The ultrasonic sensor repeatedly reads values if the state of the system is true i.e, ON state. It then compares the distance values within a minute time delay to check if the previous distance (distance1) is same as the current distance (distance2). IF the distances are different then the latest distance value gets printed in the serial monitor. Using an interrupt for the push button pin makes the system much faster and reliable
#
The false state i.e, LOW of the system means that the system is in a "standby or sleep" mode waiting for the interrupt to wake it up.
This kind of system preserves the power by only printing the distance value if there is a considerable change in it which can be used for object tracking purposes.
