CC = cc
CFLAGS = -Wall -g -shared -fPIC -I. -I/usr/include/osl

all: aimbot_dylib

aimbot_dylib: aimbot.c Vector3.h
	$(CC) $(CFLAGS) -o aimbot_dylib dlsym -ldl $(LDFLAGS) aimbot.c

clean:
	rm -f aimbot_dylib
