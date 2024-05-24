#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , mini_cap=0 , temp=0;

    cin>>n;
    int a[n] , b[n];

    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i]>>b[i];
        mini_cap = mini_cap + b[i]-a[i];

        if(mini_cap>temp)
        {
            temp = mini_cap;
        }


    }
    cout<<temp<<endl;


    return 0;
}
