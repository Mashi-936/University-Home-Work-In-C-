#include <stdio.h>
#include <stdlib.h>

int square(int n)
{
    /* FoP-Practical Homework 5 */
    /* Participant 1: <Rahman>, <Md. mashiur> (<3003194>) <ISE CSCE> */
    /* Participant 2: <Hasan>, <Md.Mahmudul> (<3015255>) <ISE ME> */

    int j,x;
    for(j=1;j<=n;j++)
    {
        x=j*j;
    }
    return x;
}
int negative_power(int n)
{
    int j,base=-1;
    float x;
    x=1;
    for(j=1;j<=n;j++)
    {
        x=x*base;
    }
    return x;
}
int main()
{
    int j,n,a,x,b,sum;
    char y;
    printf("\t\t\tSum of Alternating square numbers n\n");
    printf("\nEnter a value for n :");
    scanf("%d",&n);
    sum=0;
    for(j=1;j<=n;j++)
    {
        a=square(j);
        b=negative_power(j);
        x=-a*b;
        sum=sum+x;
        printf("%d:%d\n",j,x);
    }
    if(n>0)
    {
        printf("\nsum =%d\n",sum);
    }
    else
        printf("\nError code(n<0)");

    printf("\nDo you want to start again(y/n)?");
    scanf("%c",&y);
    scanf("%c",&y);
    while(y=='y')
    {
    printf("\nEnter a value for n :");
    scanf("%d",&n);
    sum=0;
    for(j=1;j<=n;j++)
    {
        a=square(j);
        b=negative_power(j);
        x=-a*b;
        sum=sum+x;
        printf("%d:%d\n",j,x);
    }
    if(n>0)
    {
        printf("\nsum =%d\n",sum);
    }
    else
        printf("\nError code(n<0)");

    printf("\nDo you want to start again(y/n)?");
    scanf("%c",&y);
    scanf("%c",&y);
    }
return 0;

}
