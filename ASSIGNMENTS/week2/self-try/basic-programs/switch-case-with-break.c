#include<stdio.h>
int main(){
    char grades;
    printf("Enter your grades:");
    scanf("%c",&grades);   

    switch(grades)
    {
    case 'A':
        printf("Congratulations! Your grade is A.\n\n");
        break;
    
    case 'B':
        printf("Good luck next time. Your grade is B.\n\n");
        break;
     
    default:
        printf("Invalid Grade! Man you have failed your parents.");
    }
    return 0;
}