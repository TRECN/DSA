            void reverse(){
    struct node* a=start;
    struct node* b=NULL;
    struct node* c;
    while(a!=NULL){
        c=a->next;
        a->next=b;
        b=a;
        a=c;
    }
    start=b;
}