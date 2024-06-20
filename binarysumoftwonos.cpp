#include <iostream>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (a & b); // Calculate carry
            a = a ^ b; // Calculate sum without carry
            b = carry << 1; // Shift carry to the left
        }
        return a;
    }
};

int main() {
    Solution solution;

    int a, b;
    while (cin >> a >> b) {
        int result = solution.getSum(a, b);
        cout << result << endl;
    }

    return 0;
}
