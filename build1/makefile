SRC_FILES=main.c app.c bar.c lib.c
OBJ_FILES=$(patsubst %.c, %.o, ${SRC_FILES})
DEP_FILES=$(patsubst %.c, %.dep, ${SRC_FILES})

VPATH = src

CFLAGS = -c -g
LDFLAGS = -g

appexp: ${OBJ_FILES}
	gcc ${LDFLAGS} -o appexp ${OBJ_FILES}

%.o:%.c
	gcc ${CFLAGS} -o $@ $<

clean:
	rm *.o appexp

include ${DEP_FILES}

%.dep: %.c
	@set -e; rm -f $@; \
	gcc -MM $(CFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.[ :]*,\1.o $@ : ,9' < $@.$$$$ > $@;

	rm -f $@.$$$$
