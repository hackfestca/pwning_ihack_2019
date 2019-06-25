# Use an official Python runtime as a parent image
FROM debian:stretch

ENV DEBIAN_FRONTEND noninteractive

RUN dpkg --add-architecture i386
# Update
RUN apt-get update --fix-missing && apt-get -y upgrade

# System deps
RUN apt-get install libc6-i386
RUN apt-get install -y xinetd

RUN groupadd -r chal4 && useradd -r -g chal4 chal4
RUN mkdir /home/chal4

ADD config/ihack2019.xinetd /etc/xinetd.d/chal4
ADD config/run_xinetd.sh /etc/run_xinetd.sh
ADD run_chal4.sh /home/chal4/run_chal4.sh
ADD flag4.txt /home/chal4/flag4.txt
ADD chal4.c /home/chal4/chal4.c
ADD chal4 /home/chal4/chal4

RUN chown -R chal4 /home/chal4
RUN chmod 750 /home/chal4/chal4
RUN chmod 750 /home/chal4/run_chal4.sh

RUN chmod 700 /etc/run_xinetd.sh

RUN service xinetd restart