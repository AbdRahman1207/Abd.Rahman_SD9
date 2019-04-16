#include <iostream>
#include <math.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i=1; i<n; i++){
        key=arr[i];
        j= i-1;

        while(j>=0 && arr[j] > key){ //ubah disini Ascending= > descending= <
            arr[j+1]= arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    cout<<"Sorting Insertion sort secara Ascending \n"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";

}
    int main()
{
        int arr[]={15,2,56,99,45,78,90,32,1,32};
        int n=sizeof(arr)/sizeof(arr[0]);

        insertionSort(arr, n);
        printArray(arr, n);

        return 0;
}

