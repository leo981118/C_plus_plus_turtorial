#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main(){     
    
    int a=10;
    int b[5]={1, 2, 3, 4, 5};

    double c=2.5;
    double d[5]={1.1, 2.2, 3.3, 4.4, 5.5};

    //sizeof
    printf("int: %d\n",sizeof(a));
    printf("int_array: %d\n",sizeof(b));
    printf("double: %d\n",sizeof(c));
    printf("double_array: %d\n",sizeof(d));
    
    printf("\n");
    //array
    printf("b[0]: %d\n",b[0]);
    printf("b: %d\n",b);
    printf("b[1]: %d\n",b[1]);
    printf("b+1: %d\n",b+1);
    printf("d[0]: %f\n",d[0]);
    printf("d: %d\n",d);
    printf("d[1]: %f\n",d[1]);
    printf("d+1: %d\n",d+1);
    printf("*b: %d\n",*b);
    printf("*b+1: %d\n",*(b+1));

    printf("\n");
    //memcpy
    int e[5]={};
    memcpy(e, b, sizeof(b));
    for (int i=0; i<5; i++)
    {
        printf("e[%d]: %d\n", i, e[i]);
    }

    system("pause");
    return 0;   
}