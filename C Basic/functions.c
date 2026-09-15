// #include<stdio.h>
// void show(){
//     printf("Hello Welcome\n");
// }
// int main(){
//     show();
//     show();
//     show();
//     show();
//     show();
// }


#include<stdio.h>
int add(int a,int b){
    return a+b;
}

int value(){
    return 50;
}

int main(){
    int s1 = add(10,20);
    int s2 = add(15,22);
    printf("Student 1 Total is:%d \n",s1);
    printf("Student 2 Total is:%d \n",s2);
    printf("%d",value());
}

// add(10,20)->10,20Arguments
// int a,b->parameter


// Noargument + no return
// argumnet + no return
// argument+return
// no argument+return
