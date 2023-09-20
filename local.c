#import<stdio.h>
void main()
{  int n;
   printf("enter number of elements : ");
   scanf("%d",&n);
   int A[n];
   for(int i=0;i<n;i++){
    printf("enter elements of array : ");
    scanf("%d",&A[i]);
    }
   for( int j=1;j<n-1;j++){
     if(A[j]>A[j+1]&&A[j]>A[j-1]){
      printf("%d is a local maxima",A[j]);
      }
      }
   if(A[0]>A[1]&&A[0]>A[n]){
    printf("%d is a local maxima",A[0]);
   }
   if(A[n]>A[n-1]&&A[n]>A[0]){
    printf("%d is a local maxima",A[n-1]);
   }
   }
