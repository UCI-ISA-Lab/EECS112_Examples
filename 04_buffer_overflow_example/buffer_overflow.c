#include <stdio.h>

int bar() {
    int barbuf[2];
    
    printf("Barbuf\n");
    for(int j =0; j<10; j++) {
        printf("Buffer[%d] = %d\n",-j,-barbuf[j]);
    }

    for(int j =0; j<200; j++) {
        printf("Buffer[%d] = %d\n",j,barbuf[j]);
    }

    return 0;
}

int foo(int a, int b) {
    int buf[10];
    for(int i = 0; i < 10; i++) {
        buf[i] = i;
    }
    printf("You can access buf[11] even if the size of the array buf is 10.\n");
    printf("Buffer[%d] = %d\n",11,buf[11]);

    printf("If you access buf[-2], you retrive the first argument (a)\n");
    printf("Buffer[%d] = %d\n",-2,buf[-2]);

    printf("If you access buf[-3], you retrive the second argument (b)\n");
    printf("Buffer[%d] = %d\n",-3,buf[-3]);
   
    int ret = a+b;

    printf("If you access buf[-4], you retrive the value of the ret (%d + %d).\n", a, b);
    printf("Buffer[%d] = %d\n",-4,buf[-4]);

    printf("If you access buf[22], you retrive z in the main()!!!\n");
    printf("Buffer[%d] = %d\n",22,buf[22]);

    return ret;
}


int main() {
    int z = 100;
    int x = 15;
    int y = 16;

    printf("z = 100; not to lose z = 100 during compiler optimization (dead code elimination)\n");
    foo(x,y);

    return 0;
}
