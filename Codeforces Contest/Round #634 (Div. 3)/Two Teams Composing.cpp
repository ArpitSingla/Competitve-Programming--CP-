#include <bits/stdc++.h> 
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        int n;
        cin>>n;
        vector<int> skill(n,0);
        set<int> s;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>skill[i];
        }
        for(int i=0;i<n;i++){
            s.insert(skill[i]);
            m[skill[i]]++;
        }
        int maxi=INT_MIN;
        for(auto it:m){
            maxi=max(maxi,it.second);
        }
        int size=s.size();
        int value;
        if(size==maxi){
            value=min(size-1,maxi);
        }
        else{
            value=min(size,maxi);
        }
        int temp=n/2;
        value=min(value,temp);
        cout<<value<<endl;
    }

    return 0 ;

}
