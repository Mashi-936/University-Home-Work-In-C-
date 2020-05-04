#include <stdio.h>
#include <stdlib.h>

    /*FoP-Practical Homework 8*/
    /*Participant 1:<Rahman>,<Md.Mashiur>(<3003194>)<ISE CSCE>*/


typedef struct Complex
{
    double real;
    double img;
} Complex;
Complex inputComplex()
{
    Complex z;
    printf("Enter the real part of the number: ");
    scanf("%lf",&z.real);
    printf("Enter the imaginary part of the number: ");
    scanf("%lf",&z.img);
    putchar('\n');
    return z;

}
Complex prinComplex(Complex m)
{
    m=inputComplex();
    return m;
}
Complex sumComplexNumbers(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    printf("\nSum of the two complex numbers is %lf + (%lf)i\n",sum.real,sum.img);
    return sum;
}
Complex subtractComplexNumbers(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real-b.real;
    sum.img=a.img-b.img;
    printf("\nDifference of two complex numbers is %lf+(%lf)i\n",sum.real,sum.img);
    return sum;
}
Complex multiplyComplex(Complex a, Complex b)
{
    Complex sum;
    sum.real=(a.real*b.real)-(a.img*b.img);
    sum.img=(a.real*b.img)+(a.img*b.real);
    printf("\nProduct of two complex numbers is %lf+(%lf)i\n",sum.real,sum.img);
    return sum;
}
Complex divideComplex(Complex a, Complex b)
{
    Complex sum;
    sum.real=((a.real*b.real)+(a.img*b.img))/((b.real*b.real)+(b.img*b.img));
    sum.img=((a.img*b.real)-(a.real*b.img))/((b.real*b.real)+(b.img*b.img));
    printf("\n Division of two complex numbers is %lf+(%lf)i\n",sum.real,sum.img);
    return sum;
}
int main()
{

    Complex z1,z2,sum;
    printf("Complex Number 1\n");
    z1=prinComplex(z1);
    printf("Complex Number 2\n");
    z2=prinComplex(z2);
    sumComplexNumbers(z1,z2);
    subtractComplexNumbers(z1,z2);
    multiplyComplex(z1,z2);
    divideComplex(z1,z2);
    return 0;
}


