#include <stdio.h>
#include <stdlib.h>


int main() {
	// int veri tipinde i tanımlansın floatta değer alacaksak işlemi sum+=(1/(float)i); şeklinde yapmamız gerekir.
	// 1+11+111+1111....+n=?
	
	int i,j,sum=0,num;
	
	printf("Please enter a number for sum: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			
		}
	}
	
	
	return 0;
}