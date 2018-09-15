#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main(){
    
    string input;
    string split;
    vector<string> arr;
    int count=0;
    getline(cin, input);
    
    stringstream ss(input);
    ss.str(input);
    
    while(ss >> split){
        //cout<<split<<endl;
        arr.push_back(split);
    }
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != " "){
            count++;
        }
        //cout<<arr[i]<<endl;
    }
    cout<<count;

    
    return 0;

}
