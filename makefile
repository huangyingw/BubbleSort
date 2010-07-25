run : BubbleSort.o
	g++ -o run BubbleSort.o
BubbleSort.o : BubbleSort.cpp
	g++ -c BubbleSort.cpp
clean :
	rm run BubbleSort.o
