#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])//ubah disini Ascending= > descending= <
        swap(&arr[j], &arr[j+1]);

}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}
int main()
{
    int nim1,nim2,nim3,nim4,nim5;
    cout<<"Masukkan Nim[1] : "; cin>>nim1;
    cout<<"Masukkan Nim[2] : "; cin>>nim2;
    cout<<"Masukkan Nim[3] : "; cin>>nim3;
    cout<<"Masukkan Nim[4] : "; cin>>nim4;
    cout<<"Masukkan Nim[5] : "; cin>>nim5;
    int arr[] = {nim1,nim2,nim3,nim4,nim5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);

    return 0;
}
