#include <stdio.h>

int main(){
	
	int n,nghichdao,sodu;
    printf("Nhap n:");
    scanf("%d",&n);
   
   
	while(n>0){
		sodu=n%10;
		nghichdao=nghichdao*10+sodu;
		n=n/10;
	
	}
	printf(" So da duoc ngich dao:%d\n",nghichdao);
	
}
