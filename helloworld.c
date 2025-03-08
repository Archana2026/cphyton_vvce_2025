#include<stdio.h>
void main()
{
int N;
printf("weight");
scanf("%d",N);
if(0<N<=2000)
{
    printf("time estimation: 25min");
}
if(2001<=N<=4000){
printf("time estimation: 35min");
}
if(N>4000){
printf("time estimation: 45min");
}
else
{
    printf("OVERLOADED");
}
}