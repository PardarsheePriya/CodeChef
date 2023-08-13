#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	int x, y;
	while(t){
	    cin >> x >> y;
	    
	    if(x == y){
	        cout << "ANY" << endl;
	    }
	    else if(x < y){
	        cout << "FIRST" << endl;
	    }
	    else{
	        cout << "SECOND" << endl;
	    }
	    t--;
	    
	}
	return 0;
}
