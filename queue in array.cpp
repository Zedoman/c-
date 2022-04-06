#include<stdio.h>
#include<stdlib.h>
 
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
 
int enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
 
int main(){
    struct queue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    //from the below 3 only one ele can be choosen to enqueue as when we r deququeing 
	//[the size is 5 given] the f goes forward and comes to r and so only one space  
	//left for enqueue and empty spaces cant be used in queue using array this is the draback of queue.
    enqueue(&q, 45);
    enqueue(&q, 88);
    enqueue(&q, 99);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}
