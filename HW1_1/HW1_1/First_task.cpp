#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));

    int throws;
    const int sides = 6;
    cout << "Enter number of throws:" << endl;
    cin >> throws;
    cout << "Result:" << endl;
    int arr[sides] = { 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < throws; i++)
    {
        int dice_value = 1 + rand() % sides;
        arr[dice_value - 1]++;
        cout << dice_value; cout << endl;
    }
    for (const auto& e : arr) {
        cout << e;
    }
    cout << endl;

    cout << "Number 1 - " << arr[0] << " times" << endl;
    cout << "Number 2 - " << arr[1] << " times" << endl;
    cout << "Number 3 - " << arr[2] << " times" << endl;
    cout << "Number 4 - " << arr[3] << " times" << endl;
    cout << "Number 5 - " << arr[4] << " times" << endl;
    cout << "Number 6 - " << arr[5] << " times" << endl;


    int mmax = arr[0];
    for (int i = 0; i < 6; i++)
        if (mmax < arr[i])  mmax = arr[i];
    if (arr[0] == mmax)
        cout << "Maximum was number 1" << endl;
    if (arr[1] == mmax)
        cout << "Maximum was number 2" << endl;
    if (arr[2] == mmax)
        cout << "Maximum was number 3" << endl;
    if (arr[3] == mmax)
        cout << "Maximum was number 4" << endl;
    if (arr[4] == mmax)
        cout << "Maximum was number 5" << endl;
    if (arr[5] == mmax)
        cout << "Maximum was number 6" << endl;

    int mmin = arr[0];
    for (int i = 0; i < 6; i++)
        if (mmin > arr[i])  mmin = arr[i];
    if (arr[0] == mmin)
        cout << "Minimum was number 1" << endl;
    if (arr[1] == mmin)
        cout << "Minimum was number 2" << endl;
    if (arr[2] == mmin)
        cout << "Minimum was number 3" << endl;
    if (arr[3] == mmin)
        cout << "Minimum was number 4" << endl;
    if (arr[4] == mmin)
        cout << "Minimum was number 5" << endl;
    if (arr[5] == mmin)
        cout << "Minimum was number 6" << endl;

    return 0;
}