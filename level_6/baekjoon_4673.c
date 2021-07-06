#include <stdio.h>
#define SIZE 10001
int self(int n);

int main(void)
{
	int i, num, arr[SIZE];
	
	for(i=1; i<SIZE; i++) {
		num = self(i);
		if(num < SIZE)
			arr[num] = 1;
	}
	for(i=1; i<SIZE; i++)
	{
		if(arr[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}

int self(int n)
{
	int sum = n;
	
	while(n>0)
	{
		sum += n%10;
		n /= 10;
	}
	return sum;
}

