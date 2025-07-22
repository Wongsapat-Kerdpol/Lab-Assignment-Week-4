#include <stdio.h>

int main(){
    int first;

    printf("Enter a number: ");
    scanf("%d", &first);

    switch (first % 2 )
    {
    case 0:
        printf("%d is even\n", first);
        break;
    
    default:
        printf("%d is odd\n", first);
        break;
    }
}