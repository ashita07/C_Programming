#include<stdio.h>
#include<conio.h>

void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    printf(" %d \n");
}
 void InsertionSort(int *A, int n)
 { int key;
for (int i = 1; i <= n-1; i++)
{
    key=A[i];
    int j=i-1;
    while(j>=0 && A[j]>key)
    {
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=key;
}
 }
int main()
{
int A[] ={44,25,66,11,82,34,2,12};
int n=8;
printArray(A,n);
InsertionSort(A,n);
printArray(A,n);
return 0;
}