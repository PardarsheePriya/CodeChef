#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t){
	    int n;
	    cin >> n;
	    
	    if(n >= 1 && n <= 10){
	        cout << "Lower Double" << endl;
	    }
	    else if(n >= 11 && n <= 15){
	        cout << "Lower Single" << endl;
	    }
	    else if(n >=16 && n <= 25){
	        cout << "Upper Double" << endl;
	    }
	    else if(n >=26 && n<=30){
	        cout << "Upper Single" << endl;
	    }
	    t--;
	}
	return 0;
}
