#include <stdio.h>
int main()
{
    int allnum = 1, num, allnum1, i, x = 0;
    int min = 0, max = 0, sum = 0;
    double avg, sum1;
    while (allnum != 0)
    {
        scanf("%d", &allnum);
        if (allnum != 0)
        {
            for (i = 1; i <= allnum; i++)
            {
                scanf("%d", &num);
                if (max == 0 && min == 0)
                {
                    max = min = num;
                }
                if (num > max)
                {
                    max = num;
                }
                if (num < min)
                {
                    min = num;
                }
                sum += num;
            }
            allnum1 = allnum;
            sum1 = sum;
            avg = sum1 / allnum1;
            printf("Case %d:\n", ++x);
            printf("max=%d\nmin=%d\nsum=%d\navg=%.2f\n", max, min, sum, avg);
            sum = 0;
            min = 0;
            max = 0;
        }
        else if (allnum == 0)
            break;
    }
}