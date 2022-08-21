Sorting: Main.o Utils.o Report.o Sort.o BubbleSort.o InsertionSort.o
	g++ Main.o Utils.o Report.o Sort.o BubbleSort.o InsertionSort.o -o Sorting 
Main.o: Main.cpp
	g++ -c Main.cpp
BubbleSort.o: ./BubbleSort/BubbleSort.cpp
	g++ -c ./BubbleSort/BubbleSort.cpp
InsertionSort.o: ./InsertionSort/InsertionSort.cpp
	g++ -c ./InsertionSort/InsertionSort.cpp
Sort.o: ./Sort/Sort.cpp
	g++ -c ./Sort/Sort.cpp

Utils.o: ./Utils/Utils.cpp
	g++ -c ./Utils/Utils.cpp
Report.o: ./Report/Report.cpp
	g++ -c ./Report/Report.cpp


clean: 
	rm *.o
remove: 
	rm *.o Sorting
