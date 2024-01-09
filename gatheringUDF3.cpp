#include<stdio.h>



int len(int a[])
{

	int i, count=0;
	
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
		
	}
	return count;
}


int main()
{
	int a[100] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("The length of array is = %d " ,len(a));
	
	
}