#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int x;
	
	while(t){
	    cin >> x;
	    if(x > 24){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
