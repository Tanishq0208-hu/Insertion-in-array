// #include<stdio.h>
// int main(){
//     int n,i,j,temp,a[10],largest,second_largest;
//     printf("Enter the aize of array : ");
//     scanf("%d",&n);
//     printf("Enter elements in array : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }                                              //LARGEST ELEMENT IN ARRAY
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     largest=a[n-1];
//     second_largest=a[n-2];
//     printf("largest element is %d",largest);
//     printf("second larhest elements is %d",second_largest);
//     return 0;
// }