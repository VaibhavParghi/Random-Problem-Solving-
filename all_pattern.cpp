#include<iostream>
using namespace std;


//pattern-1
void square_pattern(){
     for(int i=0;i<4;i++){
	     for(int j =0; j <=4;j++){
		     cout<<"*";
	     }cout<<endl;
     }
}


//pattern-2
void right_ang_triangle_left(){

	for(int i=0 ; i<=4 ; i++){
		for(int j=0 ; j < i ; j++ ){
			cout<<"* ";
		}
		cout<<endl;
	}
}



//pattern-3
void number_right_ang(){
	for(int i=1 ; i<=5 ; i++){
		   for(int j=1 ; j < i ; j++ ){	                          
			   cout<<j;
		   }
		   cout<<endl;

	}
}

//pattern-4
void number_right_ang2(){
	for(int i=1 ; i <=4 ;i++){
		for(int j=0;j<i;j++){
			cout<<i<<" ";

		}
		cout<<endl;
	}
}


//parttern-5 ;
void reverse_right_ang_triangle(){
	for(int i=0;i<5;i++){
		for(int j=5; j>i ; j--){
			cout<<"* ";
		}
		cout<<endl;
	}

}

//pattern-6
void reverse_right_ang_triangle_number(){
	for(int i=5 ; i>0 ; i--){
		for(int j=1 ; j <= i ;j++ ){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

//pattern 7;
void pyramid(){
	int n=5;
	for(int i=0;i<n;i++){
		///for space 
		for(int j=0;j<(n-i-1);j++){
			cout<<" ";
		}

		// for star printing
		for(int k=0 ; k<(2*i+1) ; k++){
			cout<<"*";
		}
		
		//for space 
		for(int l=0;l<(n-i-1);l++){
			cout<<" ";
		}
		cout<<endl;		
		
	}
}

//patterm -8 
void reverse_pyramid(){
	int n=5;

for(int i=0;i<=n;i++){
		///for space 
		for(int j=0;j<i;j++){
			cout<<" ";
		}

		// for star printing
		for(int k=0 ; k<2*n-(2*i+1) ; k++){
			cout<<"*";
		}
		
		//for space 
		for(int l=0;l<i;l++){
			cout<<" ";
		}
		cout<<endl;		
		
	}
}

//pattern -9
//two pyramid 1st is normal 2nd is reveresed
void kit(){
	pyramid();
	reverse_pyramid();
}

void pattern10(){
    //first right angle 
	for(int i=0;i<=4;i++){
		for(int j=0; j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	//2nd reverse right angle 
	for(int j=0;j<=5;j++){
		for(int v=5 ; v>j ;  v--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern11(){
	for(int i=0;i<5;i++){
		int start=1;
		if(i%2==0){
			start=1;
		}
		else{

			start=0;
		}

		///printing 
		for(int j=0;j<=i;j++){
			cout<<start<<" ";
			start = 1 - start;
		}
		cout<<endl;
	}
}

void pattern12(){
	int n=4;
	int space = 2 * n-1;

	for(int i=1;i<=n;i++){

		//number 
		for(int j = 1 ;j<=i;j++){
			cout<<j;
		}
		//space 
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
           //number
		for(int j=i;j>=1;j++){
			cout<<j;

		}
		cout<<endl;
		space -=2;
	}

}

void pattern13(){
	int number =1;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<number<<" ";
			number++;
		}
		cout<<endl;
	}

}

void patter14(){
	auto n=5;
	for(int i=0;i<=n;i++){
		for(char j='A' ; j<='A'+i;j++){
			cout<<j<<" ";

		}
		cout<<endl;
	}

}
void patter15(){
	int n=5;
	for(int i=5;i>=0;i--){
		for(char j='A' ; j<='A'+i ;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern16(){
	for(int i=0;i<5;i++){
		char ch = 'A'+ i;
		for(int j=0;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}


void pattern17(){
	int n=5;
	for(int i=0;i<n;i++){
		///for space 
		for(int j=0;j<(n-i-1);j++){
			cout<<" ";
		}

		// for star printing
		char ch = 'A';
		int breakpoint = (2*i+1) / 2 ;
		
		for(int j=1;j<=(2*i)+1;j++){
			cout<< ch <<" ";
			if(j<=breakpoint)
				ch++;
			else
				ch--;
		}
		
		//for space 
		for(int l=0;l<(n-i-1);l++){
			cout<<" ";
		}
		cout<<endl;		
		
	}
}

void pattern18(){
	for(int i=0;i<5;i++){
		for(char j='E'-i;j<='E';j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern19(){
	int iniS = 0,N=5;
      for(int i=0;i< N;i++){
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          
          iniS+=2;
          
          
          cout<<endl;
      }

      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
       
          iniS-=2;
          
          
          cout<<endl;
      }
      
}
void pattern20(){
	 int n=4;
      int spaces = 2*n-2;
      
      
      for(int i = 1;i<=2*n-1;i++){
          
         
          int stars = i;
          
     
          if(i>n) stars = 2*n - i;
          
          
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
         
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
}
void pattern21(){
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || j==0 || i==n-1||j==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
	//square_pattern();//p1
	//right_ang_triangle_left();//p2
	//number_right_ang();//p3
	//number_right_ang2();//p4
	//reverse_right_ang_triangle();//p5
	//reverse_right_ang_triangle_number();//p6
	//pyramid();//p7
	//reverse_pyramid();//p8
	//kit();//p9
	//pattern10();//p10
	//pattern11();//p11
	//pattern12();//p12
	//pattern13();//p13
	//patter14();//p14
	//patter15();//p15
	//pattern16();//p16
	//pattern17();//p17
	//pattern18();//p18
	//pattern19();//p19
	//pattern20();//p20
	//pattern21();//p21
	return 0;

}
