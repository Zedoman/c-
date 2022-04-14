//implement stack in arr and ll
#include<stdio.h>
#include<conio.h>

int ch,st[10],top,ele;
void menu();
void push();
void pop();
void showelements();

int main()
{
	ch=ele=1;
	top=0;
	menu();
}
void menu()
{
	printf("Enter your choice:");
	printf("Push 1\n Pop 2\n Show elements 3\n exit 4\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		push();menu();
	}
	if(ch==2)
	{
		pop();menu();
	}
	if(ch==3)
	{
		showelements();menu();
	}
}

void push()
{
	if(top<=9)
	{
		printf("Enter the element to be pused:\n");
		scanf("%d",&ele);
		st[top]=ele;
		++top;
	}
	else{
		printf("Stack is full");
	}
	return;
}
void pop()
{
	if(top>0)
	{
		--top;
		ele=st[top];
		printf("popped element:%d\n",ele);
	}
	else{
		printf("stack is empty");
	}
	return;
}
void showelements()
{
	if(top<=0)
	{
		printf("Stack is empty");
	}
	else{
		for(int i=0;i<top;++i)
		{
			printf("%d\n",st[i]);
		}
	}
}
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
Node* top=NULL;

void push(int val){
	struct Node *newnode;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	newnode->data = val; assign value to the node
	if(top == NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next=top;make the new node as top
	}
	top=newnode;top points to the newly created node
	printf("Node inserted\n");
}

int pop(){
	if(top==NULL)
	{
		printf("\n Stack underflow");
	}
	else{
		struct Node *temp=top;
		int temp_data=top->data;
		top=top->next;
		free(temp);
		return temp_data;
	}
}

void display()
{
	if(top==NULL)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("The stack is:\n");
		struct Node *temp=top;
		while(temp->next!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d  \n",temp->data);
	}
}

int main()
{
    int ch,val;
    while(1){
	printf("Enter your choice:");
 	printf("Push 1\n Pop 2\n Show elements 3\n exit 4\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		     printf("\n Element to insert:");
		     scanf("%d",&val);
		     push(val);
		     break;
		case 2:
		     printf("\n popped element is:%d\n",pop());    
		     break;
		case 3:
		     display();
		     break;
		case 4:
		     exit(0);
		     break;
		default:
		     printf("\nwrong choice");    
	}
	}
}