#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c, maiorAB, maiorABC;
    cin >> a >> b >> c;
    
    maiorAB = (a + b + abs(a - b)) / 2;
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    cout << maiorABC << " eh o maior\n";
    return 0;
}