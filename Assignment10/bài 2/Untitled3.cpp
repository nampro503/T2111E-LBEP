#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("input size of array: ");
	scanf("%d",&n);
	char str[n][50];
	for(int i=0;i<n;i++){
		printf("input string:\t");
		scanf("%s",str[i]);
	}
	char flag[50];
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(flag,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],flag);
			}
		}
	}
	printf("String after sorting\n");
	for(int i=0;i<n;i++){
		printf("\t%s\n",str[i]);
	}
	
}
