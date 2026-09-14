#include<stdio.h>
int main(){
    int n,i,largest,smallest,a[10],smallest_index,largest_index;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    largest=a[0];
    smallest_index=0;
    largest_index=0;
    for(i=1;i<n;i++){
        if(smallest>a[i]){
         smallest=a[i];
         smallest_index=i;
        }
        if(largest<a[i]){
            largest=a[i];
            largest_index=i;
        }
    }
        printf("Smallest number is %d and index number is %d ",smallest,smallest_index);
        printf("largest number is %d and index number is %d ",largest,largest_index);
    
    return 0;
}