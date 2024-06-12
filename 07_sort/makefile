FILE_NAME=sort_example

all: asm
	gcc -o ${FILE_NAME} ${FILE_NAME}.c

asm:
	gcc -o ${FILE_NAME}.s -S ${FILE_NAME}.c


clean:
	rm -rf ${FILE_NAME}
	rm -rf ${FILE_NAME}.s	