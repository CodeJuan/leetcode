CPPFLAGS += -isystem $(GTEST_DIR)/include 
CXXFLAGS += -g -Wall -Wextra -pthread 
TESTS = test 
GTEST_HEADERS = ../include
LIB_DIR = ../lib/gtest_main.a
test :   
	g++ $(CPPFLAGS) $(CXXFLAGS) -lpthread -I $(GTEST_HEADERS) $(LIB_DIR) test.cpp   -o test 

clean : 
		rm -f test

