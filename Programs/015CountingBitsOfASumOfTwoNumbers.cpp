#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n!=0) {
        int bits = n & 1;
         n = n >> 1;
        if(bits == 1){
            count = count + 1;
        }
    }
    return count;
}

int main() {
    int a,b;
    cout << "Enter two decimal numer To calculate total set Bits: ";
    cin >> a >> b;
    int SetBits = countSetBits(a) + countSetBits(b);
    cout << "Number of set bits are " << SetBits <<endl;
    return 0;
}