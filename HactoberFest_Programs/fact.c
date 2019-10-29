#include<stdio.h>
int fact(int num){
	int res=1;
	for(int i=num;i>=1;i--){
        res=res*i;
	}
}
int main(){
	int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	int res=fact(num);
	printf("\nFactorial of %d is : %d\n",num,res);
	return 0;
}
