#include <stdio.h> 
#include <stdlib.h>


int main(){     

    char a[80];
    char b[80]; 

    fgets(b, 5 ,stdin); //get inputfrom keyboard and limit to 5 characters like 'H'E'L'L'\n'
    puts(b);

    system("pause");
    return 0;   
}