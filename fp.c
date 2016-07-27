#include<stdio.h>
#include<stdlib.h>

int compare(int a,int b) {
  if(a>b)
    return 1;
  else
    return 0;
}

void BubbleSort(int *A,int n, int (*compare)(int,int)) {
  int i,j,temp;
  for(i=0;i<n;i++)
     for(j=0;j<(n-1);j++) {
      if(compare(A[j],A[j+1]) > 0) {
      temp = A[j];
      A[j] = A[j+1];
      A[j+1] = temp;
      }
    }
}
      

int main() {
  int i;
  int A[]={-2,102,-13,-7,96,26};
  //printf("%d\n",A[0]);
  for(i=0; i<6; i++)
      printf("%d\n",A[i]);
  BubbleSort(A,6,compare);
  printf("Sorted : \n");
  for(i=0; i<6; i++)
     printf("%d\n",A[i]);

}
