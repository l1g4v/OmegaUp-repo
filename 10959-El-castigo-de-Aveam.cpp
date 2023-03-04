#include <bits/stdc++.h>
#define ull unsigned long long

int main ()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int m,n;
    std::cin>>m>>n;
    int ma=-1;
    int arr[2501]={0};
    for(int i=0;i<m*n;i++){
        int x;
        std::cin>>x;
        arr[x]++;
        if(x>ma)
          ma=x;
    }
    for(int i=0;i<=ma;i++)
        if(arr[i]) std::cout << arr[i] << ' ';


}
