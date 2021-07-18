#include <stdio.h>
#include <time.h>

 
int main ()
{
	 
	char task[100];
	unsigned int x_days=0; 
	unsigned int x_hours=0;
	unsigned int x_minutes=0;
	unsigned int x_seconds=0;
	unsigned int x_milliseconds=0;
	unsigned int totaltime=0,count_down_time_in_secs=0,time_left=0;

	clock_t x_startTime,x_countTime;
	
    
    printf("\nEnter the Task:  ");
	gets(task);
    
    printf("\nEnter the number of days");
    scanf("\d",x_days);
    
    x_startTime=clock();  // start clock
    time_left=x_days-1;   // update timer

	while (time_left>0) 
	{
		x_countTime=clock(); // update timer difference
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
		x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
		x_hours=x_minutes/60;
		x_days=x_hours/24;


		time_left=x_days-1; // subtract to get difference 


		printf( "\n%d more days left for ",time_left);
		puts(task);
	}


	printf( "\n\n\nTime's out\n\n\n");
	printf( "Payment:  ");
	puts(task);

return 0;
}
