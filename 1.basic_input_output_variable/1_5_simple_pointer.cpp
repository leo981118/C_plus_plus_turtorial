#include <stdio.h> 
#include <stdlib.h>

int main(){     
    
    int a=3;
    printf("%d\n",a);    // pass value
    printf("%d\n",&a);   // & pass address
    printf("%d\n",*&a);  // * pass value from address

    system("pause");
    return 0;   
}