#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status {CONTINUE,WON,LOST};
int rolldice(void);

int main(void)
{
	int sum, point;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rolldice();
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		point = sum;
		printf("Point is %d\n", point);
		break;
	}
	while (gameStatus == CONTINUE)
	{
		sum = rolldice();
		if (sum == point) 
		{
			gameStatus = WON;
		}

		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
		if (gameStatus == WON) 
		{
			printf("Player wins.\n");
		}

		else
		{
			printf("Player loses.\n");
		}

	}
	system("pause");
	return 0;
}

int rolldice(void)
{
	int die1, die2, worksum;
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("Player rolled %d+%d=%d\n", die1, die2, worksum);
	return worksum;
}