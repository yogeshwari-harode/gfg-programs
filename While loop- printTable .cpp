class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        while(multiplier)
        {
           if(multiplier>=1)
           cout<<n*multiplier<<" ";
           multiplier--;
        }
        
        cout<<endl;
    }  
};
