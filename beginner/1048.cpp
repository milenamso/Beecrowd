/*
This problem is very simple because it only increases the salary by a percentage. The percentage depends on the salary range
the complexity is O(1):
 - It only reads one input value (the salary).
 - It performs a fixed number of comparisons (if/else if), arithmetic operations, and prints three lines.
 - There are no loops or recursion, so the number of operations does not grow with the input size.
 - Time complexity: O(1) → constant time, since execution does not depend on the input size.
 - Space complexity: O(1) → constant memory, because only a few variables are used.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    double s; 
    cin >> s;

    int pct;
    if (s <= 400.00)       pct = 15;
    else if (s <= 800.00)  pct = 12;
    else if (s <= 1200.00) pct = 10;
    else if (s <= 2000.00) pct = 7;
    else                   pct = 4;

    double reaj = s * pct / 100.0;
    double novo = s + reaj;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novo << '\n';
    cout << "Reajuste ganho: " << reaj << '\n';
    cout << "Em percentual: " << pct << " %" << '\n';
    return 0;
}
