// CodeChef: Hungry Chef
// link: https://www.codechef.com/JULY222D/problems/BURGERS2

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- )
	{
	    int a,b,n,r;
	    cin>>a>>b>>n>>r;
	    
	    if( r/a < n )
	    {
	        cout<<-1<<endl;
	    }
	    else if( r/b >= n )
	    {
	        cout<<0<<" "<<n<<endl;
	    }
	    else
	    {
	        int temp1 = b*n;
    	    int temp2 = a-b;
    	    int k = ( r -temp1 ) / temp2;
    	    if( ( r -temp1 ) % temp2 !=0 )
    	    {
    	        k=k+1;
    	        cout<<k<<" "<<n-k<<endl;
    	    }
    	    else
    	    {
    	        cout<<k<<" "<<n-k<<endl;
    	    }
	        
	    }
	    
	    
	    
	}
	return 0;
}
