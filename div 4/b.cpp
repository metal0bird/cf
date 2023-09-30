#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
void solve()
{
    int a,i=0;
    int sum_e=0,sum_o=0;
    cin>>a;
    int x;
    fo(i,a){
        cin>>x;
        if(x%2==0)
            sum_e+=x;
        else    
            sum_o+=x;
    }
    if(sum_e>sum_o)
        cout<<"true"<<endl;
    else    
        cout<<"false"<<endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}