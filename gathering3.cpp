#include<stdio.h>

int main()
{

	int Arr[] = { 1, 2, 3, 4, 5, 6 };
	int length = *(&Arr + 1) - Arr;

	printf(" the number of elements in Arr[] is = %d " ,length);
	return 0;
}
