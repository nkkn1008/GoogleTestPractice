CXX       = g++
GTESTDIR  = ../../gtest-1.6.0
CXXFLAGS  = -I$(GTESTDIR)/include
OBJS      =	testmain.o

PROGRAM   = StudyProg.exe
GTESTOBJS = $(GTESTDIR)/libgtest_main.a $(GTESTDIR)/libgtest.a
LIBOBJS   = ../LIB/libsample.a

$(PROGRAM): $(OBJS)
			$(CXX) -o $(PROGRAM) $(OBJS) $(GTESTOBJS) $(LIBOBJS)

clean:
		rm -f $(OBJS)
