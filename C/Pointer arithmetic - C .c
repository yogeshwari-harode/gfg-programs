void print_array(int *arr, int n)
{
    int *ptr;
    ptr=&arr[0];
   
    for(int i = 0; i < n; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
