#include<iostream>

using namespace std;

// Function definition for Bubble Sort
void bubble_sort(float arr[], int n); 

// Function definition for Insertion Sort
void insertion_sort(float arr[], int n);

// Function definition for Selection Sort
void selection_sort(float arr[], int n);

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;

    // Taking 3 array
    /* If we take one array, after sorting the array using any of the algorithms the array
    will store sorted for the remaining operations. Thus other sorting algorithms will not
    work and only pass the values */ 
    float arr[n], arr1[n], arr2[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        arr1[i]=arr[i]; // The elements of 'arr1' will be as same as the 'arr'
        arr2[i]=arr[i]; // The elements of 'arr2' will be as same as the 'arr'
    }
    cout << endl;

    // printing main array
    cout << "Main Array    : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << endl;

    // printing sorted array
    cout << "Sorted array  : " << endl;
    cout << endl;
    cout << "Bubble Sort   : ";
    bubble_sort(arr, n); // Calling unsorted array 'arr'
    cout << "Insersion Sort: ";
    insertion_sort(arr1, n); // Calling unsorted array 'arr1'
    cout << "Selection Sort: ";
    selection_sort(arr2, n); // Calling unsorted array 'arr2'
}

// Function declatarion for Bubble Sort
void bubble_sort(float arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    // Printing the result
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function declatarion for Bubble Sort
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
    // Printing the result
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function declatarion for Bubble Sort
void selection_sort(float arr[], int n)
{
    int min;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[min]) min=j;
        swap(arr[i], arr[min]);
    }
    // Printing the result
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
