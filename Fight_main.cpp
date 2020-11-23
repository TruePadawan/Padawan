#include <iostream>
#include <string>

#include "Fight.h"

using namespace std;

int main(){
    cout << "This is A Game" << endl;
    cout << "===============" << endl;
    Fight Player;
    Char_create(Player);
    Fight camp{Fight {"Male", "Caesilius"}};
    return 0;
}
