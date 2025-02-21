#include <stdio.h>
#include <stdlib.h>

int main() {
	// -32 768 32 768
	short s=500;
	// 0-64 000
	unsigned short a=5;
	// -2mln 2mln
	int x=5,y=6,res;
	
	float a1=4.5f;
	double a2=4.5345f;
	

	x*=5;
	res=x+y;

	printf("Hello World\n");
	printf("peremennaya:%d+%d=%d\n",x,y,res);
	
	
	
	return 0;
}
