#include <iostream>
using namespace std;


void printIndent(int depth) {
    if (depth <= 0) {
        return;
    }
    cout << "|--";
    printIndent(depth - 1);
}


int fib(int n, int depth) {

    printIndent(depth);
    cout << "SEARCH fib(" << n << ")" << '\n';

    if (n == 1 || n == 2) {
        int result = 1;
      
        printIndent(depth);
        cout << "GET fib(" << n << ") = " << result << '\n';
        return result;
    }


    int x = fib(n - 1, depth + 1);
    int y = fib(n - 2, depth + 1);
    int result = x + y;


    printIndent(depth);
    cout << "GET fib(" << n << ") = " << result << '\n';

    return result;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n, 0);
    cout << ans << '\n';

    return 0;
}
