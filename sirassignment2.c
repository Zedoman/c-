#include<stdio.h>
#include<conio.h>
struct employee
{
            char empname;
            int empnum[20];
            int empexp;
            int empsal;
};
main()
{
       struct employee emp[50];
       int i,n;
       printf("\n Ho many employees?");
       scanf("%D",&n);
       for(i=0;i<n;i++)
       {
                       printf("\n Employee Name:");
                       scanf("%s",&emp[i].empname);
                       printf("\n Employee Number:");
                       scanf("%d",&emp[i].empnum);
                       printf("\n Employee Experience:");
                       scanf("%d",&emp[i].empexp);
                       printf("\n Employee Salary:");
                       scanf("%d",&emp[i].empsal);
       }
       printf("\n ---------------------------------");
       printf("\nEmpexp        Name        Empsal");
       printf("\n ---------------------------------");
       for(i=0;i<n;i++)
       {
                       if(emp[i].empexp>=5 && emp[i].empsal<=10000)
                       {
                                           printf("\n%-8d %-20s %5d",emp[i].empexp,emp[i].empnum,emp[i].empsal);
                       }
       }
       printf("\n-------------------------------------");
       getch();
}
       
     
