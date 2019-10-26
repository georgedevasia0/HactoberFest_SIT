#include<stdio.h>
#include<string.h>

int main(){
	int size=0,i=0,flag=1;
	char str[50];
	do{
	printf("\nEnter a string: ");
	gets(str);
	size=strlen(str)-1;
	for(i=0;i<=size;i++){
		if(str[i]!=str[size-i]){
			flag=0;
			break;
		}
		else
			flag=1;
		printf("\n%c\t%c",str[i],str[i]);
	}
	if(flag==1)
		printf("\nPalindrome");
	else
		printf("\nNot Palindrome");
	}while(str!="end");
}	
