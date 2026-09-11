#include<stdio.h>

int main(){
    // operators
    // Arithmetic 
    // +,-,*,/,%
    // int num1 = 20;
    // int num2 = 30;
    // printf("The addition value of num1 & num2 is: %d\n",num1+num2);
    // printf("The Substraction value of num1 & num2 is: %d\n",num2-num1);
    // printf("The Multiplication value of num1 & num2 is: %d\n",num2*num1);
    // printf("The Division value of num1 & num2 is: %d\n",num2/num1);
    // printf("The Division value of num1 & num2 is: %d\n",num2%num1);
    // comparison or relational
    // == Equal
    int a =10;
    int b = 20;
    // printf("%d\n",a==b);
    // // ! not equal
    // printf("%d\n",a!=b);
    // // > greater
    // printf("%d\n",a>b);
    // // >= greater than or equal
    // printf("%d\n",a>=10);
    // // <= less than or equal
    // printf("%d\n",a<=10);
    // // 10 < 10->0 10==10->1
    // // < less than 
    // printf("%d\n",a<b);
    // logical
    // and 0 & 1 & 0->0
    printf("%d",a<b && a!=10 && a<=b);
    // 10<20->  1
    // 10!=10-> 0
//              1
    //          1
    // or
    printf("\n%d",a>b || a!=10 || a<=b);
    //              0    0        1 ->1
    // not
    printf("\n%d",!(a==12));
    // assignment
    int x =25;
    // right value is going assing for a left side variable
    // x = x+10;
    x+=10;
    printf("%d",x);

    return 0;
}