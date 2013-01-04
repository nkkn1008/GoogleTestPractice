CXX       = g++
GTESTDIR  = ../gtest-1.6.0
CXXFLAGS  = -I$(GTESTDIR)/include
OBJS      = mytest.o testmain.o
PROGRAM   = SampleTest
GTESTOBJS = $(GTESTDIR)/libgtest_main.a $(GTESTDIR)/libgtest.a

$(PROGRAM): $(OBJS)
			$(CXX) -o $(PROGRAM) $(OBJS) $(GTESTOBJS)


