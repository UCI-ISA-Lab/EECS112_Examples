#include<stdio.h>


void sort (int v[], int n) {
    for (int  i = 0; i < n; i += 1) {
        for (int  j = i - 1; j >= 0; j -= 1) {
            if (v[j] > v[j + 1]) {
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }

           printf("v = {"); 
            for(int k=0; k < n; k++) {
                if (k != n-1) {
                    printf("%d, ", v[k]);
                }
                else {
                    printf("%d", v[k]);                    
                }
            }
            printf("}\n");            
        }
    }
}


int main() {
    int ary[8] = {3, 1, 4, 2};

    sort(ary, 4);

    for(int i = 0; i < 4; i++) {
        printf("ary[%d] = %d\n", i, ary[i]);
    }

    return 0;
}