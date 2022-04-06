#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],m,n,i,j,big;
    printf("\n How many rows and columns?");
    scanf("%d %d",&m,&n);
    printf(" Enter A matrix \n");
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",&a[i][j]);
                    }
    }
    big=a[0][0];
    for(i=1;i<m;i++)
    {
    	for(j=1;j<n;j++)
    	{
	    	if(a[i][j]>big)
	    	{
	    		big=a[i][j];
	    	}
	    }
    }
    printf("\n%d is the biggest num\n",big);
    return 0;
}