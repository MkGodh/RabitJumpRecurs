#include <iostream>
#include <vector>

int recJump(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    int ways = 0;

    for (int i = 1; i <= k; ++i)
    {
        ways += recJump(n - i, k);
    }

    return ways;
}

int main()
{
    int n;
    int k;

    std::cout << "Please, input step number: " << std::endl;
    std::cin >> n;
    std::cout << "Please, input max jump length: " << std::endl;
    std::cin >> k;



    std::cout << "The ways rabbit can reach point: " << n << " with jumps up to " << k << " is : " << recJump(n, k) << std::endl;

    return 0;
}
