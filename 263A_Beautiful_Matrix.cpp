#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int arr[5][5],x,y,res;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    res = abs(x-2)+abs(y-2);
    cout<<res;
    return 0;
}