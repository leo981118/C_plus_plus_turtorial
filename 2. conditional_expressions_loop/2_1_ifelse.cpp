#include <stdio.h> 
#include <stdlib.h>

int main(){     
    
    int score,type;
    printf("please input degree (1)college (2)graduate: ");
    scanf("%d",&type);

    printf("input score: ");
    scanf("%d",&score);

    if ((score>=90)&&(score<100))
    {
        printf("A+\n");
    }

    else if ((score>=85)&&(score<89))
    {
        printf("A\n");
    }
    
    else if ((score>=80)&&(score<84))
    {
        printf("A-\n");
    }

    else if ((score>=77)&&(score<79))
    {
        printf("B+\n");
    }
    
    else if ((score>=73)&&(score<76))
    {
        printf("B\n");
    }

    else if ((score>=70)&&(score<72))
    {
        printf("B-\n");
    }

    else if ((score>=67)&&(score<69))
    {
        printf("C+\n");
    }

    else if ((score>=63)&&(score<66))
    {
        printf("C\n");
    }

    else if ((score>=60)&&(score<62))
    {
        printf("C-\n");
    }

    else if ((score>=1)&&(score<59))
    {
        printf("F\n");
    }

    else if (score==0)
    {
        printf("X\n");
    }
    
    else
    {
        printf("wrong input");
    }
    system("pause");
    return 0;   
}