#include <stdio.h>

int main(void)
{
	int arr[9], i, index, max=0;
	for(i=0; i<9; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] > max) {
			max = arr[i];
			index = i+1;
		}
	}
	printf("%d\n%d", max, index);
	
	return 0;
}
