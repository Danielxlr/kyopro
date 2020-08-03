// Danielxlr
// https://atcoder.jp/contests/abc174/tasks/abc174_b
// math

#include <iostream>
using namespace std;

int main(){
    long long n, m, ans=0, x ,y;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(x*x+y*y<=m*m){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}