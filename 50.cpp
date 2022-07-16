// GFG: First and last occurrences of x
// link: https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=3&category%5B%5D=Arrays&sortBy=submissions

vector<int> find(int arr[], int n , int x )
{
    // code here
    int s=0;
    int e = n;
    vector<int> v;
    int minIndex=INT_MAX, maxIndex=-1;
    while( s <= e )
    {
        int mid = s + (e -s)/2;
        
        if( arr[mid] == x )
        {
            if( minIndex > mid )
            {
                minIndex = mid;
            }
            e = mid-1;
        }
        else if( arr[mid] > x )
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    if( minIndex == INT_MAX )
    {
        v.push_back(-1);
    }
    else
    {
        v.push_back(minIndex);
    }
    s =0;
    e=n;
    while( s <= e )
    {
        int mid = s + (e -s)/2;
        
        if( arr[mid] == x )
        {
            if( maxIndex < mid )
            {
                maxIndex = mid;
            }
            s = mid+1;
        }
        else if( arr[mid] > x )
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    v.push_back(maxIndex);
    return v;
}
