#include <stdio.h>
int main(){
	int x,n;
	
	printf("So luong phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
		
	}
	printf("Nhap x = ");
	scanf("%d",&x);
	int i;
	for( i=0 ; i<n ; i++)
	   if(a[i]==x)
	   break;
	
	if (i<n)
	printf("Tim thay x tai vi tri: %d",i);
	else
	  printf("Khong tim thay x trong mang.");
	
}
