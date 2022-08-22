#include <stdio.h> 
#include <stdlib.h>

//#include "sum.h" //user defined library use ""
#include "sum.h"

int main(){     

    int a,b;

    printf("please input two number: ");
    scanf("%d%d", &a, &b);

    int sumA = sum(a), sumB = sum(b);

    printf("sumA = %d\n", sumA);
    printf("sumB = %d\n", sumB);

    system("pause");
    return 0;   
}

