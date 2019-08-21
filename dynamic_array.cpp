
#include <iostream>
#include <array>

int main() {
    /*int *dArray;
    dArray = new int[100];*/

    std::array< int, 100> dArray;
    dArray[0]=1;
    dArray[1]=2;
    dArray[2]=4;
    dArray[3]=6;
    
    for (int i=0; i < 4; i++){
        std::cout<< dArray[i] <<  "\n";
    }
    
//    delete [] dArray;
//    dArray = NULL;
}


