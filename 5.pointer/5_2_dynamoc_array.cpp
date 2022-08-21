#include <stdio.h> 
#include <stdlib.h>


int main(){     
    int n; // n numbers user defined
    int* pointer;
    int sum = 0;

    printf("please input numbers of score : ");
    scanf("%d", &n);
   
    pointer=(int* )malloc(sizeof(int) * n); // malloc will give the requested address continue list to pointer, pointer+1, pointer+2... 
                                            
    for (int i = 0; i<n; i++){
        printf("pointer+%d: %d\n", i, pointer + i);
    }

    for (int i = 0; i<n; i++){
        printf("&(pointer + %d): %d\n", i, &pointer + i);
    }

    for (int i = 0; i < n; i++){
        printf("please input %d-th score: ", i+1);
        scanf("%d", pointer + i); // pointer[i]  =>  *(pointer + i)
                                  //&pointer[i]  => &*(pointer + i) = pointer +i
    }

    for (int i = 0; i < n; i++){
        sum=sum + *(pointer + i);
    }

    printf("average: %f: ", (double)sum/n);

    free(pointer);

    system("pause");
    return 0;   
}