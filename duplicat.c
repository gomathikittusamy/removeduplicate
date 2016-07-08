#include<stdio.h>
#include<conio.h>
void main()
{
char a[1000];
int i,j=0,n,count;
clrscr();
printf("Enter the string");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count=0;
}
else
count=1;
}
if(count==1)
printf("%c",a[i]);
}
getch();
}

