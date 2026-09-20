#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* head=NULL;
    struct node* temp=NULL;
    struct node* new;
    int n,i;
    printf("Enter the size of node : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=temp=new;
        } else{
            temp->next=new;
            temp=temp->next;
        }
    }
    printf("\nLinked list : ");
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
