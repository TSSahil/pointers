#include <stdio.h>

int main(void) {
	
	int x[5];
	x[0]=0;
	x[1]=1;
	x[2]=2;
	x[3]=3;
	x[4]=4;
	int *p=x;
	printf("%u\n",x);
	printf("%u\n",&x[0]);
	printf("%u\n",(x+1));
	printf("%d\n",*(x+1));
	printf("%u\n",&x[1]);
	p++;
	printf("%d\n",*(p+1));
	printf("%u\n",&x[1]);
	
	return 0;
}

