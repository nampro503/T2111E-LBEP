#include <stdio.h>
int main(){
	int n;
	
	printf("So luong phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
    int minX= a[0];
    
    for (int i=0;i<n;i++){
    	if(a[i]>minX){
    		minX = a[i];
		}
	}
	if(minX <= 0 ){
		printf("mang toan so am:\n");
	}else {
		for( int i=0; i<n;i++){
			if (a[i]>0&& a[i]<minX){
				minX = a[i];
			}
		}
		printf("So duong nho nhat : %d\n",minX);
	}
}

