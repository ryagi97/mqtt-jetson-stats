# mqtt-jetson-stats

Using MQTT to publish statistics and performance metrics from multiple jetson
devices to a single server for easier cluster monitoring.

## Client

setup for client to collect data, push to server and receive commands

### Requirements

## Server

Setup for server to receive client metrics and push commands. Based on mosquitto.

### Requirements

```sh
sudo apt update
sudo apt install mosquitto
```
