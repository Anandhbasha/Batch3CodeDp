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
    // // == Equal
    // int a =10;
    // int b = 20;
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
    // printf("%d",a<b && a!=10 && a<=b);
    // 10<20->  1
    // 10!=10-> 0
//              1
    //          1
    // or
    // printf("\n%d",a>b || a!=10 || a<=b);
    // //              0    0        1 ->1
    // // not
    // printf("\n%d",!(a==12));
    // // assignment
    // int x =25;
    // // right value is going assing for a left side variable
    // // x = x+10;
    // x+=10;
    // printf("%d",x);

    // BODMAS rule->B->Bracket O->off D->Division M->multiple A-Addtion S->Substraction
    // 10*20+5-2/2
    // printf("The operation value is:%d",((10*2)/5*3+6+(5+3)));
    // 20/5*3+6+8
    // 4*3+6+8
    // 12+6+8
    // 26
    // Ternary

    // // condition ? trueValue : falseValue
    // int age;
    // printf("Enter your age:");
    // scanf("%d",&age);
    // age>=18?printf("You are eligible to access this web"):printf("You are not eligible");

    // int x =10;
    // // post increment
    // // x++;
    // // pre-increment
    // // ++x;

    // // x=x+1
    // // 11
    // printf("The x value is:%d\n",x++);
    // // 10
    // // x=10+1=11
    // printf("The x value is:%d",x);
    // commo operator
    // int a,b;
    // printf("Enter two values:");
    // scanf("%d %d",&a,&b);
    // printf("%d",a+b);
    // int a =15;
    // printf("%zu",sizeof(a));
    // type casting

    float y = 10.5;
    int a =(int)y;
    printf("%d\n",a);
    char letter = 'A';
    int d = (int)letter;
    // A= 65
    // B = 66
    // C=67
    printf("%d",d);

    return 0;
}