CXX = g++

CPPFLAGS = -Wall -g -std=c++11

TARGET = my_program

SRCS = main.cpp single_linklist.cpp Circular_linklist.cpp doubly_linklist.cpp node1.cpp


OBJS = $(SRCS:.cpp=.o)



all: $(TARGET)



$(TARGET): $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(TARGET) $(OBJS)


%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean