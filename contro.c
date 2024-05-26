#include <stdio.h>

//int *ptr khai bao con tro(them dau * phia truoc)
//*ptr gia tri cua con tro chi den
// ptr dia chi ma con tro dang mang


int main (){
	int a = 5;
	int *ptr;
	ptr = &a;
	printf("%d", a);
	printf("\n%d", &a);// in ra dia chi cua a
	printf("\n%d", *ptr);// in ra gia tri cua con tro chi den 
	printf("\n%d", ptr);// in ra dia chi con tro dang mang
	return 0;
}




