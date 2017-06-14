# Makefile template for shared library

CC = gcc # C compiler
CFLAGS = -fPIC -Wall -Wextra -O2 -g # C flags
LDFLAGS = -shared  # linking flags
RM = rm -f  # rm command
TARGET_LIB = libfuncoes.so # target lib

SRCS = numeroPrimo.c fibonacci.c maxDivComum.c palindromo.c # source files
OBJS = $(SRCS:.c=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -lm -o $@ $^

$(SRCS:.c=.d):%.d:%.c
	$(CC) $(CFLAGS) -lm -MM $< >$@


.PHONY: clean
clean:
	-${RM} ${OBJS} $(SRCS:.c=.d)
