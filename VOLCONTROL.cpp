#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int iVol, fVol;
	
	while(t){
	    cin >> iVol >> fVol;
	    cout << abs(fVol-iVol) << endl;
	    t--;
	}
	return 0;
}
