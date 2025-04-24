#include <iostream>
using namespace std;

int getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);

int getTwoValues(int begin, int end)
{
    do
    {
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin)
{
    int i, j;
    for (i = begin + 1; i < 10000; i++)
    {
        for (j = 2; j < 10000; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
            if (i == j)
            {
                return j;
            }
    }
}

int getPrevPrime(int end)
{
    int i, j;
    for (i = end - 1; i > -10000; i--)
    {
        for (j = end; j > -10000 ;j--)
        {
            if (i % j == 0)
            {
                break;
            }

        }
             if (i == j)
            {
                return j;
            }
    }
}