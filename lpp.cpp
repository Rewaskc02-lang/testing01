#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long ans=0;
    for(int i=0;i<n;i++){
    	int x=v[i+1];
    	if(v[i]!=x){
           ans+=1;
    	}
    }
    cout<<ans<<endl;
	return 0;
}