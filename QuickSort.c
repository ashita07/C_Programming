#include <stdio.h>
#include <conio.h>

int partition(int A[], int lb, int ub)
{
    int pivot = A[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (A[start] <= pivot && start<= end)
        {
            start++;
        }
        while (A[end] > pivot && end>=start+1)
        {
            end--;
        }
    
        if (start < end)
        {
            int s=A[start];
            A[start]=A[end];
            A[end]=s;
        }}
    
    int s=A[lb];
    A[lb]=A[end];
    A[end]=s;
    return end;
}
void quickSort(int A[], int lb, int ub)
{
    if(lb<ub)
    {
        int location=partition(A,lb,ub);
        quickSort(A,lb,location-1);
        quickSort(A,location+1,ub);
        //printf(" %d hello");
    }
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n ", A[i]);
    }

}
int main()
{
    int A[] = {33, 53, 12, 8, 29, 47, 7};
    int n = 7;
    int lb = A[0];
    int ub = A[n - 1];
    printArray(A, n);

    quickSort(A, lb, ub);
    printArray(A, n);
    return 0;
}
