#include <iostream>
using namespace std;

int main()
{

    // Флаг USA
    int height = 26;
    int width = 30;
    
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (x < 13 && y < 14)
            {
                if (x % 2 == 1 && y % 2 == 1 && y != 13)
                {
                    cout << "⬜";
                }
                else
                {
                    cout << "🟦";
                }
            }
            else
            {
                if (y % 4 == 0 || y % 4 == 1)
                    cout << "🟥";
                else
                    cout << "⬜";
            }
        }
        cout << "\n";
    }
}
