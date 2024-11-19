#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<int> vect;   
    int num,i,input;
    cin>>num;
    for(i=0;i<num;i++){
      cin>>input;
      vect.push_back(input) ; 
    }
    sort(vect.begin(),vect.end());
    for(i=0;i<num;i++){

     cout<<vect[i]<<" " ; 
    }
    return 0;
}
