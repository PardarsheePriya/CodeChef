#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int x;
	while(t){
	    cin >> x;
	    if(x > 15){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	    t--;
	}
	return 0;
}
