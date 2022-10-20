#include<stdio.h>
int main(){
int marks;
printf("Enter Marks(0-100): ");
scanf("%f",&marks);
if(marks>=30){
    printf("Pass");
}
else if(marks>=0 && marks<30){
    printf("Fail");
}
else{
    printf("Wrong Number \n");
    }
}
