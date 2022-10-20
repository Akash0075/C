#include<stdio.h>
int main(){
char day;
printf("Enter Day: ");
scanf("%c", &day);
switch(day){
case 'S':
    printf("Saturday \n");
    break;
case 's':
    printf("Sunday \n");
    break;
case 'M':
    printf("Monday \n");
    break;
case 'T':
    printf("Tuesday \n");
    break;
case 'W':
    printf("Wednesday \n");
    break;
case 't':
    printf("Thursday \n");
    break;
case 'F':
    printf("Friday \n");
    break;
}
}
