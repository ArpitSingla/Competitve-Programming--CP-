#include <iostream>
using namespace std;

int totalWays(int a){
    if(a<0){
        return 0;
    }
    if(a==0){
        return 1;
    }
    return totalWays(a-1)+totalWays(a-2)+totalWays(a-3);
}

int main() {
	int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int ans=totalWays(a);
        cout<<ans<<endl;
    }
}
