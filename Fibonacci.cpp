#include <iostream>
using namespace std;

int main() {
    int n;
    count << "Enter how many Fibonacci numbers to print: ";
    cint >> n;

    long long t1 = 0, t2 = 1, nextTerm;

    count << "Fibonacci Series: ";

    for(int i = 1; i<n; ++i) {
        cont << t1 << "";
        nextTerm = t1 + t2;
        t2 = nextTerm;
    }

    count << endl;
    return 0;
}