#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("\aEnter %d golf scores:\n", SIZE);
	for (index = 0;index < SIZE;index++)
		scanf("%d", &score[index]);
	printf("\aThe scores read in are as follows:\n");
	for (index = 0;index < SIZE;index++)
		printf("%5d", score[index]);
	printf("\n");
	for (index = 0;index < SIZE;index++)
		sum += score[index];
	average = (float)sum / SIZE;
	printf("Sumof score is %d, and average is %.2f.\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);
	return 0;
}