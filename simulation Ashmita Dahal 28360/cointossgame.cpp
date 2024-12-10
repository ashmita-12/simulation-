#include<stdio.h>
//write a program to simulate cointoss game using monte carlo simulation technique
#include<stdlib.h>
#include<time.h>
int main()
{
	int head = 0, tail=0, itr;
	double r;
	srand(time(NULL));
	printf("Enter the number of iteration");
	scanf("%d",&itr);
	for(int i=0; i<=itr; i++)
	{
		r= (double) rand()/RAND_MAX;
		if(r>=0.5)
		head++;
		else 
		tail++;
	}
	printf("No of Heads= %d\n",head);
		printf("No of Tails= %d\n",tail);
		if(head>tail)
		printf("Head wins by %d",head-tail);
		else
		printf("Tails wins by %d",tail-head);
}
