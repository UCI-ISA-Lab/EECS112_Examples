#include<stdio.h>

/*
  An example simliar as "strcpy" in the slide deck (page 26, Instructions II)
*/

int main() {
    int x[10];
    int y[10];
    
    for (int i =0; i <10; i++) {
        y[i] = i;
    }

    int j = 0;

    // Evaluation of (x[j]=y[j])!= 9
    //  1. Perform the assignment x[j] = y[j]
    //  2. (x[j] = y[j]) is evaluted to the assigned value, which is y[j]
    //  3. The condition becomes y[j] != 9
    while((x[j]=y[j])!=9) {
        printf("x[%d] = y[%d] = %d\n",j, j, y[j]);
        j++;
    }

    return 0;
}