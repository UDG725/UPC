build:
	g++ -c -g src/homescreen.cpp -o builds/build.o
	g++ -static -static-libgcc -static-libstdc++ -o builds/upc.bin builds/build.o

clean:
	rm builds/build.o
	rm builds/upc.bin