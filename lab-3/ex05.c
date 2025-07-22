#include <stdio.h>

int main(){
    float q,w;
    char r[20];
    printf("Enter cone height: ");
    scanf("%f", &q);
    printf("Enter cone base radius: ");
    scanf("%f", &w);
    float total = (0.3333333333333333333333*3.14*(w*w)*q);
    printf("Cone volume = %.1f\n", total);
    if(total > 260)
    {
       printf("This cone is perfect for Supun project\n");
    }else {
        printf("This cone is not fit for this project\n");



    }
}
