
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
void solve()
{
    int a,i=0,ele;
    cin>>a;
    vector <int> arr;
    fo(i,a){
        cin>>ele;
        arr.push_back(ele);
    }
    deque <int> dq;
    fo(i,a){
        dq.push_back(arr[i]);
    }
    sort(arr.begin(),arr.end());
    fo(i,a){
        if(dq.front()==arr[i])
            dq.pop_front();
        else{ 
            if(dq.back()==arr[i])
                dq.pop_back();
            else{
                cout<<"no"<<endl;
                return;
            }
            }
    cout<<"yes"<<endl;
}
    

    



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