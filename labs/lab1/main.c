#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c,x1,x2,d;
	printf("Vvedite a:\n");
	scanf("%lf",&a);
	
	printf("Vvedite b:\n");
	scanf("%lf",&b);
	
	printf("Vvedite c:\n");
	scanf("%lf",&c);

	d=pow(b,2)-4*a*c;
	
	if(0>d){
		printf("KORNEY NET");
	}
	
	
	if (d==0){
		x1=-d/(2*a);
		printf("x1=%lf\n",x1);
		
	}
	else
	{
	
	
	x1=-b+sqrt(d)/(2*a);
	x2=-b-sqrt(d)/(2*a);
	
	printf("x1=%lf\n",x1);
	printf("x2=%lf\n",x2);
	printf("d=%lf\n",d);
	}
	
	
	return 0;
}
