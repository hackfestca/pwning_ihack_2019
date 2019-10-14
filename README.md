### IHack 2019 pwning challenge by sushi

## Introduction

The Ihack CTF is a hacking competition organized 6 months before the Hackfest. This competition wants to be accessible to all levels. For more details, you can see the official website: [https://ihack.computer/](https://ihack.computer/)

For the 2019 edition, I created a track on Linux binary exploitation (pwning). I tried to build challenges in order to introduce beginners to this "world".

You can find the write-ups on my [blog](https://www.sushi-hacking-blog.com/2019/06/16/Ihack-2019-pwning-challenges.html):

You can set up the challenges following the instructions below.

## Dependencies

You need to install [docker](https://docs.docker.com/install/linux/docker-ce/debian/) and [docker-compose](https://docs.docker.com/compose/install/).

With apt-get, you need to install the following packages:

```bash
apt-get install xinetd libc6-i386 lib32ncurses5-dev lib32stdc++6
```

## Installation

After you clone the depot, you just need to launch the start.sh file (you need to be root):
