#include <stdio.h>
//sum of square of n natural numbers
int main(void) {
	int sum=0,n;
	printf("Enter the N th natural number\n");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6; // formula for Sum of the Squares of the First n natural numbers
	printf("\nSum of square of 1 to %d natural numbers = %d",n,sum);
	return 0;
}

