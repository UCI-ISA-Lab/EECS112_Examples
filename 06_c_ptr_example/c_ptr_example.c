#include <stdio.h>


int main() {

    int ary[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = ary;

    for(int i = 0; i < 10; i++) {
        printf("*ptr = %d\n",*ptr);
        ptr += 1;
    }

    return 0;
}