#include <iostream>
using namespace std;
// Двумерные массивы

int main() {
    const int ROWS = 5;
    const int COLS = 8;

    int arr[ROWS][COLS]
    {
        {10,20,30,40},
        {100,200,300,400}
    };

    for (int i = 0;i < ROWS; ++i)
    {
        for (int j = 0;j < COLS; ++j)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0;i < ROWS; ++i)
    {
        for (int j = 0;j < COLS; ++j)
        {
            cout << arr[i][j] << endl;
        }
    }
}
