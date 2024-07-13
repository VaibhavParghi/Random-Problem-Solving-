#include <iostream>
#include <cmath>

using namespace std;
int difference( int n,int arr[100][100]) {
     //input part    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
        }
        
    }
    ///main calculation part;
    ///pimary diagonal
    int diff1=0;
    for(int i=0;i<n;i++){
		diff1+=arr[i][i];
		}
	
	///secondary diagonal
	int diff2=0;
	for(int i=0 ;i<n;i++){
		diff2+=arr[i][n-i-1];
		}
	
	int  main_diff=diff1-diff2;
	
	return abs(main_diff);		
}
int main(){
	int n;
	cin>>n;
	int arry[100][100];
	cout<<difference(n,arry);
	return 0;
	}
