
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i);

void buildHeap(int arr[], int n);


void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i=n-1; i>0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

void heapify(int arr[], int n, int i)  
{
      int largest = i;
      int left = i*2+1;
      int right = i*2+2;

      if(left<n && arr[left]>arr[largest])
            largest = left;
    
    if(right<n && arr[right]>arr[largest])
        largest = right;
    
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  
{ 
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    // for(int i = n-1;i>0;i++)
    // {
    //     swap(arr[0],arr[i]);
    //     heapify(arr,i,0);
    // }
}
