#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int

int solve(int *input,int num,int *dp){
    int flag=0;
    if(num==0||num==1){
        return 1;
    }
    if(dp[num]!=-1){
        return dp[num];
    }
    if(input[num-1]==0 && (input[num-2]!=1 && input[num-2]!=2)){
        flag=1;
    }
    else if(input[num-2]*10+input[num-1]==10 || input[num-2]*10+input[num-1]==20){
        dp[num]=solve(input,num-2,dp)%mod;
    }
    else if(input[num-2]!=0 && (input[num-2]*10+input[num-1]<=26)){
        dp[num]=(solve(input,num-1,dp)%mod+solve(input,num-2,dp)%mod)%mod;
    }
    else{
        dp[num]=solve(input,num-1,dp)%mod;
    }
    if(flag==1){
        return 0;
    }
    return dp[num];
}

int32_t main(){
    string s;
    cin>>s;
    while(s!="0"){
        int num=s.length();
        int dp[num+1];
        memset(dp,-1,sizeof(dp));
        int *input=new int[num];
        for(int i=0;i<num;i++){
			int t=s[i];
			t= t-48;
			input[i]=t;
		}
        int ans=solve(input,num,dp);
        cout<<ans<<endl;
        cin>>s;
    }
    return 0;
}
