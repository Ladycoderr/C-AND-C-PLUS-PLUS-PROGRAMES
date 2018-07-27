//takes something returns something//
#include<stdio.h>
int sum(int a,int b);//declared//

main()
{
	int res;//called//
	res= sum(4,5);
	printf("sum=%d",res);
	
}
int sum(int a,int b)// defined//
{
	int c;
	c=a+b;
	return c;
} 
