/*
Program to print the average of 3 numbers
*/
#include<stdio.h>
#include<math.h>
int main(){
int a ;
int b ;
int c ;
int average;
printf("Enter 1st Number :");
scanf("%d",&a);
printf("Enter 2nd Number :");
scanf("%d",&b);
printf("Enter 3rd Number :");
scanf("%d",&c);
average = (a+b+c)/3;

printf("Average is :%d \n",average);


return 0;
}
