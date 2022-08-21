#include <stdio.h> 
#include <stdlib.h>



int main(){     
    int* p; // pointer just like a varaiable to save address
    int x;

    scanf("%d", &x);

    printf("x = %d\n", x);
    printf("&x = %d\n", &x);

    p = &x; // & get address

    printf("p = %d\n", p);
    printf("*p = %d\n", *p);

    *p = 10; // * get value from address

    printf("after *p = 10, x = %d\n", x);
   
    system("pause");
    return 0;   
}