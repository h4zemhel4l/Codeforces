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
    int n; cin>>n;
    string s; cin>>s;
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        int count=0;
        int left=0,right=n-1;
        int c1=n/2,c2=n/2;
        for (int j = 0; j < (n/2); ++j) {
            if((s[left]=='L')&&(c1!=0)){
                s[left]='R';left++;c1--;break;
            }else{
                left++;c1--;
            }
            if((s[right]=='R')&&(c2!=0)){
                s[right]='L';right--;c2--;break;
            }else{
                right--;c2--;
            }
        }
        for (int j = 0; j < n; ++j) {
            if(s[j]=='L')count+=j;
            else count+=(n-j-1);
        }
        cout<<count<<' ';
    }
    cout<<endl;
}

int32_t main() {
    File();
    //auto Start=clock();
    int t; cin>>t; while(t--)
        Solve();
    //auto End=clock();
    //cout<<End-Start<<" ms";
    return 0;
}