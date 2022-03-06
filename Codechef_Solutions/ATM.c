#include <stdio.h>

int main(){
	int c;
	float b;
	scanf("%d%f",&c,&b);

	if(c+0.5>b){
		printf("%.2f",b);
	}
	else if(c%5!=0){
		printf("%.2f",b);
	}
	else{
		printf("%.2f",b-c-0.5);
	}

	return 0;
}