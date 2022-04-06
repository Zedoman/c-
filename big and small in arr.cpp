#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[50],n,i,small,big;
	printf("How many numbers:");
	scanf("%d",&n);
	printf("\n Enter all the nums in list:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	big=arr[0];
    for(i=0;i<n;i++)
    {
    	if(arr[i]<small)
    	{
    		     small=arr[i];
    	}
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]>big)
    	{
    		     big=arr[i];
    	}
    }
    printf("\n%d is the smallest num\n",small);
    printf("\n%d is the biggest num\n",big);
    return 0;
}