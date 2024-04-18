FILE_NAME=simple_example

all: asm
	g++ -o ${FILE_NAME} -std=c++2a ${FILE_NAME}.cpp

asm:
	g++ -o ${FILE_NAME}.s -std=c++2a -S ${FILE_NAME}.cpp

clean:
	rm -rf ${FILE_NAME}
	rm -rf ${FILE_NAME}.s	