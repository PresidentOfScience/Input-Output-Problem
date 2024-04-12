#include <stdio.h>

int main(){
	
	int M,N;
	scanf("%d %d", &N, &M);
	
	int i;
	for(i=N;i<=M+N-1;i++) {
		printf("%d\n", i);
	}
	
	return 0;
}
