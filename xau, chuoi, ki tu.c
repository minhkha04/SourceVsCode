#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

isupper(char c[i]){
	kiem tra chu in hoa hay khong
	true return 1;
	false return 0;
}

islower(char c){
	kiem tra chu in thuong hay khong
	true return 2;
	false return 0;
}

isalpha(char c[i]){
	kiem tra ki tu co phai chu cai hay khong
	true return 2 if lower;
		 return 1 if upper;
	false return 0;
}

isdigit(char c[i]){
	kiem tra ki tu co phai chu so hay khong
	true return 1;
	false return 0;
}

tolower(char c[i]){
	tra ve dang in thuong
	chi duoc 1 ki tu thu i
}

toupper(char c[i]){
	tra ve dang in hoa
	chi duoc 1 ki tu thu i

}

strcmp(char c, char d){
	so sanh 2 xau
	c > d return 1;
	c = d return 0;
	c < d return -1;
}

strrev(char c){
	dao nguoc chuoi
	thay doi gia tri cua chuoi
}

strlwr(char c){
	tra ve in thuong
	thay doi gia tri cua chuoi
}

strupr(char c){
	tra ve in hoa
	thay doi gia tri cua chuoi
}

strcyp(char c, char d){
	copy noi dung d vao c
	thay doi gia tri cua chuoi c
}

strcat(char c, char d){
	noi d vao c
	thay doi gia tri chuoi c
}

atoi(char c){
	tra ve so int cua xau ban dau
}

atoll(char c){
	tra ve so long long cua xau ban dau
}

printf("%d", strlen(a)) in ra do dai cua xau a
printf("%s", a) in ra xau a
printf("%c", a[i]) in ra ki tu thu i cua xau a




























