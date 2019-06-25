# Use an official Python runtime as a parent image
FROM debian:stretch

ENV DEBIAN_FRONTEND noninteractive

RUN dpkg --add-architecture i386
# Update
RUN apt-get update --fix-missing && apt-get -y upgrade

# System deps
RUN apt-get install libc6-i386
RUN apt-get install -y xinetd

RUN groupadd -r chal2 && useradd -r -g chal2 chal2
RUN mkdir /home/chal2

ADD config/ihack2019.xinetd /etc/xinetd.d/chal2
ADD config/run_xinetd.sh /etc/run_xinetd.sh
ADD run_chal2.sh /home/chal2/run_chal2.sh
ADD flag2.txt /home/chal2/flag2.txt
ADD chal2.c /home/chal2/chal2.c
ADD chal2 /home/chal2/chal2

RUN chown -R chal2 /home/chal2
RUN chmod 750 /home/chal2/chal2
RUN chmod 750 /home/chal2/run_chal2.sh

RUN chmod 700 /etc/run_xinetd.sh

RUN service xinetd restart