#include <stdio.h>
//++a tang len 1 don vi truoc khi tinh
//a++ tang len 1 don vi sau khi tinh
int main (){
	int a, b, c, d;
	printf("Nhap a,b");
	scanf("%d" "%d", &a , &b);
	c = ++a * 3;
	d = b++ * 3;
	printf("a b c d %d %d %d %d", a, b, c, d);
	return 0;
}
