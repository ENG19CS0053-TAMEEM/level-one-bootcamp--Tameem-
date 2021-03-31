#include<stdio.h>
int main()
{
int n,a[100],sum=0;
printf("Enter the total numbers: ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("Enter a number \n");
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum of n numbers is %d",sum);
return 0;
}
