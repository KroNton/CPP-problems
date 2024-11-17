#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    int n;
    char ch;
    vector<int> numbers;
    stringstream ss(str);
  
  while(ss>>n>>ch){
     numbers.push_back(n);  
    }
numbers.push_back(n);
    return numbers;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}