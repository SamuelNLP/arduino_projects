#!/bin/sh
sudo usermod -a -G dialout samuel.pedro
sudo chmod a+rw /dev/ttyACM0
