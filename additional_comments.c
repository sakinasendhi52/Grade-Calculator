//Additional Comments on Grade
/*Extend the program to provide additional comments based on the grade using a switch-case statement. 
For example, if the grade is 'A', then print 'Excellent work!'. If the grade is 'B', then print 'Well done'.
If the grade is 'C', then print 'Good job'. If the grade is 'D', then print 'You passed, but you could do better'.
And if the grade is 'F', then print 'Sorry, you failed'.*/

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

    return 0;
}