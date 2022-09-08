#include<stdio.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
    printf("Enter the marks obtained by student in 5 subjects:\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = (sum/500)*100;
    printf("Aggregate Marks = %f\n",sum);
    printf("Percentage = %f\n",percentage);
}