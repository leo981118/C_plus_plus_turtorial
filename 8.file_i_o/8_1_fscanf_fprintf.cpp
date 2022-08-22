#include <stdio.h>
#include <stdlib.h>


int main(){

    char name[100];
    int mathScore, englishScore, physicsScore;
    //1. open file
    FILE* fp;
    FILE* resultfp;
   

   fp = fopen("data.txt", "r"); // r: read mode w: write mode
   resultfp = fopen("result.txt", "w");

   while(1){
        fscanf(fp, "%s%d%d%d", name, &mathScore, &englishScore, &physicsScore);
        if (feof(fp)){  // read to end of file
            break;
        }

        printf("%s mathScore(%d), englishScore(%d), physicsScore(%d)\n", name, mathScore, englishScore, physicsScore);

        fprintf(resultfp, "%s total(%d)\n", name, mathScore + englishScore + physicsScore);
   }

    fclose(fp);
    fclose(resultfp);

    system("pause");

    return 0;
}