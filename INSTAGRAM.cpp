#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int x, y;
	while(t){
	    cin >> x >> y;
	    if(y*10 < x){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    t--;
	}
	return 0;
}
