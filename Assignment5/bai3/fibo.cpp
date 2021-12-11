#include <stdio.h>
int main(){
	int n,x1,x2,x3;
	printf("Nhap vao n:");
	scanf("%d",&n);
	
	if(n==1){
		printf(" x1=0");
		
	}
	if(n==2){
		printf("x2=1");
		
	}
	if(n>3){
		for(int i=3;i<=n;i++){
			x3=x1+x2;
			x1=x2;
			x2=x3;
		
		}	printf("So Fibonacci thu %d la: %d",n,x3);
	}
	
}
