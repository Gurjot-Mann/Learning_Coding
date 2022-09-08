#include <stdio.h>

int max(int* arr){
    
    int max;
    if(arr[0]>arr[1])
        max = arr[0];
    else max = arr[1];

    if(max<arr[2])
        max = arr[2];

    return max;
}

int main(){
    int arr[3];
    printf("Enter 1st no. : ");
    scanf("%d", arr);

    printf("Enter 2nd no. : ");
    scanf("%d", arr+1);

    printf("Enter 3rd no. : ");
    scanf("%d", arr+2);

    printf("\nThe Greatest of these 3 no. is: %d\n", max(arr));

 return 0;
}