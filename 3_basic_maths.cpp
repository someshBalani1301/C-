#include <bits/stdc++.h>
using namespace std;

// Striver DSA sheet

int countDigits(int n){
    // Write your code here.
    int star = n;
    int rem;
    int count = 0;

    while(star) {
        rem = star % 10;
        if(rem != 0 && n % rem == 0) {
            count++;
        }
        star/=10;
    }

    return count;

}

int reverse(int x) {
    long res = 0;
    while(x != 0) {
        int lastDigit = x%10;
        res = (res*10) + lastDigit;
        x/=10;
    }

    if(res > INT_MAX || res < INT_MIN) return 0;

    return res;
}

bool palindrome (int x) {
    if(x < 0) return false;
    int ini = x;
    long rev = 0;
    while(x!=0) {
        rev = (rev*10) + x%10;
        x/=10;
    }

    if(rev > INT_MAX || rev < INT_MIN) return false;

    return rev == ini;
}

int calcGCD(int n, int m){
    // Write your code here.
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n%i == 0 && m%i == 0) {
            gcd = i;
        }
    }

    cout << gcd;
    return 0;
}

bool checkArmstrong(int n){
    //Write your code here
    int i = n;
    int sum = 0;
    int count = 0;
    int temp = n;

    while(temp != 0) {
        count++;
        temp /= 10;
    }

    while(n != 0) {
        int lastDigit = n%10;
        sum += pow(lastDigit, count);
        n /= 10;
    }

    return sum == i;

}

int sumOfAllDivisors(int n){
    // Write your code here.
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i*(n/i);
    }   
    return sum;
}

bool isPrime(int n)
{
    // Write your code here.
    if(n <= 1) return false;

    for(int i = 2; i*i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}


int main () {
    int n;
    int m;
    cin >> n >> m;
    // cout << n << m << endl;
    calcGCD(n, m);
    
    return 0;
}
