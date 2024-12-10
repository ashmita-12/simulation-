//Lab 3 : write a c program to find value of PI using Monte carlo simulation method
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define SEED 35791246
int main()
{
	int itr=10;
	double x, y;
	int i,j, count = 0;
	double z;
	double PI;
	srand(SEED);
	printf("S.N\t count\t PI\n");
	for(i=1;i<=8;i++){
		count=0;
	for(j=1; j<=itr;j++)
	{
		x = (double)rand()/RAND_MAX;
		y = (double)rand()/RAND_MAX;
		z= x*x+y*y;
		if(z<=1.0)
		count++;
	}
	PI=(double)count/itr*4;
	printf("%d\t%d\t%f\n",i,count,PI);
	itr=itr*10;
	getch();
}
	return 0;
}
