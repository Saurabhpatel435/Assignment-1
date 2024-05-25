#include<stdio.h>
int main(){
	printf("Saurabh patel\n Roll no. 2303510100090\n");
	int min,hour;
	printf("Enter the minutes :",min);
	scanf("%d",&min);
	hour=min/60;
	printf("hour :%d",hour);
	min=min%60;
	printf(" minutes :%d",min);
	return 0;
}
