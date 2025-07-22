#include <stdio.h>

int main(){
    float q,w,e,f,g,h,j,k;
    char r[20];
    char t[20];
    char y[20];
    char u[20];
    char i[20];
    char o[20];
    char p[20];
    char a[20];
    char s[20];
    char d[20];
    int check;

    printf("Enter number of subjects (max 10): ");
    scanf("%d", &check);

    switch (check)
    {
    case 1:
        // printf("%d is even\n", first);
        break;
    case 2:
        // printf("%d is even\n", first);
        break;
    case 3:
        printf("Enter subjects 1: ");
        scanf("%s", r);
        printf("Enter your score: ");
        scanf("%f", &q);

        printf("Enter subjects 2: ");
        scanf("%s", t);
        printf("Enter your score: ");
        scanf("%f", &w);

        printf("Enter subjects 3: ");
        scanf("%s", y);
        printf("Enter your score: ");
        scanf("%f", &e);

        char grade;
        char grade2;
        char grade3;

        if(q >= 80)
        {
            grade = 'A';
        }else if(q >= 70 && q < 80){
            grade = 'B';
        }else if(q >= 60 && q < 70){
            grade = 'C';
        }else if(q >= 50 && q < 60){
            grade = 'D';
        }else{
            grade = 'F';
        }


        if(w >= 80)
        {
            grade2 = 'A';
        }else if(w >= 70 && w < 80){
            grade2 = 'B';
        }else if(w >= 60 && w < 70){
            grade2 = 'C';
        }else if(w >= 50 && w < 60){
            grade2 = 'D';
        }else{
            grade2 = 'F';
        }
        if(e >= 80)
        {
            grade3 = 'A';
        }else if(e >= 70 && e < 80){
            grade3 = 'B';
        }else if(e >= 60 && e < 70){
            grade3 = 'C';
        }else if(e >= 50 && e < 60){
            grade3 = 'D';
        }else{
            grade3 = 'F';
        }

        float gradeDot;
        float gradeDot2;
        float gradeDot3;
        if(grade == 'A')
        {
            gradeDot = 4.0;
        }else if(grade == 'B'){
            gradeDot = 3.0;
        }else if(grade == 'C'){
            gradeDot = 2.0;
        }else if(grade == 'D'){
            gradeDot = 1.0;
        }else{
            gradeDot = 0.0;
        }

        if(grade2 == 'A')
        {
            gradeDot2 = 4.0;
        }else if(grade2 == 'B'){
            gradeDot2 = 3.0;
        }else if(grade2 == 'C'){
            gradeDot2 = 2.0;
        }else if(grade2 == 'D'){
            gradeDot2 = 1.0;
        }else{
            gradeDot2 = 0.0;
        }

        if(grade3 == 'A')
        {
            gradeDot3 = 4.0;
        }else if(grade3 == 'B'){
            gradeDot3 = 3.0;
        }else if(grade3 == 'C'){
            gradeDot3 = 2.0;
        }else if(grade3 == 'D'){
            gradeDot3 = 1.0;
        }else{
            gradeDot3 = 0.0;
        }
        

        printf("Subject     Score     Grade     Grade\n");
        printf("--------------------------------------\n");
        printf("%s         %.0f         %c         %.1f\n",r,q,grade,gradeDot);
        printf("%s     %.0f        %c         %.1f\n",t,w,grade2,gradeDot2);
        printf("%s      %.0f        %c         %.1f\n",y,e,grade3,gradeDot3);
    }


}   
    //     printf("| %-16s|%8d |%8d |\n","Bob",78,82); 
    //     printf("| %-16s|%8d |%8d |\n","Charlie",92,88); 
    //     printf("+-----------------+---------+---------+\n");
    //     if(q >= 80)
    //     {
    //     printf("%s, your average is %.2f. You got grade A.\n", r,total);
    //     }else if(total >= 70 && total < 80){
    //     printf("%s, your average is %.2f. You got grade B.\n", r,total);
    //     }else if(total >= 60 && total < 70){
    //     printf("%s, your average is %.2f. You got grade C.\n", r,total);
    //     }else if(total >= 50 && total < 60){
    //     printf("%s, your average is %.2f. You got grade D.\n", r,total);
    //     }else{
    //     printf("%s, your average is %.2f. You got grade F.\n", r,total);
    //     }

    //     break;
    // case 4:
    //     printf("%d is even\n", first);
    //     break;
    // case 5:
    //     printf("%d is even\n", first);
    //     break;
    // case 1:
    //     printf("%d is even\n", first);
    //     break;
    // case 6:
    //     printf("%d is even\n", first);
    //     break;
    // case 7:
    //     printf("%d is even\n", first);
    //     break;
    // case 8:
    //     printf("%d is even\n", first);
    //     break;
    // case 9:
    //     printf("%d is even\n", first);
    //     break;
    // case 10:
    //     printf("%d is even\n", first);
    //     break;
    
    // default:
    //     printf("%d is odd\n", first);
    //     break;
    // }
    // printf("Enter your name: ");
    // scanf("%s", r);
    // printf("Enter your Calculus score: ");
    // scanf("%f", &q);
    // printf("Enter your Physic score: ");
    // scanf("%f", &w);
    // printf("Enter your Science score: ");
    // scanf("%f", &e);
    // float total = (q+w+e)/3;
    // if(total >= 80)
    // {
    //    printf("%s, your average is %.2f. You got grade A.\n", r,total);
    // }else if(total >= 70 && total < 80){
    //     printf("%s, your average is %.2f. You got grade B.\n", r,total);
    // }else if(total >= 60 && total < 70){
    //     printf("%s, your average is %.2f. You got grade C.\n", r,total);
    // }else if(total >= 50 && total < 60){
    //     printf("%s, your average is %.2f. You got grade D.\n", r,total);
    // }else{
    //     printf("%s, your average is %.2f. You got grade F.\n", r,total);
    // }

