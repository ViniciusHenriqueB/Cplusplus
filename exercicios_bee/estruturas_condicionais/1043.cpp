#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);

    if (a+b > c && a+c > b && b+c > a) {
        float perimetro = a + b + c;    
        cout << "Perimetro = " << perimetro << "\n"; 
    } else {
        float area = (a + b) * c / 2;
        cout << "Area = " << area << "\n";
    }
    
    return 0;
}