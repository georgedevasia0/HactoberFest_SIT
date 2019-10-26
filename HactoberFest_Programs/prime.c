#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,count=0,start,end;
	printf("\nEnter starting number: ");
	scanf("%d",&start);
	printf("\nEnter ending number: ");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		if(i<2)
			continue;
		for(j=2;j<=(i/2);j++)
			if(i%j==0)
				break;	
		if(j>(i/2))
			count++;
	}
	printf("\nTotal number of primes is :%d\n",count);
	return 0;
}
