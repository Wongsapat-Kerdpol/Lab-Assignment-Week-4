#include <stdio.h>

int main(){
    int first;
    int second;

    printf("Enter a number: ");
    scanf("%d", &first);
    printf("Enter a number: ");
    scanf("%d", &second);
    if(first != second )
    {
        printf("Does not match. Try again\n");
    }
    else{
        printf("Match\n");

    }
}