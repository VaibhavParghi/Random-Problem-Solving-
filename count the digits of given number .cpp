#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while (n!=0){
        n=n/10;
        count++;
    }
  cout<<count<<endl;
    return 0;
}
/*
Here’s a dry run of the code:

Initialize Variables:

n (number of digits to process)
count (counter to keep track of digits)
Input Value:

Read an integer value into n.
Loop:

While n is not zero:
Divide n by 10 (removes the last digit).
Increment count by 1.
Output Result:

Print the value of count (total number of digits).
Example:
If n = 12345:

Loop 1: n = 1234, count = 1
Loop 2: n = 123, count = 2
Loop 3: n = 12, count = 3
Loop 4: n = 1, count = 4
Loop 5: n = 0, count = 5
Output: 5 (number of digits in 12345).

*/