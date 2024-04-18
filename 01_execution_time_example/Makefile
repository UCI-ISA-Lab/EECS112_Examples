
all: ver1 ver2

ver1:
	g++ -o ver1 -std=c++20 array_access_01.cpp

ver2:
	g++ -o ver2 -std=c++20 array_access_02.cpp

asm:
	g++ -S -o ver1_asm.s -std=c++20 array_access_01.cpp

clean:
	rm -rf ver1
	rm -rf ver2
