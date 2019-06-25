# Use an official Python runtime as a parent image
FROM debian:stretch

ENV DEBIAN_FRONTEND noninteractive

RUN dpkg --add-architecture i386
# Update
RUN apt-get update --fix-missing && apt-get -y upgrade

# System deps
RUN apt-get install libc6-i386
RUN apt-get install -y xinetd

RUN groupadd -r chal5 && useradd -r -g chal5 chal5
RUN mkdir /home/chal5

ADD config/ihack2019.xinetd /etc/xinetd.d/chal5
ADD config/run_xinetd.sh /etc/run_xinetd.sh
ADD run_chal5.sh /home/chal5/run_chal5.sh
ADD flag5.txt /home/chal5/flag5.txt
ADD chal5.c /home/chal5/chal5.c
ADD chal5 /home/chal5/chal5

RUN chown -R chal5 /home/chal5
RUN chmod 750 /home/chal5/chal5
RUN chmod 750 /home/chal5/run_chal5.sh

RUN chmod 700 /etc/run_xinetd.sh

RUN service xinetd restart