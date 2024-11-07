#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double media, n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2 + n2*3 + n3*4 + n4) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << "\n";

    if (media >= 7) {
        cout << "Aluno aprovado.\n";
    } else if (media >= 5) {
        cout << "Aluno em exame.\n";
        double nota_exame, media_final;
        cin >> nota_exame;

        cout << "Nota do exame: " << nota_exame << "\n";

        media_final = (media + nota_exame) / 2;

        if (media_final >= 5) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        } 

        cout << "Media final: " << media_final << "\n";
    } else {
        cout << "Aluno reprovado.\n";
    }

    return 0;
}