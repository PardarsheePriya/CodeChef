#include <iostream>
using namespace std;


int factorial(int n){
    
    if(n == 0 || n== 1){
        return 1;
    }
    
    return (factorial(n-1)*n);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	int n;
	cin >> n;
	
	int ans = factorial(n);
	
	cout << ans << endl;
	
	t--;
	}
	return 0;
}
