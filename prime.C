#include<stdio.h>
int main()
{
int n,c=2;
printf("Enter the number :\n",n);
scanf("%d",&n);
for(c=2;c<=n-1;c++)
{
if(n%c==0)
{
printf("NO!!! %d is not a polindrome...\n",n);
break;
}
}
if(c==n)
{
printf("YES!!! %d is a polindrome...\n",n);
}
return 0;
}
