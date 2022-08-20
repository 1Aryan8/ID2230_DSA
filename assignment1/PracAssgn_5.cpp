#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            for(int k = i; k <= i+j; k++)
            {
                for(int l = 1; l <= i+j-k; l++)
                {
                    r = r + 1;
                    //cout << " i = " << i << " " << " j = " << j << " " << " k = " << k << " " << "l = " << l << " " << "r = " << r << endl;   
                }  
            }
        }
    }    

    return 0;
}