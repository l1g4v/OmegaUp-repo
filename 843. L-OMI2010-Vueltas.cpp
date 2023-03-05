#include <bits/stdc++.h>
using namespace std;
#define io_op ios_base::sync_with_stdio(0); cin.tie(NULL);
#define MAX 1000006
#define PI 3.1415926535897932384626433832795
typedef unsigned long long ull;

int main()
{
    io_op
    int n,m,p;
    cin>>n>>m;
    vector<int> matrix[n];
    bool vflip=false;
    bool hflip=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int in;
            cin>>in;
            matrix[i].push_back(in);
        }
    }
    cin>>p;
    for(int i=0; i<p; i++)
    {
        char c;
        cin>>c;
        if(c=='H')
            hflip = !hflip;
        else if(c=='V')
            vflip = !vflip;
    }

    if(vflip)
    {
        for(int i=n-1; i>-1; i--)
        {
            if(hflip){
                reverse(matrix[i].begin(),matrix[i].end());
                for(int x:matrix[i]) cout << x << " ";
            }
            else for(int x:matrix[i]) cout << x << " ";
            cout << '\n';
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(hflip){
                reverse(matrix[i].begin(),matrix[i].end());
                for(int x:matrix[i]) cout << x << " ";
            }
            else for(int x:matrix[i]) cout << x << " ";
            cout << '\n';
        }
    }

}
