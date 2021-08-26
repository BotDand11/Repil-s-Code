#include<bits/stdc++.h>
using namespace std;
int num,q[100000000],a,b,c[100000000]; 
int main(){
    cin>>a>>b;
    for(int i=1;i<=a;i++) cin>>q[i];
    for(int i=1;i<=a;i++){
        int left=1,right=a;
        int z;
        cin>>z;
        while(left<right){
            int mid=(left+right)/2;
            if(q[mid]>=z){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        if(q[right]==z){
            cout<<left<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
    return 0;
}