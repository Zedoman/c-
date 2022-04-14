////sorting
//#include<stdio.h>
//
////for bubble sort
//void bubbleSort(int array[], int size) {
//
//  
//  for (int step = 0; step < size - 1; ++step) {
//      
//    
//    for (int i = 0; i < size - step - 1; ++i) {
//      
//      
//      if (array[i] > array[i + 1]) {
//        
//        
//        int temp = array[i];
//        array[i] = array[i + 1];
//        array[i + 1] = temp;
//      }
//    }
//  }
//}
//
////for quick sort
//void swap(int *a, int *b) {
//  int t = *a;
//  *a = *b;
//  *b = t;
//}
//
//int partition(int array[], int low, int high) {
//  
//
//  int pivot = array[high];
//  int i = (low - 1);
//
//  
//  for (int j = low; j < high; j++) {
//    if (array[j] <= pivot) {
//        
//      
//      i++;
//      
//      
//      swap(&array[i], &array[j]);
//    }
//  }
//
// 
//  swap(&array[i + 1], &array[high]);
//  
//  
//  return (i + 1);
//}
//
//void quickSort(int array[], int low, int high) {
//  if (low < high) {
//    
//    
//    int pi = partition(array, low, high);
//    
//    
//    quickSort(array, low, pi - 1);
//    
//    
//    quickSort(array, pi + 1, high);
//  }
//}
//
////for merge sort
//// Merge two subarrays L and M into arr
//void merge(int arr[], int p, int q, int r) {
//	
//  int n1 = q - p + 1;
//  int n2 = r - q;
//
//  int L[n1], M[n2];
//
//  for (int i = 0; i < n1; i++)
//    L[i] = arr[p + i];
//  for (int j = 0; j < n2; j++)
//    M[j] = arr[q + 1 + j];
//
//  int i, j, k;
//  i = 0;
//  j = 0;
//  k = p;
//
//  while (i < n1 && j < n2) {
//    if (L[i] <= M[j]) {
//      arr[k] = L[i];
//      i++;
//    } else {
//      arr[k] = M[j];
//      j++;
//    }
//    k++;
//  }
//
//  while (i < n1) {
//    arr[k] = L[i];
//    i++;
//    k++;
//  }
//
//  while (j < n2) {
//    arr[k] = M[j];
//    j++;
//    k++;
//  }
//}
//// Divide the array into two subarrays, sort them and merge them
//void mergeSort(int arr[], int l, int r) {
//  if (l < r) {
//
//    int m = l + (r - l) / 2;
//
//    mergeSort(arr, l, m);
//    mergeSort(arr, m + 1, r);
//
//    merge(arr, l, m, r);
//  }
//}
//
//// print array
//void printArray(int array[], int size) {
//  for (int i = 0; i < size; ++i) {
//    printf("%d  ", array[i]);
//  }
//  printf("\n");
//}
//
//
//int main() {
//  int data[] = {8, 7, 2, 1, 0, 9, 6};
//  
//  // find the array's length
//  int size = sizeof(data) / sizeof(data[0]);
//
//  printf("In bubble sort\n");
//  bubbleSort(data, size);
//  printf("Sorted Array in Ascending Order:\n");
//  printArray(data, size);
//  
//  printf("In quick sort:\n");
//  quickSort(data, 0, size - 1);
//  printf("Sorted array in ascending order: \n");
//  printArray(data, size);
//  
//  printf("In merge sort:\n");
//  mergeSort(data, 0, size - 1);
//  printf("Sorted array in ascnding orde: \n");
//  printArray(data, size);
//}


////searching
//#include <stdio.h>
//
////for binary search
//int binarySearch(int array[], int x, int low, int high) {
//  // Repeat until the pointers low and high meet each other
//  while (low <= high) {
//    int mid = low + (high - low) / 2;
//
//    if (array[mid] == x)
//      return mid;
//
//    if (array[mid] < x)
//      low = mid + 1;
//
//    else
//      high = mid - 1;
//  }
//
//  return -1;
//}
//
////for linear search
//int linearSearch(int array[], int n, int x) {
//  
//  // Going through array sequencially
//  for (int i = 0; i < n; i++){
//  	if (array[i] == x)
//  	{
//	  return i;	
//	  }
//  }
//  return -1;
//}
//
//int main(void) {
//  int array[] = {3, 4, 5, 6, 7, 8, 9};
//  int n = sizeof(array) / sizeof(array[0]);
//  int x = 4;
//  printf("For Binary search:\n");
//  int result1 = binarySearch(array, x, 0, n - 1);
//  if (result1 == -1)
//    printf("Not found\n");
//  else
//    printf("Element is found at index %d\n", result1);
//  
//  int y = 9;
//  printf("For Linear search:\n");
//  int result2 = linearSearch(array, n, y);
//  if (result2 == -1)
//    printf("Not found\n");
//  else
//    printf("Element is found at index %d\n", result2);
//  return 0;
//}

////singly linked list implement
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node{
//    int data;
//    struct Node * next;
//};
//
//void linkedListTraversal(struct Node *ptr)
//{
//    while (ptr != NULL)
//    {
//        printf("Element: %d\n", ptr->data);
//        ptr = ptr->next;
//    }
//}
////insertion
//// Case 1
//struct Node * insertAtFirst(struct Node *head, int data){
//    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//    ptr->data = data;
//
//    ptr->next = head;
//    return ptr; 
//}
//
//// Case 2
//struct Node * insertAtIndex(struct Node *head, int data, int index){
//    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//    struct Node * p = head;
//    int i = 0;
//
//    while (i!=index-1)
//    {
//        p = p->next;
//        i++;
//    }
//    ptr->data = data;
//    ptr->next = p->next;
//    p->next = ptr;
//    return head;
//}
//
//// Case 3
//struct Node * insertAtEnd(struct Node *head, int data){
//    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//    ptr->data = data;
//    struct Node * p = head;
//
//    while(p->next!=NULL){
//        p = p->next;
//    }
//    p->next = ptr;
//    ptr->next = NULL;
//    return head;
//}
//
//// Case 4
//struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
//    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//    ptr->data = data;
//
//    ptr->next = prevNode->next;
//    prevNode->next = ptr;
//
//    
//    return head;
//}
//
////deletion
////case 1
//struct Node * deletefirst(struct Node * head)
//{
//	struct Node * ptr=head;
//	head=head->next;
//	free(ptr);
//	return head;
//}
////case 2
//struct Node * deleteindex(struct Node * head, int index)
//{
//	struct Node * p=head;
//	struct Node * q=head->next;
//	for(int i=0;i<index-1;i++)
//	{
//		p=p->next;
//		q=q->next;
//	}
//	p->next=q->next;
//	free(q);
//	return head;
//}
////case 3
//struct Node * deletelast(struct Node * head)
//{
//	struct Node * p=head;
//	struct Node * q=head->next;
//	while(q->next!=NULL)
//	{
//		p=p->next;
//		q=q->next;
//	}
//	p->next=NULL;
//	free(q);
//	return head;
//}
//
//int main(){
//    struct Node *head;
//    struct Node *second;
//    struct Node *third;
//    struct Node *fourth;
//
//    // Allocate memory for nodes in the linked list in Heap
//    head = (struct Node *)malloc(sizeof(struct Node));
//    second = (struct Node *)malloc(sizeof(struct Node));
//    third = (struct Node *)malloc(sizeof(struct Node));
//    fourth = (struct Node *)malloc(sizeof(struct Node));
//
//    // Link first and second nodes
//    head->data = 7;
//    head->next = second;
//
//    // Link second and third nodes
//    second->data = 11;
//    second->next = third;
//
//    // Link third and fourth nodes
//    third->data = 41;
//    third->next = fourth;
//
//    // Terminate the list at the third node
//    fourth->data = 66;
//    fourth->next = NULL;
//
//    printf("Linked list before insertion\n");
//    linkedListTraversal(head);
//    head = insertAtFirst(head, 56);
//    // head = insertAtIndex(head, 56, 1);
//    // head = insertAtEnd(head, 56);
//    //head = insertAfterNode(head, third, 45);
//    printf("\nLinked list after insertion\n");
//    linkedListTraversal(head);
//    
//    //head=deletefirst(head);
//    //head=deleteindex(head,2);
//    head=deletelast(head);
//    printf("\nLinked list after deletion\n");
//    linkedListTraversal(head);
//
//    
//    return 0;
//}

////implement stack in arr and ll
//#include<stdio.h>
//#include<conio.h>
//
//int ch,st[10],top,ele;
//void menu();
//void push();
//void pop();
//void showelements();
//
//int main()
//{
//	ch=ele=1;
//	top=0;
//	menu();
//}
//void menu()
//{
//	printf("Enter your choice:");
//	printf("Push 1\n Pop 2\n Show elements 3\n exit 4\n");
//	scanf("%d",&ch);
//	if(ch==1)
//	{
//		push();menu();
//	}
//	if(ch==2)
//	{
//		pop();menu();
//	}
//	if(ch==3)
//	{
//		showelements();menu();
//	}
//}
//
//void push()
//{
//	if(top<=9)
//	{
//		printf("Enter the element to be pused:\n");
//		scanf("%d",&ele);
//		st[top]=ele;
//		++top;
//	}
//	else{
//		printf("Stack is full");
//	}
//	return;
//}
//void pop()
//{
//	if(top>0)
//	{
//		--top;
//		ele=st[top];
//		printf("popped element:%d\n",ele);
//	}
//	else{
//		printf("stack is empty");
//	}
//	return;
//}
//void showelements()
//{
//	if(top<=0)
//	{
//		printf("Stack is empty");
//	}
//	else{
//		for(int i=0;i<top;++i)
//		{
//			printf("%d\n",st[i]);
//		}
//	}
//}
#include<stdio.h>
//#include<stdlib.h>
//struct Node{
//	int data;
//	struct Node *next;
//};
//Node* top=NULL;
//
//void push(int val){
//	struct Node *newnode;
//	newnode=(struct Node *)malloc(sizeof(struct Node));
//	newnode->data = val; //assign value to the node
//	if(top == NULL)
//	{
//		newnode->next=NULL;
//	}
//	else
//	{
//		newnode->next=top;//make the new node as top
//	}
//	top=newnode;//top points to the newly created node
//	printf("Node inserted\n");
//}
//
//int pop(){
//	if(top==NULL)
//	{
//		printf("\n Stack underflow");
//	}
//	else{
//		struct Node *temp=top;
//		int temp_data=top->data;
//		top=top->next;
//		free(temp);
//		return temp_data;
//	}
//}
//
//void display()
//{
//	if(top==NULL)
//	{
//		printf("Stack underflow");
//	}
//	else
//	{
//		printf("The stack is:\n");
//		struct Node *temp=top;
//		while(temp->next!=NULL){
//			printf("%d ",temp->data);
//			temp=temp->next;
//		}
//		printf("%d  \n",temp->data);
//	}
//}
//
//int main()
//{
//    int ch,val;
//    while(1){
//	printf("Enter your choice:");
// 	printf("Push 1\n Pop 2\n Show elements 3\n exit 4\n");
//	scanf("%d",&ch);
//	switch(ch){
//		case 1:
//		     printf("\n Element to insert:");
//		     scanf("%d",&val);
//		     push(val);
//		     break;
//		case 2:
//		     printf("\n popped element is:%d\n",pop());    
//		     break;
//		case 3:
//		     display();
//		     break;
//		case 4:
//		     exit(0);
//		     break;
//		default:
//		     printf("\nwrong choice");    
//	}
//	}
//}

////queue implement in ll and arr
//#include<stdio.h>
//#include<stdlib.h>
// 
//struct queue
//{
//    int size;
//    int f;
//    int r;
//    int* arr;
//};
// 
// 
//int isEmpty(struct queue *q){
//    if(q->r==q->f){
//        return 1;
//    }
//    return 0;
//}
// 
//int isFull(struct queue *q){
//    if(q->r==q->size-1){
//        return 1;
//    }
//    return 0;
//}
// 
//int enqueue(struct queue *q, int val){
//    if(isFull(q)){
//        printf("This Queue is full\n");
//    }
//    else{
//        q->r++;
//        q->arr[q->r] = val;
//        printf("Enqued element: %d\n", val);
//    }
//}
// 
//int dequeue(struct queue *q){
//    int a = -1;
//    if(isEmpty(q)){
//        printf("This Queue is empty\n");
//    }
//    else{
//        q->f++;
//        a = q->arr[q->f]; 
//    }
//    return a;
//}
// 
//int main(){
//    struct queue q;
//    q.size = 5;
//    q.f = q.r = 0;
//    q.arr = (int*) malloc(q.size*sizeof(int));
//    
//     Enqueue few elements
//    enqueue(&q, 12);
//    enqueue(&q, 15);
//    enqueue(&q, 1); 
//    printf("Dequeuing element %d\n", dequeue(&q));
//    printf("Dequeuing element %d\n", dequeue(&q));
//    printf("Dequeuing element %d\n", dequeue(&q)); 
//    //from the below 3 only one ele can be choosen to enqueue as when we r deququeing 
//	//[the size is 5 given] the f goes forward and comes to r and so only one space  
//	//left for enqueue and empty spaces cant be used in queue using array this is the draback of queue.
//    enqueue(&q, 45);
//    enqueue(&q, 88);
//    enqueue(&q, 99);
// 
//    if(isEmpty(&q)){
//        printf("Queue is empty\n");
//    }
//    if(isFull(&q)){
//        printf("Queue is full\n");
//    }
// 
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//struct Node *f = NULL;
//struct Node *r = NULL;
//struct Node
//{
// int data;
// struct Node *next;
//};
//void linkedListTraversal(struct Node *ptr)
//{
// printf("Printing the elements of this linked list\n");
// while (ptr != NULL)
// {
// printf("Element: %d\n", ptr->data);
// ptr = ptr->next;
// }
//}
//void enqueue(int val)
//{
// struct Node *n = (struct Node *) malloc(sizeof(struct Node));
// if(n==NULL){
// printf("Queue is Full");
// }
// else{
// n->data = val;
// n->next = NULL;
// if(f==NULL){
// f=r=n;
// }
// else{
// r->next = n;
// r=n;
// }
// }
//}
//int dequeue()
//{
// int val = -1;
// struct Node *ptr = f;
// if(f==NULL){
// printf("Queue is Empty\n");
// }
// else{
// f = f->next;
// val = ptr->data;
// free(ptr);
// }
// return val;
//}
//int main()
//{
// linkedListTraversal(f);
// printf("Dequeuing element %d\n", dequeue());
// enqueue(34);
// enqueue(4);
// enqueue(7);
// enqueue(17);
// printf("Dequeuing element %d\n", dequeue());
// printf("Dequeuing element %d\n", dequeue());
// printf("Dequeuing element %d\n", dequeue());
// linkedListTraversal(f);
// return 0;
//}
//

///* Program to maintain a doubly linked list */
//
//#include <stdio.h>
//#include <conio.h>
//#include <malloc.h>
//
//
///* structure representing a node of the doubly linked list */
//struct dnode
//{
//	struct dnode *prev ;
//	int data ;
//	struct dnode * next ;
//} ;
//
//void d_append ( struct dnode **, int ) ;
//void d_addatbeg ( struct dnode **, int ) ;
//void d_addafter ( struct dnode *, int , int ) ;
//void d_display ( struct dnode * ) ;
//int d_count ( struct dnode *  ) ;
//void d_delete ( struct dnode **, int ) ;
//
//int main( )
//{
//	struct dnode *p ;
//
//	p = NULL ;  /* empty doubly linked list */
//
//	d_append ( &p , 11 ) ;
//	d_append ( &p , 2 ) ;
//	d_append ( &p , 14 ) ;
//	d_append ( &p , 17 ) ;
//	d_append ( &p , 99 ) ;
//
//	system ( "cls" ) ;
//
//	d_display ( p ) ;
//	printf ( "No. of elements in the DLL = %d\n\n", d_count ( p ) ) ;
//
//	d_addatbeg ( &p, 33 ) ;
//	d_addatbeg ( &p, 55 ) ;
//
//	d_display ( p ) ;
//	printf ( "No. of elements in the DLL = %d\n\n", d_count ( p ) ) ;
//
//	d_addafter ( p, 4, 66 ) ;
//	d_addafter ( p, 2, 96 ) ;
//
//	d_display ( p ) ;
//	printf ( "No. of elements in the DLL = %d\n\n", d_count ( p ) ) ;
//
//	d_delete ( &p, 55 ) ;
//	d_delete ( &p, 2 ) ;
//	d_delete ( &p, 99 ) ;
//
//	d_display ( p ) ;
//	printf ( "No. of elements in the DLL = %d\n\n", d_count ( p ) ) ;
//	return 0 ;
//}
//
///* adds a new node at the end of the doubly linked list */
//void d_append ( struct dnode **s, int num )
//{
//	struct dnode *r, *q = *s ;
//
//	/* if the linked list is empty */
//	if ( *s == NULL )
//	{
//		/*create a new node */
//		*s = ( struct dnode * ) malloc ( sizeof ( struct dnode ) ) ;
//		( *s ) -> prev = NULL ;
//		( *s ) -> data = num ;
//		( *s ) -> next = NULL ;
//	}
//	else
//	{
//		/* traverse the linked list till the last node is reached */
//		while ( q -> next != NULL )
//			q = q -> next ;
//
//		/* add a new node at the end */
//		r = ( struct dnode * ) malloc ( sizeof ( struct dnode ) ) ;
//		r -> data = num ;
//		r -> next = NULL ;
//		r -> prev = q ;
//		q -> next = r ;
//	}
//}
//
///* adds a new node at the begining of the linked list */
//void d_addatbeg ( struct dnode **s, int num )
//{
//	struct dnode *q ;
//
//	/* create a new node */
//	q = ( struct dnode * ) malloc ( sizeof ( struct dnode ) ) ;
//
//	/* assign data and pointer to the new node */
//	q -> prev = NULL ;
//	q -> data = num ;
//	q -> next = *s ;
//
//	/* make new node the head node */
//	( *s ) -> prev = q ;
//	*s = q ;
//}
//
///* adds a new node after the specified number of nodes */
//void d_addafter ( struct dnode *q, int loc, int num )
//{
//	struct dnode *temp ;
//	int i ;
//
//	/* skip to desired portion */
//	for ( i = 0 ; i < loc ; i++ )
//	{
//		q = q -> next ;
//		/* if end of linked list is encountered */
//		if ( q == NULL )
//		{
//			printf ( "There are less than %d elements\n", loc );
//			return ;
//		}
//	}
//
//	/* insert new node */
//	q = q -> prev ;
//	temp = ( struct dnode * ) malloc ( sizeof ( struct dnode ) ) ;
//	temp -> data = num ;
//	temp -> prev = q ;
//	temp -> next = q -> next ;
//	temp -> next -> prev = temp ;
//	q -> next = temp ;
//}
//
///* displays the contents of the linked list */
//void d_display ( struct dnode *q )
//{
//	/* traverse the entire linked list */
//	while ( q != NULL )
//	{
//		printf ( "%2d\t", q -> data ) ;
//		q = q -> next ;
//	}
//	printf ( "\n" ) ;
//}
//
///* counts the number of nodes present in the linked list */
//int d_count ( struct dnode * q )
//{
//	int c = 0 ;
//
//	/* traverse the entire linked list */
//	while ( q != NULL )
//	{
//		q = q -> next ;
//		c++ ;
//	}
//
//	return c ;
//}
//
///* deletes the specified node from the doubly linked list */
//void d_delete ( struct dnode **s, int num )
//{
//	struct dnode *q = *s ;
//
//	/* traverse the entire linked list */
//	while ( q != NULL )
//	{
//		/* if node to be deleted is found */
//		if ( q -> data == num )
//		{
//			/* if node to be deleted is the first node */
//			if ( q == *s )
//			{
//				*s = ( *s ) -> next ;
//				( *s ) -> prev = NULL ;
//			}
//			else
//			{
//				/* if node to be deleted is the last node */
//				if ( q -> next == NULL )
//					q -> prev -> next = NULL ;
//				else
//				/* if node to be deleted is any intermediate node */
//				{
//					q -> prev -> next = q -> next ;
//					q -> next -> prev = q -> prev ;
//				}
//				free ( q ) ;
//			}
//			return ;  /* return back after deletion */
//		}
//		q = q -> next ; /* go to next node */
//	}
//	printf ( "%d not found.\n", num ) ;
//}
//

//// binary Tree traversal in C
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//  int item;
//  struct node* left;
//  struct node* right;
//};
//
//// Inorder traversal
//void inorderTraversal(struct node* root) {
//  if (root == NULL) return;
//  inorderTraversal(root->left);
//  printf("%d ->", root->item);
//  inorderTraversal(root->right);
//}
//
//// preorderTraversal traversal
//void preorderTraversal(struct node* root) {
//  if (root == NULL) return;
//  printf("%d ->", root->item);
//  preorderTraversal(root->left);
//  preorderTraversal(root->right);
//}
//
//// postorderTraversal traversal
//void postorderTraversal(struct node* root) {
//  if (root == NULL) return;
//  postorderTraversal(root->left);
//  postorderTraversal(root->right);
//  printf("%d ->", root->item);
//}
//
//// Create a new Node
//struct node* createNode(int value) {
//  struct node* newNode = (struct node*)malloc(sizeof(struct node));
//  newNode->item = value;
//  newNode->left = NULL;
//  newNode->right = NULL;
//
//  return newNode;
//}
//
//// Insert on the left of the node
//struct node* insertLeft(struct node* root, int value) {
//  root->left = createNode(value);
//  return root->left;
//}
//
//// Insert on the right of the node
//struct node* insertRight(struct node* root, int value) {
//  root->right = createNode(value);
//  return root->right;
//}
//
//int main() {
//  struct node* root = createNode(1);
//  insertLeft(root, 12);
//  insertRight(root, 9);
//
//  insertLeft(root->left, 5);
//  insertRight(root->left, 6);
//
//  printf("Inorder traversal \n");
//  inorderTraversal(root);
//
//  printf("\nPreorder traversal \n");
//  preorderTraversal(root);
//
//  printf("\nPostorder traversal \n");
//  postorderTraversal(root);
//  return 0;
//}

//// Binary Search Tree operations in C
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//  int key;
//  struct node *left, *right;
//};
//
//// Create a node
//struct node *newNode(int item) {
//  struct node *temp = (struct node *)malloc(sizeof(struct node));
//  temp->key = item;
//  temp->left = temp->right = NULL;
//  return temp;
//}
//
//// Inorder Traversal
//void inorder(struct node *root) {
//  if (root != NULL) {
//    // Traverse left
//    inorder(root->left);
//
//    // Traverse root
//    printf("%d -> ", root->key);
//
//    // Traverse right
//    inorder(root->right);
//  }
//}
//
//// Insert a node
//struct node *insert(struct node *node, int key) {
//  // Return a new node if the tree is empty
//  if (node == NULL) return newNode(key);
//
//  // Traverse to the right place and insert the node
//  if (key < node->key)
//    node->left = insert(node->left, key);
//  else
//    node->right = insert(node->right, key);
//
//  return node;
//}
//
//// Find the inorder successor
//struct node *minValueNode(struct node *node) {
//  struct node *current = node;
//
//  // Find the leftmost leaf
//  while (current && current->left != NULL)
//    current = current->left;
//
//  return current;
//}
//
//// Deleting a node
//struct node *deleteNode(struct node *root, int key) {
//  // Return if the tree is empty
//  if (root == NULL) return root;
//
//  // Find the node to be deleted
//  if (key < root->key)
//    root->left = deleteNode(root->left, key);
//  else if (key > root->key)
//    root->right = deleteNode(root->right, key);
//
//  else {
//    // If the node is with only one child or no child
//    if (root->left == NULL) {
//      struct node *temp = root->right;
//      free(root);
//      return temp;
//    } else if (root->right == NULL) {
//      struct node *temp = root->left;
//      free(root);
//      return temp;
//    }
//
//    // If the node has two children
//    struct node *temp = minValueNode(root->right);
//
//    // Place the inorder successor in position of the node to be deleted
//    root->key = temp->key;
//
//    // Delete the inorder successor
//    root->right = deleteNode(root->right, temp->key);
//  }
//  return root;
//}
//
//int main() {
//  struct node *root = NULL;
//  root = insert(root, 8);
//  root = insert(root, 3);
//  root = insert(root, 1);
//  root = insert(root, 6);
//  root = insert(root, 7);
//  root = insert(root, 10);
//  root = insert(root, 14);
//  root = insert(root, 4);
//
//  printf("Inorder traversal: ");
//  inorder(root);
//
//  printf("\nAfter deleting 10\n");
//  root = deleteNode(root, 10);
//  printf("Inorder traversal: ");
//  inorder(root);
//}

////BFS implement
//#include<stdio.h>
//#include<stdlib.h>
// 
//struct queue
//{
//    int size;
//    int f;
//    int r;
//    int* arr;
//};
// 
// 
//int isEmpty(struct queue *q){
//    if(q->r==q->f){
//        return 1;
//    }
//    return 0;
//}
// 
//int isFull(struct queue *q){
//    if(q->r==q->size-1){
//        return 1;
//    }
//    return 0;
//}
// 
//void enqueue(struct queue *q, int val){
//    if(isFull(q)){
//        printf("This Queue is full\n");
//    }
//    else{
//        q->r++;
//        q->arr[q->r] = val;
//        // printf("Enqued element: %d\n", val);
//    }
//}
// 
//int dequeue(struct queue *q){
//    int a = -1;
//    if(isEmpty(q)){
//        printf("This Queue is empty\n");
//    }
//    else{
//        q->f++;
//        a = q->arr[q->f]; 
//    }
//    return a;
//}
// 
//int main(){
//    // Initializing Queue (Array Implementation)
//    struct queue q;
//    q.size = 400;
//    q.f = q.r = 0;
//    q.arr = (int*) malloc(q.size*sizeof(int));
//    
//    // BFS Implementation 
//    int node;
//    int i = 1;
//    int visited[7] = {0,0,0,0,0,0,0};
//    int a [7][7] = { //adjacency mat
//        {0,1,1,1,0,0,0},
//        {1,0,1,0,0,0,0},
//        {1,1,0,1,1,0,0},
//        {1,0,1,0,1,0,0},
//        {0,0,1,1,0,1,1},
//        {0,0,0,0,1,0,0}, 
//        {0,0,0,0,1,0,0} 
//    };
//    printf("%d", i);
//    visited[i] = 1; //to check which node has been visited
//    enqueue(&q, i); // Enqueue i for exploration
//    while (!isEmpty(&q))
//    {
//        int node = dequeue(&q);
//        for (int j = 0; j < 7; j++)
//        {
//            if(a[node][j] ==1 && visited[j] == 0){
//                printf("%d", j);
//                visited[j] = 1;
//                enqueue(&q, j);
//            }
//        }
//    }
//    return 0;
//}
//

////dfs implement
//#include<stdio.h>
//#include<stdlib.h>
// 
//int visited[7] = {0,0,0,0,0,0,0};
//    int A [7][7] = {
//        {0,1,1,1,0,0,0},
//        {1,0,1,0,0,0,0},
//        {1,1,0,1,1,0,0},
//        {1,0,1,0,1,0,0},
//        {0,0,1,1,0,1,1},
//        {0,0,0,0,1,0,0}, 
//        {0,0,0,0,1,0,0} 
//    };
// 
//void DFS(int i){
//    printf("%d ", i);
//    visited[i] = 1;
//    for (int j = 0; j < 7; j++)
//    {
//        if(A[i][j]==1 && !visited[j]){
//            DFS(j);
//        }
//    }
//}
// 
//int main(){ 
//    // DFS Implementation  
//    DFS(0); //the no if we give like 1 or 2 or something with that number it will start
//    return 0;
//}
//

//// Dijkstra's Algorithm in C
//
//#include <stdio.h>
//#define INFINITY 9999
//#define MAX 10
//
//void Dijkstra(int Graph[MAX][MAX], int n, int start);
//
//void Dijkstra(int Graph[MAX][MAX], int n, int start) {
//  int cost[MAX][MAX], distance[MAX], pred[MAX];
//  int visited[MAX], count, mindistance, nextnode, i, j;
//
//  // Creating cost matrix
//  for (i = 0; i < n; i++)
//    for (j = 0; j < n; j++)
//      if (Graph[i][j] == 0)
//        cost[i][j] = INFINITY;
//      else
//        cost[i][j] = Graph[i][j];
//
//  for (i = 0; i < n; i++) {
//    distance[i] = cost[start][i];
//    pred[i] = start;
//    visited[i] = 0;
//  }
//
//  distance[start] = 0;
//  visited[start] = 1;
//  count = 1;
//
//  while (count < n - 1) {
//    mindistance = INFINITY;
//
//    for (i = 0; i < n; i++)
//      if (distance[i] < mindistance && !visited[i]) {
//        mindistance = distance[i];
//        nextnode = i;
//      }
//
//    visited[nextnode] = 1;
//    for (i = 0; i < n; i++)
//      if (!visited[i])
//        if (mindistance + cost[nextnode][i] < distance[i]) {
//          distance[i] = mindistance + cost[nextnode][i];
//          pred[i] = nextnode;
//        }
//    count++;
//  }
//
//  // Printing the distance
//  for (i = 0; i < n; i++)
//    if (i != start) {
//      printf("\nDistance from source to %d: %d", i, distance[i]);
//    }
//}
//int main() {
//  int Graph[MAX][MAX], i, j, n, u;
//  n = 7;
//
//  Graph[0][0] = 0;
//  Graph[0][1] = 0;
//  Graph[0][2] = 1;
//  Graph[0][3] = 2;
//  Graph[0][4] = 0;
//  Graph[0][5] = 0;
//  Graph[0][6] = 0;
//
//  Graph[1][0] = 0;
//  Graph[1][1] = 0;
//  Graph[1][2] = 2;
//  Graph[1][3] = 0;
//  Graph[1][4] = 0;
//  Graph[1][5] = 3;
//  Graph[1][6] = 0;
//
//  Graph[2][0] = 1;
//  Graph[2][1] = 2;
//  Graph[2][2] = 0;
//  Graph[2][3] = 1;
//  Graph[2][4] = 3;
//  Graph[2][5] = 0;
//  Graph[2][6] = 0;
//
//  Graph[3][0] = 2;
//  Graph[3][1] = 0;
//  Graph[3][2] = 1;
//  Graph[3][3] = 0;
//  Graph[3][4] = 0;
//  Graph[3][5] = 0;
//  Graph[3][6] = 1;
//
//  Graph[4][0] = 0;
//  Graph[4][1] = 0;
//  Graph[4][2] = 3;
//  Graph[4][3] = 0;
//  Graph[4][4] = 0;
//  Graph[4][5] = 2;
//  Graph[4][6] = 0;
//
//  Graph[5][0] = 0;
//  Graph[5][1] = 3;
//  Graph[5][2] = 0;
//  Graph[5][3] = 0;
//  Graph[5][4] = 2;
//  Graph[5][5] = 0;
//  Graph[5][6] = 1;
//
//  Graph[6][0] = 0;
//  Graph[6][1] = 0;
//  Graph[6][2] = 0;
//  Graph[6][3] = 1;
//  Graph[6][4] = 0;
//  Graph[6][5] = 1;
//  Graph[6][6] = 0;
//
//  u = 0;
//  Dijkstra(Graph, n, u);
//
//  return 0;
//}

////Prims algo
//#include<stdio.h>
//#include<conio.h>
//
//#define INFINITY 9999
//
//int a,b,u,v,n,i,j,ne=1;
// 
//int visited[10]={0},min,mincost=0,cost[10][10];
// 
//int main()
// 
//{
// 
// 
//	printf("\nEnter the number of nodes:");
// 
//	scanf("%d",&n);
// 
//	printf("\nEnter the adjacency matrix:\n");
// 
//	for(i=1;i<=n;i++)
// 
//	for(j=1;j<=n;j++)
// 
//	{
// 
//		scanf("%d",&cost[i][j]);
// 
//		if(cost[i][j]==0)
// 
//			cost[i][j]=INFINITY;
// 
//	}
// 
//	visited[1]=1;
// 
//	printf("\n");
// 
//	while(ne < n)
// 
//	{
// 
//		for(i=1,min=INFINITY;i<=n;i++)
// 
//		for(j=1;j<=n;j++)
// 
//		if(cost[i][j]< min)
// 
//		if(visited[i]!=0)
// 
//		{
// 
//			min=cost[i][j];
// 
//			a=u=i;
// 
//			b=v=j;
// 
//		}
// 
//		if(visited[u]==0 || visited[v]==0)
// 
//		{
// 
//			printf("\n Edge %d:(%d %d) cost:%d",ne++,a,b,min);
// 
//			mincost+=min;
// 
//			visited[b]=1;
// 
//		}
// 
//		cost[a][b]=cost[b][a]=INFINITY;
// 
//	}
// 
//	printf("\n Minimun cost=%d",mincost);
// 
//	return 0;
// 
//}
// 

////kruskal algo
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//int i,j,k,a,b,u,v,n,ne=1;
//int min,mincost=0,cost[9][9],parent[9];
//int find(int);
//int uni(int,int);
//int main()
//{
//	printf("\n\tImplementation of Kruskal's algorithm\n");
//	printf("\nEnter the no. of vertices:");
//	scanf("%d",&n);
//	printf("\nEnter the cost adjacency matrix:\n");
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			scanf("%d",&cost[i][j]);
//			if(cost[i][j]==0)
//				cost[i][j]=999;
//		}
//	}
//	printf("The edges of Minimum Cost Spanning Tree are\n");
//	while(ne < n)
//	{
//		for(i=1,min=999;i<=n;i++)
//		{
//			for(j=1;j <= n;j++)
//			{
//				if(cost[i][j] < min)
//				{
//					min=cost[i][j];
//					a=u=i;
//					b=v=j;
//				}
//			}
//		}
//		u=find(u);
//		v=find(v);
//		if(uni(u,v))
//		{
//			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
//			mincost +=min;
//		}
//		cost[a][b]=cost[b][a]=999;
//	}
//	printf("\n\tMinimum cost = %d\n",mincost);
//	return 0;
//}
//int find(int i)
//{
//	while(parent[i])
//	i=parent[i];
//	return i;
//}
//int uni(int i,int j)
//{
//	if(i!=j)
//	{
//		parent[j]=i;
//		return 1;
//	}
//	return 0;
//}

////hashing
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define SIZE 20
//
//struct DataItem {
//   int data;   
//   int key;
//};
//
//struct DataItem* hashArray[SIZE]; 
//struct DataItem* Item;
//struct DataItem* item;
//
//int hashCode(int key) {
//   return key % SIZE;
//}
//
//struct DataItem *search(int key) {
//   //get the hash 
//   int hashIndex = hashCode(key);  
//	
//   //move in array until an empty 
//   while(hashArray[hashIndex] != NULL) {
//	
//      if(hashArray[hashIndex]->key == key)
//         return hashArray[hashIndex]; 
//			
//      //go to next cell
//      ++hashIndex;
//		
//      //wrap around the table
//      hashIndex %= SIZE;
//   }        
//	
//   return NULL;        
//}
//
//void insert(int key,int data) {
//
//   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
//   item->data = data;  
//   item->key = key;
//
//   //get the hash 
//   int hashIndex = hashCode(key);
//
//   //move in array until an empty or deleted cell
//   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
//      //go to next cell
//      ++hashIndex;
//		
//      //wrap around the table
//      hashIndex %= SIZE;
//   }
//	
//   hashArray[hashIndex] = item;
//}
//
//struct DataItem* delete(struct DataItem* item) {
//   int key = item->key;
//
//   //get the hash 
//   int hashIndex = hashCode(key);
//
//   //move in array until an empty
//   while(hashArray[hashIndex] != NULL) {
//	
//      if(hashArray[hashIndex]->key == key) {
//         struct DataItem* temp = hashArray[hashIndex]; 
//			
//         //assign a dummy item at deleted position
//         hashArray[hashIndex] = dummyItem; 
//         return temp;
//      }
//		
//      //go to next cell
//      ++hashIndex;
//		
//      //wrap around the table
//      hashIndex %= SIZE;
//   }      
//	
//   return NULL;        
//}
//
//void display() {
//   int i = 0;
//	
//   for(i = 0; i<SIZE; i++) {
//	
//      if(hashArray[i] != NULL)
//         printf(" (%d,%d)",hashArray[i]->key,hashArray[i]->data);
//      else
//         printf(" ~~ ");
//   }
//	
//   printf("\n");
//}
//
//int main() {
//   Item = (struct DataItem*) malloc(sizeof(struct DataItem));
//   Item->data = -1;  
//   Item->key = -1; 
//
//   insert(1, 20);
//   insert(2, 70);
//   insert(42, 80);
//   insert(4, 25);
//   insert(12, 44);
//   insert(14, 32);
//   insert(17, 11);
//   insert(13, 78);
//   insert(37, 97);
//
//   display();
//   item = search(37);
//
//   if(item != NULL) {
//      printf("Element found: %d\n", item->data);
//   } else {
//      printf("Element not found\n");
//   }
//
//   delete(item);
//   item = search(37);
//
//   if(item != NULL) {
//      printf("Element found: %d\n", item->data);
//   } else {
//      printf("Element not found\n");
//   }
//}