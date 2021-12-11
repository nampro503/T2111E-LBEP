#include <stdio.h>
int main(){
	int n;
	printf(" Nhap vao n > 0 :");
	scanf("%d",&n);
	if(n<0){
		printf ("Nhap lai n > 0!");	
	}
	else{
		
		int s=1;
		int i;
		for(i=n;i>=1;i--){
			s *= i;
		}
		printf ("%d! = %d",n,s);
	}
}

