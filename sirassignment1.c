#include<stdio.h>
#include<conio.h>
int main()
{
     struct student
     {
            int rno;
            char sname[30];
            int Class;
            int mark1;
            int mark2;
            int mark3;
            int total;
            }stu_list[50];
             int i,n,flag,temp;
            char ch='y';
            printf("\n How many students?");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                            printf("\nRoll number?");
                            scanf("%d",&stu_list[i].rno);
                            printf("Name?");
                            scanf("%s",&stu_list[i].sname);
                            printf("Subject marks 1:");
                            scanf("%d",&stu_list[i].mark1);
                            printf("Subject marks 2:");
                            scanf("%d",&stu_list[i].mark2);
                            printf("Subject marks 3:");
                            scanf("%d",&stu_list[i].mark3);
                            printf("Total marks:");
                            scanf("%d",&stu_list[i].total);
            }
                            while(ch=='y' || ch=='Y')
                            {
                                          printf("Enter roll number to display marks:");
                                          scanf("%d",&temp);
                                          flag=0;
                                          for(i=0;i<n&&flag==0;i++)
                                              if(stu_list[i].rno==temp)
                                              {
                                                                       printf("\n Marks obtained by %d %s",stu_list[i].rno,stu_list[i].sname);
                                                                       printf("\n 1st subject marks: %d",stu_list[i].mark1);
                                                                       printf("\n 2nd subject marks: %d",stu_list[i].mark2);
                                                                       printf("\n 3rd subject marks: %d",stu_list[i].mark3);
                                                                       printf("\n total marks: %d",stu_list[i].total);
                                                                       flag=1;
                                              }
                                         if(flag==0)
                                            printf("\n %d is not present in the list",temp);
                                         printf("\n press y-to continue");
                                         printf("\n any other key to stop.");
                                         ch=getche();
                            }
}                                 
            
            
     
