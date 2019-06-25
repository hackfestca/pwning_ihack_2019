# Use an official Python runtime as a parent image
FROM debian:stretch

ENV DEBIAN_FRONTEND noninteractive

RUN dpkg --add-architecture i386
# Update
RUN apt-get update --fix-missing && apt-get -y upgrade

# System deps
RUN apt-get install libc6-i386
RUN apt-get install -y xinetd

RUN groupadd -r chal6 && useradd -r -g chal6 chal6
RUN mkdir /home/chal6

ADD config/ihack2019.xinetd /etc/xinetd.d/chal6
ADD config/run_xinetd.sh /etc/run_xinetd.sh
ADD run_chal6.sh /home/chal6/run_chal6.sh
ADD flag6.txt /home/chal6/flag6.txt
ADD chal6.c /home/chal6/chal6.c
ADD chal6 /home/chal6/chal6

RUN chown -R chal6 /home/chal6
RUN chmod 750 /home/chal6/chal6
RUN chmod 750 /home/chal6/run_chal6.sh

RUN chmod 700 /etc/run_xinetd.sh

RUN service xinetd restart
