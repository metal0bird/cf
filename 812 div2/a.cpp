
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
    
    cin>>a;
    vector <int> x_c;
    vector <int> y_c;
    int x,y;
    x_c.push_back(0);
    y_c.push_back(0);
    fo(i,a){
        cin>>x>>y;
        x_c.push_back(x);
        y_c.push_back(y);

    }
    sort(x_c.begin(),x_c.end());
    sort(y_c.begin(),y_c.end());

    int ans=2*(abs(x_c[0])+abs(x_c[x_c.size()-1])+abs(y_c[0])+abs(y_c[y_c.size()-1]));
    cout<<ans<<endl;


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