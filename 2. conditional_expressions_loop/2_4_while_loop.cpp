#include <stdio.h> 
#include <stdlib.h>

int main(){     
    
    int n;
    printf("please input how many layers: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++ )
    {
        printf(":) %d\n",i);
    }

    system("pause");
    return 0;   
}