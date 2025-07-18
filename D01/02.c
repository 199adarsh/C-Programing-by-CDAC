// 2. Input a number and display whether number is Even or Odd

#include <stdio.h>

int main(){
    int num1;

    printf("Enter the  Number : ");
    scanf("%d",&num1);


    if(num1 % 2 == 0) {
        printf("\n The number is Even");
    }
    else {
        printf("\n The number is Odd");
    }
    
    return 0 ; 
}