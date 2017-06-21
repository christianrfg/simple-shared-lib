# Makefile template for shared library

CC = gcc	# compilador C
CFLAGS = -fPIC -Wall -Wextra -O2 -g	# C flags
LDFLAGS = -shared	# linking flags
RM = rm -f  # comando rm
TARGET_LIB = libfuncoes.so # target lib
DIR_DEST = /usr/lib/		# dir destino -> libs

SRCS = numeroPrimo.c fibonacci.c maxDivComum.c palindromo.c # arquivos source
OBJS = $(SRCS:.c=.o)

.PHONY: all
all: ${TARGET_LIB}
	mv $(TARGET_LIB) $(DIR_DEST)

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -lm -o $@ $^

$(SRCS:.c=.d):%.d:%.c
	$(CC) $(CFLAGS) -lm -MM $< >$@
	


.PHONY: clean
clean:
	-${RM} ${OBJS} $(SRCS:.c=.d)
