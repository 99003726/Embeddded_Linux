#include<stdio.h>
int sum(int x,int y);
int square(int x);
int main() 
{
int a,b,c,d;
a=10,b=20;
c=sum(a,b);
d=square(a);
printf("value of c & d: %d \t %d\t",c,d);
}
