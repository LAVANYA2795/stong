#include<stdio.h>
int main()
{
int num,sum=0,temp,rem;
clrscr();
printf("Enter an integer\n");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(num==sum)
printf("Entered number is an armstrong number:\n");
else

printf(" Entered number is not an armstrong number:\n");
getch();
return 0;
}
