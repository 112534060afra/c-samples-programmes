#include<stdio.h>
#include<string.h>
int main()
{
char name[20];
char password[20];
printf("enter a name:");
scanf("%s",&name);
printf("enter a password:");
scanf("%s",&password);
if(strcmp(password,"AfRa04")==2)
{
printf("verified");
}
else
{
printf("not verified");
}
return 0;
}


