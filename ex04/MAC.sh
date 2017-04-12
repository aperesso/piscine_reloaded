#!/bin/sh

ifconfig | grep ether | sed 's/ether//g' | sed 's/	//' | sed 's/ //g'
