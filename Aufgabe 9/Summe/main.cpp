#include <iostream>

/**
 * Returns a recursively added result.
 *
 * @param num
 * @return
 */
int sum(int num);

int main()
{
    std::cout << sum(10);
    return 0;
}

int sum(int num)
{
    int result{0};

    for (int i = 0; i <= num; ++i) {
        result += i;
    }

    return result;
}
