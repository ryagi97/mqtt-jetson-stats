# Client

The client has two functions; to collect and send jetson metrics to an MQTT
broker, and to receive commands from an MQTT broker and act on them.


### Data Collection

This is isnpired by the metrics collected by the `tegrastats` utility, and are
stored in a struct.


