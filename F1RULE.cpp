#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	float x, y;
	
	while(t){
	    cin >> x >> y;
	    
	    float chefEligible = (x*107)/100;
	    
	    if(chefEligible >= y){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
