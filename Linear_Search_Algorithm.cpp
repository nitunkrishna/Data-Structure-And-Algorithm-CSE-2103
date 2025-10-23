#include<iostream>

using namespace std;

int main()
{
    int arr[15]={6, 13, 14, 25, 33, 43, 51, 53, 64, 72, 84, 93, 95, 96, 97};
    int tgt, cnt;
    cout << "Enter targeted number: " << endl;
    cin >> tgt;
    for(int i=0; i<15; i++)
    {
        if(arr[i]==tgt)
        {
            cnt=i+1;
            break;
        }
    }
    cout << "Target " << tgt << " found at element " << cnt << endl;
}