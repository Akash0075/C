#include<stdio.h>
int main(){
int number;
printf("Enter Number: ");
scanf("%d",&number);
if (number>=0){
    printf("Number is Positive \n");
    if(number%2==0){
        printf("Number is Even \n");
    }
    else{
        printf("Number is Odd \n");
    }

}
else{
    printf("Number is Negative \n");

}

}
