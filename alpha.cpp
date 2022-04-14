//21BCE10856 

#include<stdio.h>  
#include<conio.h>  
int main()  
{  
        char s[100],c;  
        int i,j;  
        printf("Enter the string :");  
        gets(s);  
        printf("'%s' in ascending order is: ",s);  
        //loop to arrange the strings in ascending order.
        for(i=0;i<s[i];i++)  
        {  
              for(j=i+1;j<s[j];j++)  
              {  
                    if(s[i]>s[j])  
                    {  
                          c=s[j];  
                          s[j]=s[i];  
                          s[i]=c;  
                    }  
              }  
        }  
        printf("%s\n",s);  
        getch();  
        return 0;  
}  