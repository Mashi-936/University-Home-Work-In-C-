#include<stdio.h>
#include<string.h>

int main()
{
    /* FoP-Practical Homework 6 */
    /* Participant 1: <Rahman>, <Md.Mashiur> (<3003194>) <ISE CSCE> */

    char name[40];
    char *rev;

    printf("Please enter your name : \n");
    scanf("%s",name);

    printf("\nWelcome Mr./Mrs. %s\n",name);
    rev = strrev(name);

    printf("\nYour name is inverted as : %s\n",rev);

    return 0;
}
