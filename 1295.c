int findNumbers(int *nums, int numsSize)
{
    int     num, count, ans;

    num = 0;
    count = 0;
    ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        num = nums[i];
        while (num > 0)
        {
            num /= 10;
            count++;
        }
        if (count % 2 == 0)
            ans++;
        count = 0;
        num = 0;
    }
    return count;
}