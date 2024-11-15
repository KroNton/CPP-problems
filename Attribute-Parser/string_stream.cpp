#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=2;
    std::string sentence;
    // std::cout<<"please enter the number of virtical lines and quries \n";
    
    std::vector<vector<std::string>> vect(n);
    for(int i=0 ;i<n;i++){
            std::getline(std::cin, sentence);
            vect[i].push_back(sentence);
    }



cout << endl;

        
      for(int i=0 ;i<n;i++){

        for(int j=0;j<vect[i].size();j++){
            
            cout<<vect[i][j]<<" ";
        }
        cout << endl;
    }  
    return 0;
}