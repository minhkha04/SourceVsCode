#include <stdio.h>

int main (){
	int m,y,d;
	
	printf("Nhap thang: ");
	scanf("%d", &m);
	printf("Nhap nam: ");
	scanf("%d", &y);
	
	switch(m) {
	case 4:
	case 6:
	case 9:
	case 11:
		d = 30;
		break;
	case 2:
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		d = 29;
		else 
		d = 28;
		break;
	default:
		d = 31;
	}
	printf("%d", d);
	return 0;
		
}
