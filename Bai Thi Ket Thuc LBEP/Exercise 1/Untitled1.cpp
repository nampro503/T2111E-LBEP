#include <stdio.h>
int main(){

 int n;
 printf("Nhap vao n =");
 scanf("%d",&n);
  if(n>0){
  	float s=0, i=1;
  	while (i<n){
  		s=s+1/i;
  		i++;
	  }
	  printf("Tong s:%f",s);
  }else{
  	printf("Error");
  }
}
