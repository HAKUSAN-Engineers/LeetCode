int xorOperation(int n, int start)
{
    int i, sum;
 
    for(i = 0, sum = 0; i < n; i++)
        sum = (start + 2 * i) ^ sum;
    return sum;
}