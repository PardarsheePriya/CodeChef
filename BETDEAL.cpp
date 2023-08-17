#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    float a, b;
	    cin >> a >> b;
	    
	    float price1 = 100 - ((100*a)/100);
	    float price2 = 200 - ((200*b)/100);
	    
	    if(price1 == price2){
	        cout << "BOTH" << endl;
	    }
	    else if(price1 > price2){
	        cout << "SECOND" << endl;
	    }
	    else{
	        cout << "FIRST" << endl;
	    }
	    
	    t--;
	}
	return 0;
}
