// CodeChef: Sum of Product 1
// link: https://www.codechef.com/JULY222D/problems/SUMOFPROD1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- )
	{
	    int n;
	    cin>>n;
	    long ans=0;
	    long count=0;
	    for( int i=0;i<n;i++ )
	    {
	        int input;
	        cin>>input;
	        if( input == 1 )
	       {
	           count++;
	       }
	       else
	       {
	           ans = ans + ( count * ( count+1 )/ 2) ;
	           count=0;
	       }
	    }
        ans = ans + ( count * ( count+1 ) / 2 );
	    cout<<ans<<endl;
	}
	return 0;
}
