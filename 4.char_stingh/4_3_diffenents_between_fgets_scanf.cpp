#include <stdio.h> 
#include <stdlib.h>


int main(){     

    char a[80];
    char b[80]; 

    scanf("%s",a); // name of array is address
    // ABCD'\n' in scanf will spilt to a = "ABCD" '\n', '\n' still remin in input buffer 
    // so when use fgets the first input is '\n' cause fgets to jump out
    // also fgets can save string with space, but scanf can't
    fgets(b, 10, stdin);
    
    puts(a);
    puts(b);

    system("pause");
    return 0;   
}