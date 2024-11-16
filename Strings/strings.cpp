#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    std::string a,b,a_dot,b_dot;
    cin>>a>>b;
    a_dot=a;
    b_dot=b;
    
    a_dot[0]=b[0];
    b_dot[0]=a[0];
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    cout<<a_dot<<" "<<b_dot<<endl;
    
    
    
  
    return 0;
}