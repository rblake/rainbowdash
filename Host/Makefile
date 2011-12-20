all: becho aecho rtime clocktest rainbowd rainbowclock rainbowmarquee rainbowspectrum

CFLAGS=-O3 -Wall -ansi -pedantic -std=gnu99

clean:
	rm -f becho aecho rtime clocktest rainbowd rainbowclock rainbowmarquee rainbowspectrum
	rm -f *.class

becho: becho.c
	gcc ${CFLAGS} -o becho becho.c

aecho: aecho.c
	gcc ${CFLAGS} -o aecho aecho.c

rtime: rtime.c
	gcc ${CFLAGS} -o rtime rclock.c rtime.c

rtime.class: rtime.java
	javac rtime.java

clocktest: clocktest.c
	gcc ${CFLAGS} -o clocktest clocktest.c

rainbowd: rainbowd.c
	gcc ${CFLAGS} -o rainbowd rainbowd.c

rainbowclock: rainbowclock.c
	gcc ${CFLAGS} -o rainbowclock rainbowclock.c

rainbowmarquee: rainbowmarquee.c
	gcc ${CFLAGS} -o rainbowmarquee rclock.c rainbowmarquee.c

rainbowspectrum: rainbowspectrum.c
	gcc ${CFLAGS} -o rainbowspectrum rainbowspectrum.c

.PHONY: all clean
