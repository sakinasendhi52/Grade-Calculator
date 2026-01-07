//Eligibility Check from Grade
/*Further, extend the program to checck eligibility for the next level based on the grade
using an if-else statement. Print 'Congratulations! You are eligible for the next level' if the
grade is from 'A' to 'D'. Print 'Please try again next time' if the grade is 'F'.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int score;
    char grade;

    printf("Grade Calculator\n");
    printf("Enter your score : ");
    scanf("%d",&score);

    //checking whether score is appropriate or not
    while(score>100){
        printf("Enter score out of 100 : ");
        scanf("%d",&score);
    }

    //ternary operator for grade calculation
    grade=(score>=90)?'A':
                (score>=80 && score<90)?'B':
                (score>=70 && score<80)?'C':
                (score>=60 && score<70)?'D':
                (score>=50 && score<60)?'E':'F';

    switch(grade){
        case 'A':
        printf("Your Grade is A. Excellent work!");
        break;

        case 'B':
        printf("Your Grade is B. Well done!");
        break;

        case 'C':
        printf("Your Grade is C. Good job!");
        break;

        case 'D':
        printf("Your Grade is D. You passed, but you could do better.");
        break;

        case 'E':
        printf("Your Grade is E. You passed, but you could do better.");
        break;

        case 'F':
        printf("Your Grade is F. Sorry, you failed.");
        break;

        default:
        printf("Invalid");
        break;
    }

    //Check eligibility
    if(grade=='F'){
        printf("\nPlease try again next time.");
    }
    else{
        printf("\nCongratulations! You are eligible for the next level.");
    }

    return 0;
}