#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main(){     
    int a[5]={5, 3, 1, 4, 2};
    int temp;

    for(int i=0; i<4; i++)
    {
        for(int j=i; j<5; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for (int k=0; k<5; k++)
    {
        printf("a[%d]: %d\n",k,a[k]);
    }
  

    system("pause");
    return 0;   
}