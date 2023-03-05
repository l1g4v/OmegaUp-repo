#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int recur(int n){
    if(n==1){
        cout << 1;return 1;
    }
    if(!(n%2)) {
        cout << n << ' ';
        return recur(n/2);
    }
    else if(n%2){
        cout << n <<' ';
        return recur(1+n*3);
    }


}

int main ()
{
    //typedef unsigned int ul;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;recur(n);
    //double r,t;cin>>r>>t;
            //  4    4/2=2   (4/2)/2=1
    //cout << int(r + (r/t) + ((r/t)/t));

}
