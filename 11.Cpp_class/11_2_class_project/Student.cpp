#include <stdio.h>
#include "Student.h"

void Student::print(){
    char bloodTable[4][5]={"A", "B", "O", "AB"};
    printf("student %s (%d)\n", name, age);
    printf("blood type: %s \n", bloodTable[blood]);
    printf("chinese score: %d \nmathScore: %d \nenglishScore: %d \n", chineseScore, mathScore, mathScore);
}