#include<stdio.h>

float input(char a)
{
float n;
printf("Enter the values h,d,b: ");
scanf("%f",&n);
return n;
}
float volume(float h, float d, float b)
{
float volume=(((h*b*d)+(d/b))/3);
return volume;
}
void output(float v)
{
printf("The volume is %f",v);
}
int main()
{
float h,d,b,v;
h=input(h);
d=input(d);
b=input(b);
v=volume(h,d,b);
output(v);
return 0;
}
