#include <stdio.h>
/*while (condition){
	
}
---------------------------
do {
	
}
while ;
------------------------------
for (st1, st2, st3){
	
}*/

int main () {
	int i,s = 0,n;
	
	do {
		printf("nhap: ");
		scanf("%d", &n);
		if (n > 0)
			break;
	}while (1);
	
	for (i = 1; i <= n; i++){
		s += i;
	}
	
	printf("%d", s);
	return 0;
}

