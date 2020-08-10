/* 十进制转二进制 */

#include <stdio.h>

int main(){
	int i, j, n, m;
	int a[16] = {
		0
	};
	printf("Please input the decimalism number(0 ~ 32767):\t");
	scanf("%d", &n);
	for(m = 0; m < 15; m++){
		i = n % 2;
		j = n / 2;
		n = j;
		a[m] = i;
	}
	for(m = 15; m >= 0; m--){
		printf("%d", a[m]);
		if(m % 4 == 0)
			printf(" ");
	}
	printf("\n");
	return 0;
}
