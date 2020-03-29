#include <bits/stdc++.h>
using namespace std;

// vector<string> printIlsRecur (string str1, string str2, string iStr, int m,int n,int k,vector<string> &v){  
//     if (m == 0 && n == 0){
//         v.push_back(iStr);
//     }   
//     if (m != 0){  
//         printIlsRecur (str1.substr(1), str2,iStr+str1[0], m - 1, n,k,v);  
//     }   
//     if (n != 0){  
//         printIlsRecur(str1, str2.substr(1),iStr+str2[0], m, n - 1,k,v);  
//     }
//     return v;  
// } 
// int main()  
// {  
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         string str1(n-2,'a');
//         string str2="bb";
//         string iStr="";   
//         vector<string> v;
//         printIlsRecur(str1, str2, iStr, n-2, 2,k,v);
//         cout<<v[k-1]<<endl;  
//     }
//     return 0;
// }

int main()  
{  
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str1(n,'a');
        for(int i=n-2;i>=0;i--){
            if(k<=n-i-1){
                s[i]='b';
                s[n-k]='b';
                cout<<s<<endl;
                break;
            }
            else{
                k-=n-i-1;
            }
        } 
    }
    return 0;
}




