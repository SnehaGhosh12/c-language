#include<stdio.h>

//STACK//
/*int stack[10],ch,top,n,i;
void push();
void pop();
void display();

void main(){
top=-1;
printf("Enter the number of elements in the stack:");
scanf("%d",&n);
do{
    printf("\nEnter-\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&ch);
    switch(ch){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    break;
default:
    printf("Invalid choice\n");

    }
}
while(ch!=4);
return 0;}

void push(){
if(top>=n-1){
    printf("STACK OVERFLOW\n");
}
else{
    printf("Enter a value to insert in the stack:\n");
    scanf("%d",&n);
    top++;
    stack[top]=n;
}
}
void pop(){
if(top<=-1){
    printf("STACK UNDERFLOW\n");
}
else{

 printf("The element popped is:%d\n",stack[top]);
 top--;
}
}
void display(){
    if(top>=0){
        printf("Elements in the stack are:\n");
        for(i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
    else{
        printf("Stack is empty");
    }
}*/
//STACK//

//BINARY SEARCH//

/*
int binarySearch(int arr[],int x,int high,int low){
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]<x)
        low=mid+1;
    else
        high=mid-1;
}
return -1;
}

int main(){
printf("Enter the size of the array:\n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    printf("Enter the element %d:",i+1);
    scanf("%d",&a[i]);
}
printf("Enter the element to be searched:");
scanf("%d",&x);
int result=binarySearch(a,x,n-1,0);
if (result=-1){
    printf("\nElement not found");
}
else{
    printf("Element is found at index %d",result);
}
}*/
//BINARY SEARCH//

//QUEUE//
/*
#define MAXSIZE 5
struct queue{
 int items[MAXSIZE];
 int rear;
 int front;
}q;
void enqueue(int ,struct queue *);
void dequeue(struct queue *);
void display(struct queue *);

void enqueue(int x,struct queue *q){
if (q->rear==MAXSIZE-1){
    printf("Queue is full\n");
    return;
}
else{
    if (q->front==-1){
        q->front=0; q->rear=0;
    }
    else{
        q->rear=q->rear+1;

     }
     q->items[q->rear]=x;
  }
}
void dequeue(struct queue *q){
    int x;
    if(q->front==-1){
        printf("Queue is empty");
    }
    x=q->items[q->front];
        if(q->front==q->rear){
            q->front=-1;q->rear=-1;
        }
        else{
         q->front=q->front+1;
        }
        return x;
}
void display(struct queue *q){
int i;
if(q->front!=-1){
    if(q->front<=q->rear){
        for(i=q->front;i<=q->rear;i++){
            printf("%d\t",q->items[i]);
        }
    }
}
}
void main()
 {
     int t,ch;
     q.front= -1;
     q.rear= -1;
     do{
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\nSelect Operation:");
        scanf("%d",&ch);
        switch(ch){
    case 1:
        printf("Enter data:");
        scanf("%d",&t);
        enqueue(t,&q);
        break;
    case 2:
        dequeue(&q);
        break;
    case 3:
        display(&q);
        break;
    case 4:
        break;
    default:
        printf("Invalid choice");
        }
     }while(ch!=4);

 }
*/
//QUEUE//

//LINEAR SEARCH//
/*
int linearSearch(int a[],int x,int n){
for(int i=0;i<n;i++){
    if(a[i]==x)
        return i;
}
return -1;
}
int main(){
int x,n;
printf("Enter the length of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",& arr[i]);
}
printf("Enter the element to be found:");
scanf("%d",&x);
int result=linearSearch(arr,x,n);
if (result==-1)
    printf("The element is not present");
else{
    printf("The element is found at index %d",result);
}
}
*/
//LINEAR SEARCH//
