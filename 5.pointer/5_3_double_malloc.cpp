#include <stdio.h> 
#include <stdlib.h>


int main(){     
    int m,n; // n numbers user defined
    int** student;
    int sum = 0;

    printf("please input numbers of score : ");
    scanf("%d", &m);
    printf("please input numbers of score : ");
    scanf("%d", &n);
    
    
    student = (int** )malloc(sizeof(int*) * m); // malloc will give the requested address continue list to pointer, pointer+1, pointer+2... 

    printf("size of int* %d\n",sizeof(int*));

    for(int i = 0; i < m; i++){
        student[i] = (int* )malloc(sizeof(int) * n);
    }   

    for (int i = 0; i<m; i++){
        for (int j = 0; j < n; j++){
            printf("*(student + %d)+%d: %d\n", i, j, *(student + i)+j);
        }
        printf("student + %d: %d\n", i, student + i);
    }

    for(int i = 0; i < m; i++){
        free(student[i]);
    }   
    free(student);

    system("pause");
    return 0;   
}