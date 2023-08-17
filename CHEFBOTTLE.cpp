#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d=c/b;
	    if(d<a)
	    cout<<d<<endl;
	    else
	    cout<<a<<endl;
	    
	    t--;
	}
	return 0;
}
