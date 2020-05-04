#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* FoP-Practical Homework 10 */
/* Participant 1: <Rahman>, <Md.Mashiur> (<3003194>) <ISE CSCE> */

struct date {
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
}; typedef struct date DATE;

struct short_message{
	char text [160];
	DATE time;
	char sender [30];

};typedef struct short_message SHORTMESSAGE;
#define MAXMESSAGE 10
SHORTMESSAGE sm_Archive [MAXMESSAGE];
unsigned sm_AEntries = 0;

DATE generateDate();
bool isBefore (DATE userNewDate, DATE prvIndexDate);
bool isEqual (DATE userNewDate, DATE prvIndexDate);
SHORTMESSAGE generateMsg ();
void search_Archive (DATE selectedDate);
int main (){
	int userOption,userInput=3;
	SHORTMESSAGE newMsg, oldMsg;
	DATE userSearchDate;

	while (userInput ==3) {
		printf ("Please choose the following options:\n");
		printf ("\nPress # 1 to add a Message in the Message archive:\n");                                      ;
		printf ("\nPress # 2 to search a Message from the Message archive:\n");
		printf ("\nplease enter your option from the above list: ") ;
	    scanf ("%d",&userOption);
		if  (userOption ==1)  {
			if (sm_AEntries>=10){
				printf ("Message Archive is full, you can not add any more message!");
			}else {
				newMsg = generateMsg ();
				if (sm_AEntries == 0){
					sm_Archive [sm_AEntries] = newMsg;
					sm_AEntries ++;
					oldMsg = newMsg;
					}else if (isBefore(newMsg.time, oldMsg.time)){
						sm_Archive [sm_AEntries-1] = newMsg;
						sm_Archive [sm_AEntries] = oldMsg;
						sm_AEntries ++;
					}else {
						sm_Archive [sm_AEntries] = newMsg;
						sm_AEntries ++;
					}
				}

		}else if (userOption==2){
			printf ("\nPlease select the date first to search your Message in the Archive");
			userSearchDate = generateDate();
			searchArchive (userSearchDate);
		}
		printf("To add or search a new Msg press press '1'");
		printf("To terminate3':");
		scanf ("%d", &userInput);

	}
	if (userInput!=3){
		printf ("\nYou have chosen to exit the program or you have pressed an invalid key. Terminating .....");
	}
return 0;
}
DATE generateDate(){
	DATE userInputDate;
	printf ("\nPlease enter the Messege Archive Date:");
	printf ("\nYear: ");
	scanf ("%d", &userInputDate.year);
	printf ("\nMonth: ");
	scanf ("%d", &userInputDate.month);
	printf ("\nDay: ");
	scanf ("%d", &userInputDate.day);
	printf ("\nHour: ");
	scanf ("%d", &userInputDate.hour);
	printf ("\nMin: ");
	scanf ("%d", &userInputDate.min);
	printf ("\nSec: ");
	scanf ("%d", &userInputDate.sec);
	printf ("\n");
return userInputDate;
}

bool isBefore (DATE userNewDate, DATE prvIndexDate){
	bool before = false;
	int year,month,day,hour,min,sec;
	year = (userNewDate.year)-(prvIndexDate.year);
	month = (userNewDate.month)-(prvIndexDate.month);
	day = (userNewDate.day)-(prvIndexDate.day);
	hour = (userNewDate.hour)-(prvIndexDate.hour);
	min = (userNewDate.min)-(prvIndexDate.min);
	sec = (userNewDate.sec)-(prvIndexDate.sec);

	if (year>0){
		before = true;
	}else if (year<0){
		before = false;
	}else if (year==0){
		if (month>0){
			before = true;
		}else if (month<0){
			before = false;
		}else if (month==0){
			if (day>0){
				before = true;
			}else if (day<0){
				before = false;
			}else if (day==0){
				if (hour>0){
					before = true;
				}else if (hour<0){
					before = false;
				}else if (hour==0){
					if (min>0){
						before = true;
					}else if (min<0){
						before = false;
					}else if (min==0){
						if (sec>0){
							before = true;
						}else if (sec<0){
							before = false;
						}else{
							before = false;
						}

					}

				}

			}

		}

	}
return before;
}

bool isEqual (DATE userNewDate, DATE prvIndexDate){
	bool equal = false;
	int year,month,day,hour,min,sec;
	year = (userNewDate.year)-(prvIndexDate.year);
	month = (userNewDate.month)-(prvIndexDate.month);
	day = (userNewDate.day)-(prvIndexDate.day);
	hour = (userNewDate.hour)-(prvIndexDate.hour);
	min = (userNewDate.min)-(prvIndexDate.min);
	sec = (userNewDate.sec)-(prvIndexDate.sec);
	if (year==0 && month==0 && day==0 && hour==0 && min==0 && sec ==0 ){
		equal = true;
	}else{
		equal = false;
	}

return equal;
}

SHORTMESSAGE generateMsg (){
	SHORTMESSAGE userInputMsg;
	printf ("\nPlease enter your Msg <max 160 characters>: ");
	gets (userInputMsg.text);
	userInputMsg.time = generateDate();
	printf ("\nPlease enter sender name <max 30 characters>: ");
	gets (userInputMsg.sender);
	printf ("\nyour Message has been successfully added in the Messege Archive !");
return userInputMsg;
}

void searchArchive (DATE selectedDate){
	SHORTMESSAGE tmpMessege; DATE archiveDate;
	bool found = false;
	int i;
	for (i =0; i>=10; i++){
		tmpMessege = sm_Archive [i];
		archiveDate = tmpMessege.time;
		if (isEqual(archiveDate,selectedDate )){
			printf ("\nYour selected Messege is: ");
			puts(tmpMessege.text);                 // puts to print the string
			printf ("\nThe Messege Sender is: ");
			puts(tmpMessege.sender);
			found = true;
		}
	}
	if (!found){
		printf ("\nSorry your selected Message is not found in the Message Archive");
	}

}
