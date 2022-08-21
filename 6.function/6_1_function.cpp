#include <stdio.h> 
#include <stdlib.h>

int sum(int a); // function define first

int main(){     

    int a,b;

    printf("please input two number: ");
    scanf("%d%d", &a, &b);

    int sumA = sum(a), sumB = sum(b);

    printf("sumA = %d\n", sumA);
    printf("sumB = %d\n", sumB);

    system("pause");
    return 0;   
}

int sum(int a){
    int total=0;
    for(int i = 0; i < a; i++){
        total=total+(i+1);
    }
    return total;
}