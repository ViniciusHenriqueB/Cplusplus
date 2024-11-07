#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qcasos, total = 0, coelho = 0, rato = 0, sapo = 0, q;
    char tipo;
    cin >> qcasos;


    for (int i = 0; i < qcasos; i++) {
        cin >> q >> tipo;
        total += q;

        if (tipo == 'C') {
            coelho += q;
        } else if (tipo == 'R') {
            rato += q;
        } else {
            sapo += q;
        }
    }

    double perc_coelho = 100.0 / total * coelho;
    double perc_rato = 100.0 / total * rato;
    double perc_sapo = 100.0 / total * sapo;

    cout << fixed << setprecision(2);
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";

    cout << "Percentual de coelhos: " << perc_coelho << " %\n";
    cout << "Percentual de ratos: " << perc_rato << " %\n";
    cout << "Percentual de sapos: " << perc_sapo << " %\n";

    return 0;
}