#include <iostream>
using namespace std;
string reverse (string name,int length){
    
    int start=0;
    int end = length-1;
    int temp;
    while (start <  end ){
        temp = name[start];
        name[start]=name[end];
        name[end]= temp;
        start++;
        end--;
        
    }
    return name;
    }
    
    
int main(){
    string name="vaibhav";
    int length = name.length();
    
    cout<<reverse (name,length);
    
    
    return 0;
}