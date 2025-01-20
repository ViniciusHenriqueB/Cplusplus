#include <iostream>
using namespace std;

int* GetAscii(char ch) {
    int* p = new int {ch};
    return p;
}

int main() {
    int* pAscii = GetAscii('A');
    cout << *pAscii << endl;

    // Esqueceu de deletar a memória alocada pela função antes de alocar novamente, memória vazada
    
    pAscii = GetAscii('Z');
    cout << *pAscii << endl;
    
    return 0;
}