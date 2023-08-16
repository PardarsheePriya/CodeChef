#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,a,b,c;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> a>>b>>c>>x;
	    if(a+b>=x||b+c>=x||c+a>=x)  std::cout << "Yes" << std::endl;
	    else    std::cout << "No" << std::endl;
	}
	return 0;
}