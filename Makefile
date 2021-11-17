#
# ICS2305 - Utility Library 
# Code for the ICS2305 Projects
#

# Make environment
INCLUDES=-I.
CC=gcc
CFLAGS=-I. -c -g -Wall $(INCLUDES)
LINKARGS=-lm
LIBS=-lm

# Files
OBJECT_FILES=	ics2305-assign1.o \
				ics2305-assign1-support.o

# Productions
all : ics2305-assign1

ics2305-assign1 : $(OBJECT_FILES)
	$(CC) $(LINKARGS) $(OBJECT_FILES) -o $@ $(LIBS)

ics2305-assign1.o : ics2305-assign1.c ics2305-assign1-support.h
	$(CC) $(CFLAGS) $< -o $@

ics2305-assign1-support.o : ics2305-assign1-support.c ics2305-assign1-support.h 
	$(CC) $(CFLAGS) $< -o $@

clean : 
	rm -f ics2305-assign1 $(OBJECT_FILES)
