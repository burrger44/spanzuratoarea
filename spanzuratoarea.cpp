#include <iostream>
#include <windows.h>

using namespace std;

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    char cuvant[40], litera, ghicit[40];
    int greseli = 0, lungime, da = 0;
    bool win = false;

    setcolor(0);

    cin.getline(cuvant, 40);

    system("cls");
    
    lungime = strlen(cuvant);

    for(int i = 0; i < lungime; i++){
        ghicit[i] = '_';
    }

    ghicit[lungime] = '\0';

    setcolor(15);

    while(greseli < 6 && win == false){

        cin >> litera;

        for(int i = 0; i < lungime; i++){
            if(litera == cuvant[i]){
                ghicit[i] = litera;
            }
            else{
                da++;
            }
        }
        if(da >= lungime){
            greseli++;
        }
        da = 0;

        if(greseli == 5){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |       O    " << endl;
            cout << " |      /|\\  " << endl;
            cout << " |      /     " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }
        else if(greseli == 4){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |       O    " << endl;
            cout << " |      /|\\  " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }
        else if(greseli == 3){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |       O    " << endl;
            cout << " |      /|    " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }
        else if(greseli == 2){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |       O    " << endl;
            cout << " |       |    " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }
        else if(greseli == 1){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |       O    " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }
        else if(greseli == 0){
            cout << "  _______     " << endl;
            cout << " |       |    " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << " |            " << endl;
            cout << "_|_           " << endl;
        }

        cout << ghicit << endl;

        for (int i = 0; i < lungime; i++) {
            if (ghicit[i] != cuvant[i]) {
                win = false;
                break;
            }
        }
    }

    if(greseli == 6){
        cout << "  _______     " << endl;
        cout << " |       |    " << endl;
        cout << " |       O    " << endl;
        cout << " |      /|\\  " << endl;
        cout << " |      / \\  " << endl;
        cout << " |            " << endl;
        cout << "_|_           " << endl;
        cout << "ai pierdut. cuvantul era " << cuvant;
    }

    else{
        cout << "BRAVO. cuvantul era " << cuvant;
    }
}