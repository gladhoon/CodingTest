#include <stdio.h>

int main(void)
{
	int C, N, i, j, count;
	scanf("%d", &C);
	
	for(i=0; i<C; i++) {
		scanf("%d", &N);
		int arr[1000], sum=0;
		double avg=0.0;
		
		for(j=0; j<N; j++) {
			scanf("%d", &arr[j]);
			sum+=arr[j];
		}
		avg=(double)sum/N;
		count=0;
		for(j=0; j<N; j++) {
			if(arr[j] > avg)
				count++;
		}
		printf("%.3lf%%\n", (double)count*100/N);
	}
	
	return 0;
}
