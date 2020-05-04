#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* FoP-Practical Homework 2, group p1 */
    /* Participant 1: <Rahman>, <Md. mashiur> (<3003194>) <ISE CSCE> */
    /* Participant 2: <Hasan>, <Md.Mahmudul> (<3015255>) <ISE ME> */
    int count,T;
    int Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8;
    count=0;
    printf("\n====QUIZ====\n\nQ1: What is the smallest unit in the information technology, and which kind of symbols it contains?\n");
    printf("1: bit, binary\t2: char, one character\t3: integer, digits\t4: char, alphabet\n\n");
    printf("Enter your answer Q1=");
    scanf("%i",&Q1);
    if (Q1==1)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 1: bit, binary");
    }
    printf("\n\n\n\nQ2: How many bits have a Kilobyte?\n");
    printf("1: 8 bits\t2: 1024 bits\t3: 8192 bits\t4: 8000 bits\n\n");
    printf("Enter your answer Q2=");
    scanf("%i",&Q2);
    if(Q2==2)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 3: 8192 bits");
    }
    printf("\n\n\n\nQ3: What is the standard for the smallest addressable unit in the computer memory?\n");
    printf("1: bit\t2: byte\t3: kilobyte\t4: binary\n\n");
    printf("Enter your answer Q3=");
    scanf("%i",&Q3);
    if(Q3==2)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 2: byte ");

    }
    printf("\n\n\n\nQ4: How many states you can code with 4 bits?\n");
    printf("1: 32\t2: 16\t3: 4\t4: 286\n\n");
    printf("Enter your answer Q4=");
    scanf("%i",&Q4);
    if(Q4==2)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry. This is not correct! In general you can code 2^n states with n bits, In this case it will 2:16");
    }
    printf("\n\n\n\nQ5: What is the value of  10010100 in Octal?\n");
    printf("1: 32\t2: 19\t3: 224\t4: 286\n\n");
    printf("Enter your answer Q5=");
    scanf("%i",&Q5);
    if(Q5==3)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 3: 224");

    }
    printf("\n\n\n\nQ6: What's the decimal equivalent of the hexadecimal value (2C)16?\n");
    printf("1: 3278\t2: 907\t3: 44\t4: 286\n\n");
    printf("Enter your answer Q6=");
    scanf("%i",&Q6);
    if(Q6==3)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 3: 44");
    }
    printf("\n\n\n\nQ7: What is the value of  (22)8 in binary?\n");
    printf("1: 00110100\t2: 00010010\t3: 00010011\t4: 10010010\n\n");
    printf("Enter your answer Q7=");
    scanf("%i",&Q7);
    if(Q7==2)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
       printf("Sorry, this is not correct! The right answer is 2: 00010010");
    }
    printf("\n\n\n\nQ8: What's the binary equivalent of the decimal value -4 ?\n");
    printf("1: 11111100\t2: 00000100\t3: 10000100\t4: 10000100\n\n");
    printf("Enter your answer Q8=");
    scanf("%i",&Q8);
    if(Q8==1)
    {
        count=count+1;
        printf("Congratulation. This is correct.\n");
        printf("Point=%i",count);
    }
    else
    {
        printf("Sorry, this is not correct! The right answer is 1: 11111100");
    }
    T=(count*100)/8;
    printf("\n\n\nYou answered %i of 8 questions (%i percent) correctly.\n",count,T);


    return 0;
}
