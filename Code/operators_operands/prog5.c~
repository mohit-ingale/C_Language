#include<stdio.h>
#include<math.h>
void main()
{
int month[12]={0,31,59,90,120,151,181,212,243,273,304,334},day1,day2,month1,month2,year1,year2,days=0,dif=0;

printf("Enter the Prior date in dd/mm/yyyy format : "); 
scanf("%d %*c %d %*c %d",&day1,&month1,&year1);

printf("Enter the Later date in dd/mm/yyyy format : "); 
scanf("%d %*c %d %*c %d",&day2,&month2,&year2);


dif=year2-year1;
if(dif>0)
	{	
		days=days+(365-month[month1-1])-day1+1;
		if(month1<=2)
			(year1%100==0)?((year1%400)?(days=days+1):(days=days)):((year1%4==0)?(days=days+1):(days=days));
		days=days+((dif-1)*365);
		if(dif<4)
		{
			while(year1<year2)
			{
				year1++;
				days=days+365;
				(year1%100==0)?((year1%400)?(days=days+1):(days=days)):((year1%4==0)?(days=days+1):(days=days));
			}
		}
		else
			days=days+(dif/4);
		days=days+month[month2-1]+day2;
		if(month2>2)
			(year2%100==0)?((year2%400)?(days=days+1):(days=days)):((year2%4==0)?(days=days+1):(days=days));
	}
else
	{
		days=days+month[month2-1]+day2-month[month1-1]-day1+1;
		if(month1<=2&&month2>2)
			(year1%100==0)?((year1%400)?(days=days+1):(days=days)):((year1%4==0)?(days=days+1):(days=days));
	}		

printf("Number of days= %d\n",days);

}
