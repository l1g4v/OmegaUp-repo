#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main ()
{
    //typedef unsigned int ul;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.precision(3);
    int n;cin>>n;
    int maxa = -1;
    int arr[100]={0};
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[x]++;
        if(x>maxa) maxa=x;
    }
    for(int i=0;i<=maxa;i++){
        if(arr[i]!=0) cout << i << ' ' << arr[i] << '\n';
    }


}
