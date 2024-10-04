
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
  insertdata(a,n );
}