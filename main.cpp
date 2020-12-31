#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main() {
    int n1=10 , n2=20, f=1;
    int sm = 2520;/*smallest number that can be divided by each of the numbers from 1 to 10 without any remainder*/
    bool flag;
    
    sm *= 2;

    for(int i = n1+1; i < n2; ++i) {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag)
            f*=i;
            //cout<< i << " ";
    }
    
    cout<<endl<< "If 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. then "<< f*sm<<" is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 " <<endl;
}



int checkPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    
    else {
        for(int j = 2; j <= n/2; ++j) {
            if (n%j == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
