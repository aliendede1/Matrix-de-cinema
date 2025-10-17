 #include <iostream>
using namespace std;

int main(){
    int matrix[3][3];
    int l,c;
    int v,celta,uno;
    char vt;
    // matrix
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 0;

    matrix[1][0] = 0;
    matrix[1][1] = 0;
    matrix[1][2] = 0;

    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 0;
    // gays?
    do {
    cout << "Linha?\n";
    cin >> l;
    cout << "Coluna?\n";
    cin >> c;
    celta = matrix[l][c];
    uno = celta;
    cout << "Qual vc quer? 1 ou 2" << endl;
    cin >> v;
    if (v == 1){
        if (celta < 1 ){
             cout << "Logar vago!" << endl;
        } else {
            cout << "Lugar já ocupado" << endl;
    } 
    } else if (v == 2){
        cout << "Qual você deseja ocupar? 0 pra N | 1 pra S ?\n";
        cin >> uno;
        cout << "Lugar rezerdaodo com susseso\n";
    } else {
        break;
    }

} while (vt = 'S');
    return 0;   
}
