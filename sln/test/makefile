CPPFLAGS += -isystem $(GTEST_DIR)/include 
CXXFLAGS += -g -Wall -Wextra -pthread 
TESTS = test 
GTEST_HEADERS = ../include

test :   
		g++ $(CPPFLAGS) $(CXXFLAGS) -lpthread -I $(GTEST_HEADERS) test.cpp ../lib/gtest_main.a  -o test 

clean : 
		rm -f test

