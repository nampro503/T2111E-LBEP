#include "stdio.h"
int a[100];
int n;
void nhapMang(int a[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap a[%d]:", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void xuatMangNguoc(int a[100], int n){
	printf("Gia tri cua mang dao nguoc la: ");
	for(int i=n-1; i>=0; i--){
		printf("%d ", a[i]);
	}
}
void daoNguocMang(int a[100], int n){
	for(int i=0; i<=n/2; i++){
		int temp = a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	daoNguocMang(a, n);
	xuatMang(a, n);
}
