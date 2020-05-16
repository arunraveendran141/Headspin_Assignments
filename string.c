#include <stdio.h>
#include <string.h>
int main(void) {
    
	int length,j,k,i;
	char string[50];
	
	printf("Enter the string\n");
	scanf("%s",string);
	length=strlen(string); //calculates the length of a string
	
	for(i=length;i>=0;i--)//outer loop to iterate through entire string
	   {
	    for(j=i;j>=0;j--)// loop backword to find "." positions
	       {
	        if(string[j]=='.')
	           break;
	       }
	    for(k=j+1;k<=i;k++)  //loop for print each words
	       printf("%c",string[k]);
	       
	    if(j>0)   //condition to add "." at the end of each words except 1st word
	      printf(".");
	    i=j;   
	   }
	return 0;
}

