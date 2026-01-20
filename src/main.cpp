#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int row = 1; row <= height; row++)
    {
        // Print leading spaces
        for (int space = 1; space <= height - row; space++)
        {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
