#include<stdio.h>
void creation();
void deposit();
void withdraw();
void lowbal();
int a=0,i=1001;
struct bank
{
int no;
char name[20];
float bal;
float dep;
}s[100];
int main()
{
int ch;
do
{
printf("\n *******************");
printf("\n BANKING");
printf("\n ***********");
printf("\n 1.Create new account");
printf("\n 2.cash deposit");
printf("\n 3.cash withdraw");
printf("\n 4.low balance enquiry");
printf("\n 5.exit");
printf("\n Enter your choice:");
scanf("\n %d",&ch);
switch(ch)
{
case 1: creation();
break;
case 2: deposit();
break;
case 3: withdraw();
break;
case 4: lowbal();
break;
case 5:
break;
default:printf("Choice a valid option!!");
}
}
while(ch!=5);
}
void creation()
{
printf("\n ********************");
printf("\n NEW ACCOUNT CREATION");
printf("\n ********************");
printf("\n your account number is: %d",i);
s[a].no=i;
printf("\n Enter your name:");
scanf("%s",s[a].name);
printf("\n your deposit is minimum Rs.500");
s[a].dep=500;
a++;i++;
}
void deposit()
{
int no,b=0,m=0;float aa;
printf("\n ******************");
printf("\n CASH DEPOSIT");
printf("\n ******************");
printf("\n Enter your account number:");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no==no)
m=b;
}
if(s[m].no==no)
{
printf("\n Account number:%d",s[m].no);
printf("\n Name:%s",s[m].name);
printf("\n deposit:%f",s[m].dep);
printf("\n Deposited amount:");
scanf("%f",&aa);
s[m].dep+=aa;
printf("\n The balance in account is :%f",s[m].dep);
}
else
{
printf("\n Account Number is Invalid");
}
}
void withdraw()
{
int no,b=0,m=0;
float aa;
printf("\n ***********************");
printf("\n cash withdraw");
printf("\n ***********************");
printf("\n Enter your account number:");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no==no)
m=b;
}
if(s[m].no==no)
{
printf("\n account number:%d",s[m].no);
printf("\n Name:%s",s[m].name);
printf("\n Deposit:%f",s[m].dep);
printf("\n Withdraw amount:");
scanf("%f",&aa);
if(s[m].dep<aa+500)
{
printf("\n Cannot Withdraw your accoumt has minimum balance");
}
else
{
s[m].dep=aa;
printf("\n The balance amount in account is :%f",s[m].dep);
}
}
else
printf("Invalid");
}
void lowbal()
{
int no,b=0;
float aa;
printf("\n ****************");
printf("\n Fllowing Account Holder's Balance<1000");
printf("\n ****************");
for(b=0;b<a;b++)
{
if(s[b].dep< 1000)
{
printf("\n\n Account number:%d",s[b].no);printf("\n Name:%s",s[b].name);}}}
