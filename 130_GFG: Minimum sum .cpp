// GFG: Minimum sum
// link: https://practice.geeksforgeeks.org/problems/minimum-sum4058/1?page=2&difficulty[]=1&status[]=unsolved&category[]=Arrays&category[]=Strings&sortBy=submissions


class Solution{   
private:
string findSum(string X, string Y) {
        string ans;
        int carry=0;
        int sum=0;
        int i = X.length() - 1;
        int j = Y.length() - 1;
        while( i>=0 && j>=0 )
        {
            sum = (X[i]-'0') + (Y[j]-'0') + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans += (sum + '0');
            i--; j--;
        }
        
        while( i>=0 )
        {
            sum = (X[i]-'0') + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans += (sum + '0');
            i--; 
        }
        while( j>=0 )
        {
            sum = (Y[j]-'0') + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans += (sum + '0');
            j--;
        }
        while( carry )
        {
            sum = carry;
            carry = sum / 10;
            sum = sum % 10;
            ans += (sum + '0');
        }
        
        reverse( ans.begin(), ans.end() );
        int k=0;
        while( k < ans.length() )
        {
            if( ans[k] == '0')
            {
                j++;
            }
            else
            {
                break;
            } 
            k++;
        }
        if( k == ans.size() )
        {
            ans ='0';
            return ans;
        }
        ans.erase(0,k);
        
        
        return ans;
    }
public:
    string solve(int arr[], int n) {
        // code here
        sort( arr, arr+n );
        string s1, s2;
        for( int i=0;i<n;i++ )
        {
            if( i%2 == 0 )
            {
                s1 += (arr[i] + '0');
            }
            else
            {
                s2 += ( arr[i] +'0' );
            }
        }
        return findSum( s1, s2 );
        
    }
};
