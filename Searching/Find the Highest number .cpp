class Solution 
{
	public: 
	int findPeakElement(vector<int>& a)  
	{
	  int max=a[0];
	  int n=a.size();
	  for(int i=0 ; i<n ; i++)
	  {
	     if(a[i]>max)
	       max=a[i];
	     else
	       continue;
	  }    
    return max;
    }
};
