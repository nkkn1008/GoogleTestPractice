#
#  Makefile for
CXX     = g++
AR      = ar
ARFLAG  = crsv
SRCDIR	= .
OBJDIR	= ./
INCD00	= ./
TARGET  = libSample.a
LIBS	= 
CFLAGS	= -Wall -O
INCD	= -I. -I$(INCD00)

#
OBJS=\
	$(OBJDIR)Sample.o \

#
all:	$(OBJS) $(TARGET)
#
.cpp.o:
		$(CXX) $(CFLAGS) -c  $(INCD) $<

#
$(TARGET): $(OBJS)
		$(AR) $(ARFLAG) $(TARGET) $(OBJS)
		@rm -f $(OBJS)
		@echo "libSample.a make success"

clear clean:
		@rm -f $(OBJS)
		@rm -f $(TARGET)
