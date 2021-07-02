#include <stdio.h>
#include <string.h>

int main(void)
{
	int N, i, j, score, num;
	char quiz[81];
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		score=0, num=1;
		scanf("%s", quiz);
		for(j=0; j<strlen(quiz); j++) {
			if(quiz[j]=='O')
			{
				score+=num;
				num++;
			}
			else
				num=1;
		}
		printf("%d\n", score);
	}
	return 0;
}
