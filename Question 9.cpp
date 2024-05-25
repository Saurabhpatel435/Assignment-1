#include<stdio.h>
int main(){
	printf("Saurabh patel\nRoll no.=2303510100090\n");
	int Days,Weeks,Years ,_Days;
	printf("Enter the number of days :");
	scanf("%d",&Days);
	Years=Days/365;
	Weeks=(Days%365)/7;
	_Days=Days-(Years*365+Weeks*7);
	printf("Years :%d\nWeeks :%d\nDays :%d\n",Years,Weeks,_Days);
	
	return 0;
}
