#include <stdio.h> 

/*
int         4 bytes
short       2 bytes
long long   8 bytes

float       4 bytes
double      8 bytes
char        1 bytes

*/
                   
int main(){     
    
    double num1 = 248.56;
    double num2 = 123.456;
    double num3;

    num3 = num1 + num2;

    printf("%f\n",num3);

    return 0;   
}