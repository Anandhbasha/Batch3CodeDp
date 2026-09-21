// #include<stdio.h>
// int main(){
//     int age = 20;
//     printf("%d\n",age);
//     printf("%p\n",&age);
//     // int num = age;
//     // // num= 20;
//     // num = 60;
//     // printf("%d\n",num);
//     int *x = &age;
//     *x = 70;
//     //x= 000000db2e9ff8f8

//     printf("%d\n",age);
// }

// int age = 20; ->



// &

#include<stdio.h>
void change(int *ptr){
    *ptr = 100;
}

int main(){
    int num = 10;
    change(&num);
    printf("%d\n",num);
}














