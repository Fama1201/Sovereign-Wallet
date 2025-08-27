#include <iostream>
#include "KeyManager.h"


int main(){

    KeyManager km;
    std::cout << "Mnemonic seed" << km.generateMnemonic() << std::endl;
    return 0;

    
}