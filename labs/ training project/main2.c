#include <stdio.h>
#include <stdlib.h>

int main() {
	// ÌÀÑÈÂ
	int arr[]={1,2,4,3,5};
	arr[0]=56;
	printf("%d\n",arr[0]);
	
	float num[3];
	num[0]=4.6f;
	num[1]=8.5f;
	num[2]=1.7f;
	printf("%lf\n", num[1] );
	
	char word[]={'p','o','p','a'};
	char words[]="Hello world";
	words[1]='G';
	printf("%s\n",words);
	printf("%c\n",words[0]);
	//ÄÂÓÌÅĞÍÛÉ ÌÀÑÈÂ
	int array[3][4]={
		{4,5,6,4},
		{10,11,1,66},
		{32,45,7,56}
	};
	
	array[1][1]=4;
	printf("%d\n", array[0][2] );
	
	
	
	
	
	
	
	return 0;
}
