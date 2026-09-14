#include<stdio.h>
int main(){
    // array
    char grades [] = {'A','B','C','D'};
    // 0 - index->A
    //1 index -> B
    //2 index -> C
    // 3 index -> D
    printf("Mark is above 90 means they are in:%c \n",grades[0]);
    printf("Mark is above 80 means they are in:%c \n",grades[1]);
    printf("Mark is above 70 means they are in:%c \n",grades[2]);
    printf("Mark is above 60 means they are in:%c \n",grades[3]);
}