#include<stdio.h>
//Insertion at start
int insertion_start(int arr[],int n,int element){
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element;
    return n+1;
}
//Insertion at end
int insertion_end(int arr[],int n,int element){
    arr[n]=element;
    return n+1;
}
//Insertion at mid
int insertion_mid(int arr[],int n,int pos,int element){
    if(pos<0||pos>n){
        printf("invalid position");
        return 0;
    }
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    return n+1;
}
int main(){
    int arr[100],n,i,element,pos;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element : ");
    scanf("%d",&element);
    n=insertion_start(arr,n,element);
    printf("After inserion at start :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    n=insertion_end(arr,n,element);
    printf("After inserion at end :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the position : ");
    scanf("%d",&pos);
    n=insertion_mid(arr,n,pos,element);
    printf("After insertion in mid \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}