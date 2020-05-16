#include <stdio.h>

int main(void) {
	int num=1,set=0,f,j,n;
	printf("Which prime you need\n");
	scanf("%d",&n);
	do{
	    num++;
	    f=0;
	     for(j=1;j<=num;j++)
	        {
	          if(num%j==0)
	            f++;
	        }
	          if(f==2)
	            set++;
	}while(set!=n);
	printf("\nAs per your choice %dth prime is = %d",n,num);
	return 0;
}

