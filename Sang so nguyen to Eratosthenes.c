#include <stdio.h> 
#include <math.h>


int Prime[1000001];
void sive() {
	int i;
	int j;
	for(i = 0; i <= 1000000; i++) {
		Prime[i] = 1;
	}
	Prime[0] = 0;
	Prime[1] = 0;
	for(i = 0; i <= sqrt(1000000); i++) {
		if(Prime[i]) {
			for(j = i*i; j <= 1000000; j+=i){
				Prime[j] = 0;
			}
		}
	}
}
int main () {
	int n;
	int i;
	scanf("%d", &n);
	sive();
	for(i = 0; i <= n; i++) {
		if(Prime[i]){
			printf("%d ", i);
		}
	}
	return 0;
}
