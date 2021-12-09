#include <stdio.h>
int main()
{
	int n,i;
	float S;
	printf("Nhap vao mot so n:");
	scanf ("%d",&n);
	
	i=1;
	S=0;
	
	while (i<=n)
	{
		S = 1+ 1.0/i ;
		i++;
	}
	printf (" S=%f\n",S);
	return 0;
	
}
