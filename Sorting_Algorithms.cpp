#include<iostream>

using namespace std;

void bubble_sort(float arr[], int n);

void insertion_sort(float arr[], int n);

void selection_sort(float arr[], int n);

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;

    float arr[n], arr1[n], arr2[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        arr1[i]=arr[i];
        arr2[i]=arr[i];
    }
    cout << endl;

    cout << "Main Array    : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << endl;

    cout << "Sorted array  : " << endl;
    cout << endl;
    cout << "Bubble Sort   : ";
    bubble_sort(arr, n);
    cout << "Insersion Sort: ";
    insertion_sort(arr1, n);
    cout << "Selection Sort: ";
    selection_sort(arr2, n);
}

void bubble_sort(float arr[], int n)
{
    float temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(float arr[], int n)
{
    int j;
    float key;
    for(int i=1; i<n; i++)
    {
        key=arr[i];
        for(j=i-1; j>=0 && arr[j]>key; j--)
            arr[j+1]=arr[j];
        arr[j+1]=key;
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_sort(float arr[], int n)
{
    int min;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[min]) min = j;
        float temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}