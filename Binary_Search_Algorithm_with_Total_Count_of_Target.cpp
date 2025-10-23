#include <iostream>

using namespace std;

int SearchLeft(int arr[], int n, int tgt)
{
    int l=0, h=n-1, flag=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==tgt)
        {
            flag=mid;
            h=mid-1;
        }
        else if(arr[mid]<tgt) l=mid+1;
        else h=mid-1;
    }
    return flag;
}

int SearchRight(int arr[], int n, int tgt)
{
    int l=0, h=n-1, flag=-1;
    while(l<=h)
    {
        int mid=l+ (h-l)/2;
        if(arr[mid]==tgt)
        {
            flag=mid;
            l=mid+1;
        }
        else if(arr[mid]<tgt) l=mid+1;
        else h=mid-1;
    }
    return flag;
}

int main()
{
    int arr[]={10, 20, 20, 20, 20, 30, 30, 40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tgt;
    cout << "Enter target: ";
    cin >> tgt;

    int left=SearchLeft(arr, n, tgt);
    int right=SearchRight(arr, n, tgt);

    if(left!=-1) {
        cout << "Total count of " << tgt << " is: " << (right-left+1) << endl;
        cout << "Positions: ";
        for(int i = left; i <= right; i++)
            cout << i << " ";
        cout << endl;
    }
    else cout << tgt << " not found in the array." << endl;
}