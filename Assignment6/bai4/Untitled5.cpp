#include <stdio.h>
int main(){
	int n, s=0;
	printf("Nhap vao n:");
	scanf("%d",&n);
	int i;
	for (i=1;i<n;i++){
		if(n % i == 0){
			s=s+i;
		}
	}
	if(s==n){
		printf("%d la so hoan hao\n",n);
	}else{
		printf("%d khong phai la so hoan hao \n",n);
	}
}
