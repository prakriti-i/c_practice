#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a year");
    scanf("%d", &n);
    if(n%4==0 && n%100==0 || n%400==0)
    printf("\n leap year");
    else 
     printf("not leap year ");
    getch();
}