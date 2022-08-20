#include <stdio.h> 

#include <stdlib.h>

int main(){     
    
    int bottom , top, height;
    int sum;

    scanf("%d%d%d",&bottom,&top,&height);
    sum = (bottom + top)*height/2;

    printf("%d\n",sum);

    system("pause");
    return 0;   
}
