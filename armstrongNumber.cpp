#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int check = num;
    int ans = 0;

    while (num > 0) {
        int digit = num % 10;
        ans += digit * digit * digit;
        num /= 10;
    }
    if (ans == check) {
        cout << "Is Armstrong number !";
    } else {
        cout << " Is not Armstrong number !";
    }
}