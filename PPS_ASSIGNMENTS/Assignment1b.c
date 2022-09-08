#include <stdio.h>

int main()
{
    float kms,meters= 1000,feet=3280.83,inches=39370.07,cm=100000;
    printf("Enter the distance between two cities(in kms):\n");
    scanf("%f",&kms);
    printf("Distance between two cities(in meters)=%f\n",kms*meters);
    printf("Distance between two cities(in feet)=%f\n",kms*feet);
    printf("Distance between two cities(in inches)=%f\n",kms*inches);
    printf("Distance between two cities(in cm)=%f\n",kms*cm);

}