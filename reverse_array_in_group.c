#include<stdio.h>
int main(){
    int n,i,a[10],result[10],temp,d,group;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("enter the number of group you want to divide an array : ");
     scanf("%d",&d);

   group=n/d;
 //group=2
  for(int j =0;j<group-1;j++){
   for(i=n/2;i<group-1;i++){
    temp=a[i];
    a[i]=a[n-j-i-1];
    a[n-j-i-1]=temp;
   }
    
   }
   printf("Reverse of an array :\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


/* group=3
           0 1 2 3 4 5
 elements  1 2 3 4 5 6






*/ 






/* 1 3 
   5
   5/2=
    0 1 2 3 4 5
   [1 2 3 4 5 6] = 21 43 65
   [1 2] [3 4 5]
   a[0]=a[1]
   a[1]=1
  output array= a[2 1]

  temp=a[2]
  a[2]=a[5]
  a[5]=a[2]

  output array=[ 1 2 5   3]

  temp=a[3]
  a[3]=a[4]
  a[4]=a[3];

  output array=[1 2 5 4 3]
  
  iteration = n/2+1
i=0
 a[1]=a[5]=a[4] = 5 7 
 a[1]=a[6]=a[5]=a[4] = 

 a[1]=a[3]=a[5] = 6
*/