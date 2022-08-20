#include <stdio.h> 
#include <stdlib.h>

int main(){     
    
    double a, b, answer;
    int type;

    printf("please input two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1: plus:\n");
    printf("2: minus:\n");
    printf("3: multipy:\n");
    printf("4: divide:\n");

    scanf("%d",&type);

    switch (type)
    {
    case 1:
        answer = a + b;
        printf("%d\n",answer);
        break;

    case 2:
        answer = a - b;
        printf("%d\n",answer);
        break;

    case 3:
        answer = a * b;
        printf("%d\n",answer);
        break;

    case 4:
        answer = a / b;
        printf("%f\n",answer);
        break;


    default:
        printf("wrong input\n");
        break;
    }

    

    system("pause");
    return 0;   
}