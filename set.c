#import<stdio.h>
void main()
{
  int n,m;
  printf(" enter number of elements in set 1 : ");
  scanf("%d",&n);
  printf(" enter number of elements in set 2 : ");
  scanf("%d",&m);
  int A[n];
  int B[m];
  for(int i=0;i<n;i++){
    printf("enter elements of set1 : ");
    scanf("%d",&A[i]);
    }
  for(int j=0;j<m;j++){
    printf("enter elements of set2 : ");
    scanf("%d",&B[j]);
    }
  int C[20];
  int k=0;  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(A[i]==B[j]){
        C[k]=A[i];
        k=k+1;
        break;
        }
    }
  }
  printf("intersection of set 1 and 2 are : " );
  for(int l=0;l<k;l++){
   printf("%d\n",C[l]);
  }
} 
        
