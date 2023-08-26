#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x < 35){
	        cout << "Underload" << endl;
	    }
	    else if(x >= 35 && x <= 65){
	        cout << "Normal" << endl;
	    }
	    else{
	        cout << "Overload" << endl;
	    }
	}
	return 0;
}
