#!/bin/sh
echo 0 > /proc/sys/kernel/randomize_va_space
cd challenge1
/usr/local/bin/docker-compose up &
cd ../challenge2
/usr/local/bin/docker-compose up &
cd ../challenge3
/usr/local/bin/docker-compose up &
cd ../challenge4
/usr/local/bin/docker-compose up &
cd ../challenge5
/usr/local/bin/docker-compose up &
cd ../challenge6
/usr/local/bin/docker-compose up &

