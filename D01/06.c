#include <stdio.h>

int main(){
    int number, i;
    printf("\nEnter the number for table :");
    scanf("%d",&number);

    for (i = 0; i < 9; i++)
    {
        printf(" %d multiplied by %d = %d \n",i, number, i*number);
    }
    
}