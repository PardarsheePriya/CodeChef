#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int x, y;
	
	while(t){
	    
	    cin >> x >> y;
	    int totalDistance = y*2;
	    int possibleDistance = x*15;
	    if(possibleDistance >= totalDistance){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
