//////Calculator using error handling ////
#include <iostream>
#include <string>
using namespace std;
int num1,num2;
string operation;
int main(){
	cout<<"Enter the first integer:";
	cin>>num1;
	
	cout<<"Enter the second integer:";
	cin>>num2;
	
	cout<<"Choose an operation (add, subtract, multiply, divide)";
	cin>>operation;
	try {
		if(num1==0){
			throw "calulation with zero ";
			}
			else if (num2==0){
				throw "calulation with zero ";
				}
			else if(operation == "add"){
				cout<<"Result = "<<num1+num2;
				}	
				
			else if(operation == "subtract" ){
				cout<<"Result = "<<num1-num2;
				}	
				
			else if(operation == "multiply " ){
				cout<<"Result = "<<num1*num2;
				}	
				
			else if(operation == "divide " ){
				cout<<"Result = "<<num1/num2;
				}	
				
			}
		
		catch (const char * e1)	{
			cout<<"error  "<<e1;
			}
			
	return 0;
	}
