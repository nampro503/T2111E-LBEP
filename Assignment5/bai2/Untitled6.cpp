#include <stdio.h>

#include <math.h>

int main() {

          float a, b, c, p,g, s=0;

 

          printf("Nhap canh thu nhat: ");

          scanf("%f", &a);

 

          printf("Nhap canh thu hai: ");

          scanf("%f", &b);

 

          printf("Nhap canh thu ba: ");

          scanf("%f", &c);

 

          if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {

                   printf("\nDay la ba canh cua tam giac");

 

                   p = (a+b+c);
                   
                   g = (a+b+c)/2;
                   s = sqrt(g*(g-a)*(g-b)*(g-c));

 
                   printf("\nChu vi cua tam giac la :%f",p);
                   printf("\nDien tich cua tam giac la: %f", s);
                   

          } else

                   printf("\nDay khong phai la ba canh cua tam giac");

}
