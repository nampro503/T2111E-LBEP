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
    
    int count = 0 , max = 0 ;
    for(int i=0; i < n ; i++){
    	if ( a[i]>0){
    		count++;
    		if ( count > max){
    			max = count ;
    			
			}
		}else{
			count = 0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat :%d\n",max);
}
