#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang so nguyen:\n");
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int m = x;
	for(int i=0;i<n;i++){ // tim 1 so nho hon x
		if(arr[i]<x){
			m = arr[i];
			break;
		}
	}
	if(m == x){
		printf("Khong co so nao nho hon %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>m && arr[i]<x){
				m=arr[i];
			}
		}
		printf("So tiem can: %d",m);
	}
}
