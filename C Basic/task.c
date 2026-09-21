// Task 2 – Count Digits

// Write a C program to get an integer from the user and count the number of digits using a `while` loop.

// Example:


// Enter a number: 987654
// Output: Number of digits: 6

// pesudo code 
// Start
// varibale declare as integer
// get by input
// count = 0

// while loop
    // divide by 10
    // 123-> 12*&10 = 120
    // 12/10->1
    // 1/10->1

#include <stdio.h>
int main(){
    int number,count = 0;
    printf("Enter the number:");
    scanf("%d",&number);
    // number:52345
    while(number!=0){
        number = number/10;
        // 5234
        // 523
        // 52
        // 5
        // 0.5
        count++;
        // 1->2->3->4->5
    }
    printf("The total count is:%d",count);
}