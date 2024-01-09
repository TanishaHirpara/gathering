#include<stdio.h>



	int factorial(int num)
	{
		int fact,n;
		if(num<=1)
		{
			return 1;
		}
		else
		{
			fact = num * factorial(num-1);
			return fact;
			
		}
	}
	
	int main()
	{
		int num;
		
		printf("Enter the number = " );
		scanf("%d" ,&num);
		
		printf("factorial is = %d " , factorial(num));
		
	}

