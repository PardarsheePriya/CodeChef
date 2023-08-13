#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int space;
	int people;
	
	while(n > 0){
	    cin >> space >> people;
	    
	    if(space <= people){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    n--;
	}
    
    return 0;	
	
}
