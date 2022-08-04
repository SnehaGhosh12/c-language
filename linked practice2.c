#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head;
void createList(int n){
struct node *newnode,*temp;
int data;
head=(struct node *)malloc(sizeof(struct node));
if (head==NULL){
    printf("Unable to allocate memory");
}
else{
    printf("Enter the data of node 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("Unable to allocate memory");
        }
        else{
            printf("Enter the data of node %d:",i);
            scanf("%d",&data);
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=temp->next;
        }
    }
}
}
void insert_at_beginning(int data){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
}
void insert_at_given_position(){
struct node *newnode,*temp;
int count=0;
int position;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL){
    printf("Unable to allocate memory");
}
else{
while(temp->next!=NULL && (position)!=count){
    temp=temp->next;
    count=count+1;
}
if(position==count){
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;
}
}
}
void insert_node_end(int data){
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL){
   printf("Unable to allocate memory");
   }
   else{
   newnode->data=data;
   newnode->next=NULL;
   temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
}
}
void display(){
    struct node *temp;
    if(head==NULL)
    printf()
}
