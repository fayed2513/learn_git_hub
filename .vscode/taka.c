#include <stdio.h>
#include<stdlib.h>
// #include <string.h>
struct Node{
    int data;
    struct Node *next;
};
void insertatend(struct Node *head,int value){
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  temp->data=value;
  temp->next=NULL;
  struct Node* current=head;
  while(current->next!=NULL){
    current=current->next;
  }
  current->next=temp;
print(head);
}
void print(struct Node* head){
  while(head!=NULL){
    printf("%d ->",head->data);
    head=head->next;
  }
  printf("NULL");
}
// void insertdata(struct Node *head,int value ){
//   struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
//   temp->data=value;
//   temp->next=NULL;
//   struct Node* newHead=temp;
//   newHead->next=head;
//   while(newHead!=NULL){
//      printf("%d ", newHead->data);
//     newHead=newHead->next;
//    printf("->");
//   }
// }
// int searchInLinkList(struct Node *head,int n){
//   int index=1;
//   while(head!=NULL){
//     if(head->data==n){
//       return index ;
//     }
//     else
//     head=head->next;
//      index++;
//   }
//   return -1;
//   }

void main() {
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    a->data=10;
    b->data=30;
    c->data=40;
    // strcpy(a->data, "fayed hasan");
    // strcpy(b->data, "Fucks a beautiful");
    // strcpy(c->data, "Girl");
    a->next=b;
    b->next=c;
    c->next=NULL;
    // struct Node *ptr= a;
    int n;
    scanf("%d",&n);
    // int x=searchInLinkList(a,n);
// printf("%d",x);
  //   while(ptr!=NULL){
  //  printf("%s ", ptr->data);
  //   ptr=ptr->next;
  //     //  printf("->");
  //   }
  insertatend(a,n);
  my data ins
}