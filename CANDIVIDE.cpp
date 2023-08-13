#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int numOfCan;
	
	cin >> n;
	
	while(n > 0){
	    cin >> numOfCan;
	
	if(numOfCan%3 == 0){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}
	n--;
	}
	return 0;
}
