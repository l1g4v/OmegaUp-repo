#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    int k,n=0;
    cin>>k;
    cin>>n;
    int ar[n]={0};

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int min_ = 3000000;
    for(int i = 0; i < n - (k - 1); i++){
        if(ar[i + (k-1)] - ar [i] < min_) min_ = ar[i + (k-1)] - ar [i];
    }

    cout<<min_;

    return 0;
}
