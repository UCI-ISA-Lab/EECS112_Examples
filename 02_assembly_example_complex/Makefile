EXEC_FILE=array_sum

all: asm
	g++ -o ${EXEC_FILE} -std=c++2a array_sum.cpp

asm:
	g++ -o ${EXEC_FILE}.s -std=c++2a -S array_sum.cpp

clean:
	rm -rf ${EXEC_FILE}.s
	rm -rf ${EXEC_FILE}
