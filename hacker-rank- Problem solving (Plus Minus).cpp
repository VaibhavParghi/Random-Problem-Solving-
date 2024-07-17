#include <iostream>
using namespace std;
void operation(int n){
	double positive_R=0,negative_R=0,zero=0;
	int *p=new int[n];
	//input
	for(int i=0;i<n;i++){
		cin>>p[i];
		}
	///ration calculation
	for(int i=0;i<n;i++){
		if(p[i]==0){
			zero++;
			}
			
		 else if(p[i]>0){
			 positive_R++;
			 }	
		else if(p[i]<0){
			negative_R++;
			}	 
		}
		
		///postive number ration;
		positive_R/=n;
		
		///negative number ration;
		negative_R/=n;
		///zero number ration;
		zero/=n;
	cout<<positive_R<<endl;
	cout<<negative_R<<endl;
	cout<<zero<<endl;	
	delete []p;
			
	}
int main(){
	int n;
	cin>>n;
	operation(n);
	return 0;
	}
