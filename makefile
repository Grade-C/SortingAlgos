Sorting: Main.o BubbleSort.o InsertionSort.o Utils.o
	g++ Main.o BubbleSort.o InsertionSort.o Utils.o -o Sorting
Main.o: Main.cpp
	g++ -c Main.cpp
BubbleSort.o: ./BubbleSort/BubbleSort.cpp
	g++ -c ./BubbleSort/BubbleSort.cpp
InsertionSort.o: ./InsertionSort/InsertionSort.cpp
	g++ -c ./InsertionSort/InsertionSort.cpp
Utils.o: ./Utils/Utils.cpp
	g++ -c ./Utils/Utils.cpp
clean: 
	rm *.o
remove: 
	rm *.o Sorting
