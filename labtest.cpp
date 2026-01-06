#include<bits/stdc++.h>
using namespace std;
//write a user defined function to find first N prime numbers;
//the function should be named like : Rubel Miah_231400029;

#include <iostream>
using namespace std;

// Helper function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// User Defined Function: Finds first N prime numbers
// Function Name format: Name_ID
void Rubel_Miah_231400029(int N) {
    int count = 0;      // Counts how many primes we have found
    int num = 2;        // The number to check (starts at 2, the first prime)

    cout << "The first " << N << " prime numbers are: ";

    while (count < N) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int N;

    // Taking input from user
    cout << "Enter the value of N: ";
    cin >> N;

    // Calling the function
    Rubel_Miah_231400029(N);

    return  0;
}

int main(){


    int n;
    cout<<"Enter the number n"<<endl;
    cin>>n;
}
