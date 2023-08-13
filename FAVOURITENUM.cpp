#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int a;
	while(t){
	    cin >> a;
	    if(a%2 == 0 && a%7 == 0){
	        cout << "ALICE" << endl;
	    }
	    else if(a%2 != 0 && a%9 == 0){
	        cout << "BOB" << endl;
	    }
	    else{
	        cout << "CHARLIE" << endl;
	    }
	    t--;
	}
	return 0;
}
