#include <stdio.h>

int main (){
	int n;
	
	printf ("Nhap nam: ");
	scanf ("%d", &n);
	
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
		printf ("366");
	else 
		printf ("355");
	return 0;
}
