#include <stdio.h>

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void giam_dan(int a[], int n){
	int i;
	int j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			 if(a[j] < a[j+1])
			 	swap(&a[j], &a[j+1]);
		}
	}
}
int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	giam_dan(a, n);
	
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
