#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    // take all inputs needed form user 
    std::vector<int> vect;   
    int num,i,input,q1;
    int q2[2];
    
    cin>>num;
    for(i=0;i<num;i++){
      cin>>input;
      vect.push_back(input) ; 
    }
    cin>>q1;
    for(i=0;i<2;i++){
      cin>>input;
      q2[i]=input ; 
    }
    
    // erase specifc elememt from vector
    vect.erase(vect.begin()+q1-1);
    
    // erase range of elememts from vector
    vect.erase(vect.begin()+q2[0]-1,vect.begin()+q2[1]-1);   
    
    // print the final vector
    cout<<vect.size()<<endl;
    for(i=0;i<vect.size();i++)
        cout<<vect[i]<<" " ; 

    return 0;
}
