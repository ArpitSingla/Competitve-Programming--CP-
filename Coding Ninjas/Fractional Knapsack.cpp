#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class worker{
    public:
    ll cost;
    ll speed;
    ll time;
};

bool comp(worker w1,worker w2){
    if(w1.time==w2.time){
        if(w1.speed==w2.speed){
            return w1.cost<w2.cost;
        }
        return w1.speed>w2.speed;
    }
    return w1.time<w2.time;
}

int main()
{
    ll n,d;
    cin>>n>>d;
    worker arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i].time>>arr[i].cost>>arr[i].speed;
    }
    sort(arr,arr+n,comp);
    ll curr_cost=arr[0].cost;
    ll curr_index=0;
    ll curr_area=0;
    for(ll i=1;i<n && curr_area<d;i++){
        curr_area+=(arr[i].time-arr[i-1].time)*arr[curr_index].speed;
        if(curr_area>=d){
            return curr_cost;
        }
        if(arr[curr_index].speed<arr[i].speed){
            curr_index=i;
            curr_cost+=arr[curr_index].cost;
        }
    }
    cout<<curr_cost<<endl;
    return 0;
}