#include <stdio.h>
int main(){
	int n, s=0;
	printf("Nhap vao n:");
	scanf("%d",&n);
	
	do{
		s= s*10+n%10;
		
	}while (n/=10);
	printf("So ngich dao la : %d",s);
	
}
