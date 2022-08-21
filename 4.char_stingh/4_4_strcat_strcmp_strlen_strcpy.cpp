#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(){     

    char a[80] = "Mac";
    char b[80] = "book"; 
    char c[80] = "ice";
    char d[80] = "cream";
    // strcmp string compare
    if (strcmp(a, b) == 0){
        printf("input string the same\n");
    }
    else{
        printf("input not the same\n");
    }

    //strcat string concat
    strcat(c, d);
    printf("%s\n", c);

    //strlen string length
    printf("%s length is %d\n",a,strlen(a));

    //strcpy string copy
    strcpy(c, d);
    printf("%s\n", c);

    system("pause");
    return 0;   
}