#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int n;
	int x;
	int y;
	
	while(t){
	    cin >> n >> x >> y;
	    
	    if(n <= x*y){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
