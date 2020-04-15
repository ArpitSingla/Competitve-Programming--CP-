#include<bits/stdc++.h>
using namespace std;
#define int long long int

class jewel{
    public:
    int value,mass;
};

bool compare(jewel a,jewel b){
    return a.value>b.value;
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    jewel *arr=new jewel[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].mass>>arr[i].value;
    }
    multiset<int> weight;
    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        weight.insert(temp);
    }
    sort(arr,arr+n,compare);
    int ans=0;
    for(int i=0;i<n;i++){
        if(weight.empty()){
            break;
        }
        else{
            if(weight.lower_bound(arr[i].mass)!=weight.end()){
                ans+=arr[i].value;
                weight.erase(weight.lower_bound(arr[i].mass));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}