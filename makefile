Sorting: Main.o Utils.o Report.o Sort.o BubbleSort.o InsertionSort.o SelectionSort.o MergeSort.o Split.o Iteration.o Recursion.o Merge.o
	g++ Main.o Utils.o Report.o Sort.o BubbleSort.o InsertionSort.o SelectionSort.o MergeSort.o Split.o Iteration.o Recursion.o Merge.o -o Sorting 

Main.o: Main.cpp
	g++ -c Main.cpp
Sort.o: ./Sort/Sort.cpp
	g++ -c ./Sort/Sort.cpp

Utils.o: ./Utils/Utils.cpp
	g++ -c ./Utils/Utils.cpp
Report.o: ./Report/Report.cpp
	g++ -c ./Report/Report.cpp
BubbleSort.o: ./BubbleSort/BubbleSort.cpp
	g++ -c ./BubbleSort/BubbleSort.cpp
InsertionSort.o: ./InsertionSort/InsertionSort.cpp
	g++ -c ./InsertionSort/InsertionSort.cpp
SelectionSort.o: ./SelectionSort/SelectionSort.cpp
	g++ -c ./SelectionSort/SelectionSort.cpp

MergeSort.o: ./MergeSort/MergeSort.cpp
	g++ -c ./MergeSort/MergeSort.cpp
Split.o: ./MergeSort/Split/Split.cpp
	g++ -c ./MergeSort/Split/Split.cpp
Iteration.o: ./MergeSort/Split/Iteration/Iteration.cpp
	g++ -c ./MergeSort/Split/Iteration/Iteration.cpp
Recursion.o: ./MergeSort/Split/Recursion/Recursion.cpp
	g++ -c ./MergeSort/Split/Recursion/Recursion.cpp
Merge.o: ./MergeSort/Merge/Merge.cpp
	g++ -c ./MergeSort/Merge/Merge.cpp


clean: 
	rm *.o
remove: 
	rm *.o Sorting
