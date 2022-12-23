#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <bits/stdc++.h>
using namespace std;


int mostFrequent(int* arr, int n)
{
    
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
    
    sort(arr, arr + n);
 
    
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
int count[6]{0,0,0,0,0,0};

cout << "Input throw times of cube : ";
cin >> throwtimes;
int arr[throwtimes];
for( i=0; i<throwtimes; i++){
  number = 1 + (rand() % 6); 
  
   arr[i] = number;
cout << "Number: " << number << "    Throwtimes: " << i << endl;
    if (arr[i]==1)
        count[0]++;

    if (arr[i]==2)
        count[1]++;

    if (arr[i]==3)
        count[2]++; 
    
    if (arr[i]==4)
        count[3]++; 

    if (arr[i]==5)
        count[4]++;

    if (arr[i]==6)
        count[5]++;         
}



cout <<"Number of side  1: " << count[0] << endl;
cout <<"Number of side  2: " << count[1] << endl;
cout <<"Number of side  3: " << count[2] << endl;
cout <<"Number of side  4: " << count[3] << endl;
cout <<"Number of side  5: " << count[4] << endl;
cout <<"Number of side  6: " << count[5] << endl;
cout <<"The most: " <<  mostFrequent(arr, throwtimes) << endl;
cout <<"The least: " << leastFrequent(arr, throwtimes)<< endl;



int month;
cout << "Enter the month number: ";
cin >> month;
switch (month)
{
case 1:

    cout << "January" << endl;
    cout << "31 day"<< endl;
    break;


case 2:

    cout << "February" << endl;
    cout << "28/29 days"<< endl;
    break;


case 3:

    cout << "March" << endl;
    cout << "31 day"<< endl;
    break;


case 4:

    cout << "April" << endl;
    cout << "30 day"<< endl;
    break;


case 5:

    cout << "May" << endl;
    cout << "31 day"<< endl;
    break;


case 6:

    cout << "June" << endl;
    cout << "30 day"<< endl;
    break;


case 7:

    cout << "July" << endl;
    cout << "31 day"<< endl;
    break;


case 8:

    cout << "August" << endl;
    cout << "31 day"<< endl;
    break;


case 9:

    cout << "September" << endl;
    cout << "30 days" << endl;
    break;



case 10:

    cout << "October" << endl;
    cout << "31 day" << endl;
    break;


case 11:

    cout << "November" << endl;
    cout << "30 days" << endl;
    break;


case 12:

    cout << "December" << endl;
    cout << "31 days" << endl;
    break;



}
}