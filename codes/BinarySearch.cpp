#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n, low = 0, high = len-1;
    cin >> n;
    int result = binarySearch(arr, low, high, n);
    cout << "result "<<result;
    if (result == -1)
    {  
        cout << "Element is not present in the array";
    }
    else
    {
        cout << "Element found at " << result << endl;
    }  
    return 0;
}


int binarySearch(int arr[], int l, int r, int x)
{
    int res =0;
    //int low, high;
    while(l <= r)
    {
        //cout<<"l " << l<<" r "<<r << endl;
        int mid = l + (r-l)/2;
        if(x > arr[mid])
        {
           l = mid + 1;
        }

        else if (x < arr[mid])
        {
            r = mid - 1;
        }

        else 
        {
            cout << "Found at position " << mid << endl; 
            return mid;
        }

    }
    return -1;
}
