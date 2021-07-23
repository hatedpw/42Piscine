#####################################
#		Author: Nathanael Ervin		#
#	Last Modified 11/07/2021 1100	#
#####################################

CC =gcc
CFLAGS =-Werror -Wall -Wextra
MAIN :=$(shell find . -type f -name "R02-main.c")
CFILES :=$(shell find ex** -type f -name "*.c")

all:
	${CC} ${CFLAGS} ${CFILES} ${MAIN}

fclean:
	rm -f rush-02