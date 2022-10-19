#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <bits/stdc++.h>
using namespace std;


int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
 
    return element_having_max_freq;
}

int leastFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // find the min frequency using linear traversal
    int min_count = n+1, res = -1, curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count < min_count) {
                min_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
  
    // If last element is least frequent
    if (curr_count < min_count)
    {
        min_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}
 

int main()
{
int number;
int throwtimes;
int i;
int most;
int least;
int count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;

cout << "Введіть кількість кидків кубика: ";
cin >> throwtimes;
int arr[throwtimes];
for( i=0; i<throwtimes; i++){
  number = 1 + (rand() % 6); 
  //cout << "number = " << number << endl;
   arr[i] = number;
cout << "Number: " << number << "    Throwtimes: " << i << endl;
    if (arr[i]==1)
        count1++;

    if (arr[i]==2)
        count2++;

    if (arr[i]==3)
        count3++;    
    
    if (arr[i]==4)
        count4++; 

    if (arr[i]==5)
        count5++; 

    if (arr[i]==6)
        count6++;         
}



cout <<"Кількість сторін 1: " << count1 << endl;
cout <<"Кількість сторін 2: " << count2 << endl;
cout <<"Кількість сторін 3: " << count3 << endl;
cout <<"Кількість сторін 4: " << count4 << endl;
cout <<"Кількість сторін 5: " << count5 << endl;
cout <<"Кількість сторін 6: " << count6 << endl;
cout <<"Більше всього: " <<  mostFrequent(arr, throwtimes) << endl;
cout <<"Менше всього: " << leastFrequent(arr, throwtimes)<< endl;



int month;
cout << "Введіть номер місяця: ";
cin >> month;
switch (month)
{
case 1:

    cout << "Січень" << endl;
    cout << "31 день"<< endl;
    break;


case 2:

    cout << "Лютий" << endl;
    cout << "28/29 днів"<< endl;
    break;


case 3:

    cout << "Березень" << endl;
    cout << "31 день"<< endl;
    break;


case 4:

    cout << "Квітень" << endl;
    cout << "30 днів"<< endl;
    break;


case 5:

    cout << "Травень" << endl;
    cout << "31 день"<< endl;
    break;


case 6:

    cout << "Червень" << endl;
    cout << "30 днів"<< endl;
    break;


case 7:

    cout << "Липень" << endl;
    cout << "31 день"<< endl;
    break;


case 8:

    cout << "Серпень" << endl;
    cout << "31 день"<< endl;
    break;


case 9:

    cout << "Вересень" << endl;
    cout << "30 днів" << endl;
    break;



case 10:

    cout << "Жовтень" << endl;
    cout << "31 день" << endl;
    break;


case 11:

    cout << "Листопад" << endl;
    cout << "30 днів" << endl;
    break;


case 12:

    cout << "Грудень" << endl;
    cout << "31 день" << endl;
    break;



}
}