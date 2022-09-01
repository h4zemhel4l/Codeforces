#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define endl '\n'

void File(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
#endif
}

void Solve(){
    int n, a[n], b[n], first=0, second=0, counter=0;
    map<int,bool>mp;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        mp[a[i]]=true;
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }

    for (int i = 0; i < n; ++i) {
        if(mp[a[first]]){
            if(a[first]==b[second]){
                mp[b[second]]=false;
                first++; second++;
            }
            else{
                mp[b[second]]=false;
                counter++; second++;
            }

        }else{
            first++;
        }
    }
    cout<<counter;
}

int32_t main() {
    File();
    //auto Start=clock();
    //int t; cin>>t; while(t--)
        Solve();
    //auto End=clock();
    //cout<<End-Start<<" ms";
    return 0;
}