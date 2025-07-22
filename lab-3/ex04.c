#include <stdio.h>

int main(){
    float q,w,e;
    char r[20];

    printf("Enter your name: ");
    scanf("%s", r);
    printf("Enter your Calculus score: ");
    scanf("%f", &q);
    printf("Enter your Physic score: ");
    scanf("%f", &w);
    printf("Enter your Science score: ");
    scanf("%f", &e);
    float total = (q+w+e)/3;
    if(total >= 80)
    {
       printf("%s, your average is %.2f. You got grade A.\n", r,total);
    }else if(total >= 70 && total < 80){
        printf("%s, your average is %.2f. You got grade B.\n", r,total);
    }else if(total >= 60 && total < 70){
        printf("%s, your average is %.2f. You got grade C.\n", r,total);
    }else if(total >= 50 && total < 60){
        printf("%s, your average is %.2f. You got grade D.\n", r,total);
    }else{
        printf("%s, your average is %.2f. You got grade F.\n", r,total);
    }
}
