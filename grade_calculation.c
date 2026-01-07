//Grade Calculation
/*Develop a program that takes a score out of 100 as input from the user and calculates the corresponding grade using a ternary operator.
Allocate grades from A to F for various ranges.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int score;

    printf("Grade Calculator\n");
    printf("Enter your score : ");
    scanf("%d",&score);

    //checking whether score is appropriate or not
    while(score>100){
        printf("Enter score out of 100 : ");
        scanf("%d",&score);
    }

    //ternary operator for grade calculation
    (score>=90)?printf("Your Grade is A"):
                (score>=80 && score<90)?printf("Your Grade is B"):
                (score>=70 && score<80)?printf("Your Grade is C"):
                (score>=60 && score<70)?printf("Your Grade is D"):
                (score>=50 && score<60)?printf("Your Grade is E"):printf("Your Grade is F");

    return 0;
}