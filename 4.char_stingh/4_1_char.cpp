#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main(){     

    char ch;
    ch=getchar();
    //getchar() = scanf("%c", &ch);

    if(ch >='0' && ch <= '9'){
        printf("you input interge\n");
    }
    else if (ch >='A' && ch <= 'Z'){
        printf("you input uppercase\n");
    }
    else if (ch >='a' && ch <= 'z'){
        printf("you input lowercase\n");
    }
    else {
        printf("you input other charcter\n");
    }

    system("pause");
    return 0;   
}