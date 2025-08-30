CC = g++
CFLAGS = -Wall -Wextra -g -MMD -MP
MODULES = $(wildcard module_*.c) top_api.c
MODULE_OBJS = $(MODULES:.c=.o)
LIB = libapis.so

all: $(LIB)

$(LIB): $(MODULE_OBJS)
	$(CC) -shared -fPIC -o $@ $(MODULE_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

test_apis.o: test_apis.c top_api.h $(MODULES:.c=.h) module_interface.h
	$(CC) $(CFLAGS) -c test_apis.c -o test_apis.o

test_apis: test_apis.o $(LIB)
	$(CC) $(CFLAGS) -o test_apis test_apis.o -L. -lapis

run_test: test_apis
	LD_LIBRARY_PATH=. ./test_apis

clean:
	rm -f *.o *.d $(LIB) test_apis

-include $(MODULE_OBJS:.o=.d) test_apis.d
