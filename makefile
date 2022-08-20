Sorting: Main.o BubbleSort.o Utils.o
	g++ Main.o BubbleSort.o Utils.o -o Sorting
Main.o: Main.cpp
	g++ -c Main.cpp
BubbleSort.o: ./BubbleSort/BubbleSort.cpp
	g++ -c ./BubbleSort/BubbleSort.cpp
Utils.o: ./Utils/Utils.cpp
	g++ -c ./Utils/Utils.cpp
clean: 
	rm *.o
remove: 
	rm *.o Sorting
