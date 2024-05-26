#include <stdio.h>

int gcd(int a, int b){
	if(a == 0 || b == 0)
		return a+b;
	while(a != b){
		if(a > b)
			a -= b;
		else 
			b -= a;
	}
	return a;
}

int lcm(int a, int b){
	int c = b/gcd(a, b) * a;
	return c;
}
int main () {
	int a,b;
	scanf("%d%d", &a,&b);
	

	printf("%d", lcm(a, b));
	return 0;
}
