#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void sign(int dd,int mm);

int main()
{
	int dd,mm;
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	p1:
	printf("\nEnter Date(dd):");
	scanf("%d",&dd);
	if(dd==0)
	{
		printf("\nWrong day:Try Again.");
		goto p1;
	}
	p2:
	printf("\nEnter month:");
	scanf("%d",&mm);
	int mxdate=mon[mm];
	if(mm>12 || mm==0)
	{
		printf("\nWrong day:Try Again.");
		goto p2;
	}
	printf("\nEntered Date: %d/%d",dd,mm);
	if(dd>mon[mm])
	{
		printf("\nMonth dont have this Date!Try Again");
		goto p1;
	}
	sign(dd,mm);
}
void sign(int d1,int m1)
{
	if(m1==1)
	{
		if(d1<=21)
		{
			printf("\nZodiac Sign:Capricorn");
			printf("\nBirth Stope:Ruby");
		}
		else
		{
			printf("\nZodiac Sign:Aquarius");
			printf("\nBirth Stope:Garnet");
		}
	}
	else if(m1==2)
	{
		if(d1<=18)
		{
			printf("\nZodiac Sign:Aquarius");
			printf("\nBirth Stope:Garnet");
		}
		else
		{
			printf("\nZodiac Sign:Pisces");
			printf("\nBirth Stope:Amythyst");
		}
	}
	else if(m1==3)
	{
		if(d1<=20)
		{
			printf("\nZodiac Sign:Pisces");
			printf("\nBirth Stope:Amythyst");
		}
		else
		{
			printf("\nZodiac Sign:Aries");
			printf("\nBirth Stope:BloodStone");
		}
	}
	else if(m1==4)
	{
		if(d1<=20)
		{
			printf("\nZodiac Sign:Aries");
			printf("\nBirth Stope:BloodStone");
		}
		else
		{
			printf("\nZodiac Sign:Tuurus");
			printf("\nBirth Stope:Sapphire");
		}
	}
	else if(m1==5)
	{
		if(d1<=21)
		{
			printf("\nZodiac Sign:Tuurus");
			printf("\nBirth Stope:Sapphire");
		}
		else
		{
			printf("\nZodiac Sign:Gemini");
			printf("\nBirth Stope:Agate");
		}
	}
	else if(m1==6)
	{
		if(d1<=21)
		{
			printf("\nZodiac Sign:Gemini");
			printf("\nBirth Stope:Agate");
		}
		else
		{
			printf("\nZodiac Sign:Cancer");
			printf("\nBirth Stope:Emeralel");
		}
	}
	else if(m1==7)
	{
		if(d1<=22)
		{
			printf("\nZodiac Sign:Cancer");
			printf("\nBirth Stope:Emeralel");
		}
		else
		{
			printf("\nZodiac Sign:Leo");
			printf("\nBirth Stope:Onyx");
		}
	}
	else if(m1==8)
	{
		if(d1<=22)
		{
			printf("\nZodiac Sign:Leo");
			printf("\nBirth Stope:Onyx");
		}
		else
		{
			printf("\nZodiac Sign:Vigro");
			printf("\nBirth Stope:Carnalian");
		}
	}
	else if(m1==9)
	{
		if(d1<=22)
		{
			printf("\nZodiac Sign:Vigro");
			printf("\nBirth Stope:Carnalian");
		}
		else
		{
			printf("\nZodiac Sign:Libra");
			printf("\nBirth Stope:Chrysolite");
		}
	}
	else if(m1==10)
	{
		if(d1<=23)
		{
			printf("\nZodiac Sign:Libra");
			printf("\nBirth Stope:Chrysolite");
		}
		else
		{
			printf("\nZodiac Sign:Scorpio");
			printf("\nBirth Stope:Beryl");
		}
	}
	else if(m1==11)
	{
		if(d1<=21)
		{
			printf("\nZodiac Sign:Scorpio");
			printf("\nBirth Stope:Beryl");
		}
		else
		{
			printf("\nZodiac Sign:Sagittarious");
			printf("\nBirth Stope:Topaz");
		}
	}
	else
	{
		if(d1<=21)
		{
			printf("\nZodiac Sign:Sagittarious");
			printf("\nBirth Stope:Topaz");
		}
		else
		{
			printf("\nZodiac Sign:Capricorn");
			printf("\nBirth Stope:Ruby");
		}
	}
}
