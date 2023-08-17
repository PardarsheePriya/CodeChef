#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x <= 3){
	        cout << x* y << endl;
	    }else if (x%3==0){
	        int n=(((x/3)-1)*z)+(x*y);
	        cout<<n<<endl;
	    }
	    else{
	        int breakh = x/3;
	        int breaktime = breakh*z;
	        
	        cout << (x*y) + breaktime << endl;
	    }
	    
	    
	    
	    t--;
	}
	return 0;
}
