#include <stdio.h>

int main(){
    int first;

    printf("Enter a number: ");
    scanf("%d", &first);
    if(first >= 0 && first <= 100)
    {
        if(first % 2 == 0){
            printf("%d is even\n", first);


        }else{
            printf("%d is odd\n", first);


        }
    }
    else{
        printf("%d is out of range\n", first);


    }
}