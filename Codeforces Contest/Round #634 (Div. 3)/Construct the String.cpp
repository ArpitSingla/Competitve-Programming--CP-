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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        char alpha='a';
        if(a==b){
            for(int i=0;i<n;i++){
                s.push_back(alpha+i);
            }
            cout<<s<<endl;
            continue;
        }
        string temp;
        temp.push_back(alpha);
        for(int i=1;i<b;i++){
            temp.push_back(alpha+i);
        }
        int ans=n/b;
        for(int i=0;i<ans;i++){
            s=s+temp;
        }
        if(n%b==0){
            cout<<s<<endl;
        }
        else{
            for(int i=0;i<n%b;i++){
                s=s+temp[i];
            }
            cout<<s<<endl;
        }
    }

    return 0 ;

}
