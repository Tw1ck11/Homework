// Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int random(int min, int max) {
    int n = min + rand() % (max - min + 1);
    return n;
}

int main()
{
    //TASK 1
    int num, i = 1, j = 0;

    cin >> num;

    for (; i <= num; i++) {
        if (num % i == 0) {
            j++;
        }
    }
    if (j == 2) {
        cout << "Prime number" << endl;
    }
    else {
        cout << "Composite number" << endl;
    }

    //TASK 2
    int number, a, b;

    cin >> number;

    for (;;) {
        a = number % 10;
        b = number % 100 / 10;
        if (a == b) {
            cout << "Same numbers are in a row" << endl;
            break;
        }
        number /= 10;
        if (number == 0) {
            break;
        }
    }
    if (a != b) {
        cout << "Same numbers are not in a row" << endl;
    }

    //TASK 3
    int numeric, x, y, k = 0;

    cin >> numeric;

    for (;;) {
        x = numeric % 10;
        y = numeric % 100 / 10;
        if (x < y) {
            cout << "Numbers are in descending order" << endl;
            k++;
            break;
        }
        numeric /= 10;
        if (numeric == 0) {
            break;
        }
    }
    if (k == 0) {
        cout << "Numbers are in non-descending order" << endl;
    }

    //TASK 4
    int eight_digits_number = 10000000, c, d, e, f, g, h, l, m, i1 = 0;

    for (;eight_digits_number <= 99999999; eight_digits_number++) {

        if (eight_digits_number % 12345 == 0) {

            c = eight_digits_number % 10;
            d = eight_digits_number % 100 / 10;
            e = eight_digits_number % 1000 / 100;
            f = eight_digits_number % 10000 / 1000;
            g = eight_digits_number % 100000 / 10000;
            h = eight_digits_number % 1000000 / 100000;
            l = eight_digits_number % 10000000 / 1000000;
            m = eight_digits_number % 100000000 / 10000000;

            if (c != d && c != e && c != f && c != g && c != h && c != l && c != m && d != e && d != f && d != g && d != h && d != l && d != m && e != f && e != g && e != h && e != l && e != m && f != g && f != h && f != l && f != m && g != h && g != l && g != m && h != l && h != m && l != m) {
                cout << eight_digits_number << endl;
                i1++;
            }
        }
    }
    cout << i1 << endl;

    //TASK 5
    int num1, pos = 0, neg = 0, zeros = 0, even = 0, odd = 0;

    for (;;) {

        srand(time(NULL));

        for (int i2 = 0; i2 < 100; i2++) {

            num1 = random(-100, 100);

            if (num1 > 0) {
                pos++;
            }
            else if (num1 < 0) {
                neg++;
            }
            else {
                zeros++;
            }
            if (num1 % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        break;
    }

    cout << "Positive numbers: " << pos << "%" << endl;
    cout << "Negative numbers: " << neg << "%" << endl;
    cout << "Zeros: " << zeros << "%" << endl;
    cout << "Even numbers: " << even << "%" << endl;
    cout << "Odd numbers: " << odd << "%" << endl;
}