#include <stdio.h>
int UCLN(int a,int b){
	if(a<0|| b<0){
		return 1;
	}
	if(a == 0 && b > 0){
		return b;
	}else if(b==0 && a>0){
		return a;
	}else if ( a==0 && b==0){
		return NULL;
	}
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}
int BCNN(int a,int b){
	if(a==0 && b==0){
	return NULL;
	}
	if(a < 0){
		a=-a;
	}
	if(b<0) b =-b;
	for(int i=a;true;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}
int main(){
	int a,b;
	printf("Nhap vao a:");
	scanf("%d",&a);
	printf("Nhap vao b:");
	scanf("%d",&b);

}


