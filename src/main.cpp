#include <iostream>
#include "Stack.h"
#include "ReadFile.h"
using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 3) {
        Stack Stack;
        ReadFile readFile;
        string myArray[51];
        readFile.read_file(argv[1], argv[2], myArray);


        readFile.print_file(argv[2], myArray);
//        for (int i = 0; i < 51; i++) {
//            cout << myArray[i] << endl;
//        }
    }



//        linkedList =  ReadFile::readfile(argv[1],linkedList);
//        linkedList = textEditor.startTextEditor(linkedList);
//        cout << linkedList << endl;

    else{
        cout << "Check Command Line Arguments" << endl;
    }
    return 0;
}