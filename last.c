#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter n");
	scanf("%d" ,&n);
	printf("enter");
	for(i=0;i<n;i++)
		scanf("%d" ,&a[i]);
	for(i=0;i<n/2;i++)
		printf("%d %d\n" ,a[i],a[n-1-i]);
	if(n%2==1)
		printf("%d" ,a[n/2]);
return 0;
}
