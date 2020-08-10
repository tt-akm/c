/* n进制转十进制 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strupr(char *);

int main(){
	long t1;
	int i, n, t, t3;
	char a[100];
	printf("Please input a number string:\t");
	gets(a);
	strupr(a);
	t3 = strlen(a);
	t1 = 0;
	printf("Please input n(2 or 8 or 16):\t");
	scanf("%d", &n);
	for(i = 0; i < t3; i++){
		if(a[i] - '0' >= n && a[i] < 'A' || a[i] - 'A' + 10 >= n){
			printf("Data error!!\n");
			exit(0);
		}
		if(a[i] >= '0' && a[i] <= '9')
			t = a[i] - '0';
		else if(n >= 11 && (a[i] >= 'A' && a[i] <= 'A' +n -10))
			t= a[i] - 'A' +10;
		t1 = t1 * n + t;
	}
	printf("The decimal is %ld\n", t1);
	return 0;
}

char *strupr(char *s){
	while(*s){
		if(*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return s;
}
