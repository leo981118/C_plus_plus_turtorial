#include <stdio.h> 
#include <stdlib.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){     

    int a,b;

    printf("please input two number: ");
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("after swap\n");
    printf("a = %d, b = %d\n", a, b);

    system("pause");
    return 0;   
}

