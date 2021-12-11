#include <stdio.h>
int main(){ 
 int n,s;
 printf("Nhap vao mot so bat ki n:");
 scanf ("%d",&n);
 
 for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf(" \nCac uoc la: %d", i);
      s = s + i;
    }
  }
  printf("\ntong cac uoc so cua %d là: %ld",n,s);

}


