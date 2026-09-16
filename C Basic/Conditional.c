#include<stdio.h>

int main(){
    // if(condition){
        // code will execute
    // }
    // int temp;
    // printf("Enter your room temperature:");
    // scanf("%d",&temp);
    // if(temp>32){
    //     printf("Switch on the AC");
    // }


    // if(condition){
        // code will execute
    // }
    // else{
        // code will execute
    // }

    // if(temp>32){
    //     printf("Switch on the AC");
    // }
    // else{
    //     printf("Switch on the Fan");
    // }


    // if(temp<20){
    //     printf("Swith off the both AC and Fan");
    // }
    // else if(temp>32){
    //     printf("switch on the AC");
    // }
    // else if(temp>45){
    //     printf("Switch on the AC and Fan");
    // }
    // else{
    //     printf("Switch on the Fan");
    // }

    // switch
    int even;
    printf("Choose one even number from this 2 4 6 8:");
    scanf("%d",&even);
    

    // switch(expression){
    // case 2:
    // case 4:
    // case 6:
    // case 8
    // }
    switch(even){
        case 2:
            printf("User selected number 2\n");
            break;
        case 4:
            printf("User selected number 4\n");
            break;
        case 6:
            printf("User selected number 6\n");
            break;
        default:
            printf("User selected number 8\n");
    }
}