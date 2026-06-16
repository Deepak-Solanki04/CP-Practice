#include <iostream>
#include <vector>

int main()
{
    int t{};
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n{};
        std::cin >> n;
        std::vector<int> heights(n);
        int max{};

        for (int i = 0; i < n; i++)
        {
            std::cin >> heights[i];
            if (heights[i] >= max)
            {
                max = heights[i];
            }
        }
        std::vector<int> x(n);
        int max_x{};
        for (int i = 0; i < n; i++)
        {
            x[i] = max - heights[i];
            if (x[i] >= max_x)
            {
                max_x = x[i];
            }
        }
        std::cout << max_x + 1 << "\n";
    }
    return 0;
}
