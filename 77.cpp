// CodeChef: To Divide or Not To Divide
// link: https://www.codechef.com/JULY222D/problems/DIVAB


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- )
	{
	    int a,b,N;
	    cin>>a>>b>>N;
	    if( ( a == b || b == 1 || a%b ==0 ) )
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
             if( N % a == 0 && N % b != 0 ) //It means number is found
             {
                 cout<<N<<endl;
             }
             else // number is not found
             {
                 // so while Increase the N with +1 is not a optimize thing so what we can do? 
                 // We can increase the N by multiple of a.
                 
                 // loop run till a number N is find such that it is divisible by a OR N is not divisible by b
                 
                 // loop break when the both condition are false.
                 while( N % a != 0 || N % b == 0 ) 
                 {
                    N=((N/a)*a)+a; // Increase n with the multiple of a
                 }
                 cout<<N<<endl;
             }
	    }
	}
	return 0;
}
