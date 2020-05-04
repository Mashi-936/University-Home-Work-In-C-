#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* FoP-Practical Homework 1 */
    /* Participant 1: <Rahman>, <Md. mashiur> (<3003194>) <ISE CSCE> */
    /* Participant 2: <Hasan>, <Md.Mahmudul> (<3015255>) <ISE ME> */

    int Q1,Q2,Q3,Q,X,Y,A,F,T;
    printf("Enter scores of three quiz during semester Q1, Q2, Q3");
    scanf("%i %i %i",&Q1,&Q2,&Q3);

    printf("--------------------Quiz----------------------------\n");

    printf("first Quiz = %i\nsecond Quiz = %i\nthird Quiz = %i\n", Q1,Q2,Q3);


    printf("--------------------Mid term------------------------\n");
    printf("Enter Score Mid-Term 1, Mid-Term 2, X,Y");
    scanf("%i %i",&X,&Y);
    printf("Mid-Term 1 = %i\nMid-Term 2 = %i\n", X,Y);

    printf("--------------------Final exam----------------------\n");
    printf("Enter the score of final exam F");
    scanf("%i",&F);
    printf("\nFinal exam score = %i\n",F);
    Q=Q1+Q2+Q3;
    printf("\n\nQuiz total %i\n",Q);
    A=(X+Y)/2;
    printf("Mid-Term Average %i\n", A);
    T = Q+A+F;
    printf("Total %i\n",T);
    return 0;
}
