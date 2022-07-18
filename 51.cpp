// GFG: First negative integer in every window of size k
// link: https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?page=1&difficulty[]=0&category[]=Arrays&curated[]=7&sortBy=submissions


vector<long long> printFirstNegativeInteger(long long int A[],
    long long int N, long long int K) 
{
    vector<long long> ans;
    queue<long long> q;
    for( int i=0;i<K;i++ )
    {
        if( A[i] < 0 )
        {
            q.push(A[i]);
        }
    }
    for( int i=K;i<=N;i++ )
    {
        if( q.empty() )
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(q.front());
        }
        
        if( A[i-K] == q.front() )
        {
            q.pop();
        }
        if( A[i] < 0 )
        {
            q.push(A[i+K]);
        }
    }
    return ans;
 }
