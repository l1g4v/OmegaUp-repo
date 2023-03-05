#include <bits/stdc++.h>
#include <queue>
using namespace std;
queue<int> st;

int main(){
    int n;cin>>n;
    unsigned long long sell=0;
    for(int i=0;i<n;i++){
        int o;cin>>o;
        if(o==1){
            int t;cin>>t;
            st.push(t);
        }
        else if(o==2){
            if(!st.empty()){
                sell+=st.front();
                st.pop();
            }
        }
        else if(o==3)
            cout << st.size() << endl;
        else
            cout << sell << endl;
    }
}
