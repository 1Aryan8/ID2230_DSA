#include <iostream>
using namespace std;
int main()
{
    //ios :: sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int arr[6];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
    int key;
    for(int j=1; j<6; j++)
    {
        key = arr[j];
        int i = j-1;
    
        while(i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

    for(int j=0; j<6; j++)
    {
        cout << arr[j] ;
    }
    return 0;
}
