#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int throws;
    const int sides { 6 };
    cout << "Enter number of throws:" << endl;
    cin >> throws;
    cout << "Result:" << endl;
    int arr[sides]{};

        for (int i{}; i < throws; i++)
        {
            int dice_value = rand() % sides + 1;
            arr[dice_value - 1]++;
        }
        for (int i {}; i < sides; i++) {
            cout << "Number " << i + 1 << " was " << arr[i] << " times" << endl;
        };

        int finded_max{ 0 };
        int finded_min{ 0 };
        
        int mmax{ 0 };
        int mmin{ 0 };

        for (int i{}; i < sides; i++) {
          if (mmax <= arr[i]) {
              finded_max = i+1;
              mmax = arr[i];
        }
         if (mmin >= arr[i]) {
               finded_min = i+1;
               mmin = arr[i];
          }
   }

        cout << "Maximum was number " << finded_max << endl;
        cout << "Minimum was number " << finded_min << endl;

        return 0;
}

