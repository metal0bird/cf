#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
  
int maxProfit(int price[], int start, int end)
{
  

    if (end <= start)
        return 0;
  

    int profit = 0;
  

    for (int i = start; i < end; i++) {
  

        for (int j = i + 1; j <= end; j++) {
  

            if (price[j] > price[i]) {
  

                int curr_profit
                    = price[j] - price[i]
                      + maxProfit(price, start, i - 1)
                      + maxProfit(price, j + 1, end);
  

                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
  

int main()
{
    int price[] = { 10, 2, 5,1 , 6,7, 8 };
    int n = sizeof(price) / sizeof(price[0]);
  
    cout << maxProfit(price, 0, n - 1);
  
    return 0;
}