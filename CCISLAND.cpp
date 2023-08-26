#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;
	    int q=x/xr;
	    int w=y/yr;
	    int e=min(q,w);
	    if(e>=d){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    
	}
	return 0;
}
