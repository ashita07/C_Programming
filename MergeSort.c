#include <stdio.h>
#include <conio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
   
}
void merge(int A[], int low, int mid, int high)
{
    int i, j, k;
    int B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int f = low; f<=high; f++)
    {A[f]=B[f];
    }
    
}
void mergeSort(int A[],int low,int high)
{ int mid;
    if(low<high)
    {
  mid=(low+high)/2;
  mergeSort(A,low,mid);
  mergeSort(A,mid+1,high);
  merge(A,low,mid,high);
    }
}
int main()
{
    int A[] = {55, 6, 32, 74, 1, 2};
    int n=6;
    printArray(A, n);
    mergeSort(A,0,5);
    printArray(A, n);
    return 0;
}