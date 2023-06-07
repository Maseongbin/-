#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define SIZE 100

void main()
{
	srand(time(NULL));

	int freq[SIZE] = { 0 };
	
	for (int i = 0; i < 30000; i++)
	{
		
		++freq[rand() % 100];
	}

	printf("=======================\n");
	printf("¼ýÀÚ    ºóµµ\n");
	printf("=======================\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d      %3d\n", i, freq[i]);
	}


}