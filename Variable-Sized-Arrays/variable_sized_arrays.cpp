#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    
    // std::cout<<"please enter the number of virtical lines and quries \n";
    std::cin>>n>>q; 
    std::vector<vector<int>> vect(n);
    for(int i=0 ;i<n;i++){
        int k=0;
        std::cin>>k;
        vect[i].resize(k);
        for(int j=0;j<k;j++){
            std::cin>>vect[i][j];
        }
        
    }

    std::vector<vector<int>> queries(q,std::vector<int>(2, 0));
    for(int i=0 ;i<q;i++){
        for(int j=0;j<2;j++){
            std::cin>>queries[i][j];
        }
    
}

cout << endl;
for(int i=0 ;i<q;i++){

cout<<vect[queries[i][0]][queries[i][1]]<<endl;;
}


        
    //   for(int i=0 ;i<n;i++){

    //     for(int j=0;j<vect[i].size();j++){
            
    //         cout<<vect[i][j]<<" ";
    //     }
    //     cout << endl;
    // }  
    return 0;
}