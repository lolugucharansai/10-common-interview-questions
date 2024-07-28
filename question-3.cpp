//find the kth largest element in the array

#include<iostream>
#include<vector>
#include<priority_queue>

using namespace std;
int k_largest(vector<int> mp,int k){
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int c:mp){   
    pq.push(c);
  }
  while(k--){
    pq.pop();
  }
  

return q.top();


}
int main(){
int n;
cin>>n;
vector<int> ans(n);
for(int i=0;i<n;i++){
    cin>>ans[i];

}
int k;
cin>>k;
cout<<k_largest(ans,k);
return 0;

}