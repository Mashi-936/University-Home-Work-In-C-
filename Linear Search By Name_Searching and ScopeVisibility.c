#include <stdio.h>
#include <string.h>

/* FoP-Practical Homework 9 */
/* Participant 1: <Rahman>, <Md.Mashiur> (<3003194>) <ISE CSCE> */
 int linSearch_ByName (char name [30]);
 typedef struct student
 {
 	char name [30];
 	unsigned matrNo;
 }student;

 /* global variables */
student participants[] =
{
    {"John Doe", 111},
    {"Bob Baumeister", 139},
    {"Jane Smith", 140},
    {"Jack Archer", 141},
    {"Johnny Mahony", 167},
    {"Simon Anthony", 170},
    {"Marylin Anderson", 174},
    {"Melanie Thomson", 181},
    {"Sydney Core", 183},
    {"Steve Smith", 186}
};
int no_Of_Stud = 10;

 int main ()
 {
 	char nameFromuserInput [30];
 	printf ("Please enter the name you searching for: ");
 	gets(nameFromuserInput);
 	int stringEvaluationResult = linSearch_ByName (nameFromuserInput);
return 0;
}

 int linSearch_ByName (char name [30]){
 	int i, returnValue, matrNr, check;
 	char tmpArray [30];
 	for (i=0;i<no_Of_Stud;i++){
 		strcpy(tmpArray, participants [i].name);
 		int returnValue = strcmp (tmpArray,name);
 		if (returnValue == 0){
 			matrNr = participants [i].matrNo;
 			printf ("\nYour entered name is          : ");
 			printf ("%s\n", name);
 			printf ("And corresponding Matr. Nr. is: %d\n", matrNr);
 			check =1;
 		}
 	}
	if (check!=1)
    {
		printf ("Sorry! your entered name '");
 		printf ("%s'", name);
 		printf (" is not registered in our list.Please Try again!\n");
	}
 return returnValue;
 }

