#include<iostream>

using namespace std;

int main()
{
    int arr[]={6, 13, 14, 25, 33, 43, 51, 53, 64, 72, 84, 93, 95, 96, 97};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tgt, l, h, mid;
    cout << "Enter targated number: ";
    cin >> tgt;
    l=0, h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==tgt)
        {
            cout << "Target " << tgt << " found at index " << mid << "." << endl;
            return 0;
        }
        else if(arr[mid]>tgt) h=mid-1;
        else l=mid+1;
    }
    cout << "Target element " << tgt << " not found." << endl;
    return 0;
}