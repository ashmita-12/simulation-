//Lab2 write a program to simulate the game called DiceToss. We roll a dice two times and
//find the sum of dice value.  The is one with higher sum value. A game is played by two players a and b . a game is played for next attempt in case of 
//same score. a game is continued until either of the player wins.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SEED 45465447
int main()
{
	int i, itr=1;
	int xa, ya;
	int A_score, B_score;
	A_score=0;
	B_score=0;
	srand(SEED);
//	while(i<=10)
//	{
//		xa = 1 + rand()%6;
//		printf("xa = %d\n",xa);
//		i = i+1;
//	}
	while(1)
	{
		xa = 1 + rand()%6;
			ya = 1 + rand()%6;
			A_score = A_score +xa;
			B_score = B_score + ya;
			if(A_score!=B_score)
			break;
			itr = itr +1;
	}
	printf("Game over\n");
	getch();
	printf("score by A=%d\n",A_score);
	printf("score by B=%d\n",B_score);
		if(A_score>B_score)
		printf("A Won by %d in %d attempt", A_score-B_score);
		else
		printf("B Won by %d in %d attempt",B_score-A_score);
	return 0;
}
