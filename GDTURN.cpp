#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X;
	int Y;
	
	int n;
	cin >> n;
	
	while(n > 0){
	    cin >> X >> Y;
	
	if(X+Y > 6){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}
	
	n--;
	}
	return 0;
}
