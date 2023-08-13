#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int n, x;
	
	while(t){
	    cin >> n >>  x;
	    if(x >= (n+1)/2){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    t--;
	}
	return 0;
}
