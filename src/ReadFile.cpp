//
// Created by mark- on 2023-01-22.
//
#include <iostream>

#include <string>

#include <fstream>
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include "ReadFile.h"
#include "Stack.h"

using namespace std;

void ReadFile::readfile(std::string inFile, std::string outFile, std::string *array) {
    try {
        char character; // declaring string
        ifstream myFileIn; // file in stream reading only
        ofstream myFileOut; //  file out stream writing only
        myFileIn.open("../tests/"+ inFile, ios::in | ios::out);// original txt file
        //char myArray[51][51];
        string line;
        // open for writing
        if (myFileIn.is_open()) {
            cout << "File Open" << endl; // confirmation of successful file open
            int counter = 0;
            while (!myFileIn.eof()) {// continue until end of file
                getline(myFileIn,line);
//                for(int i = 0;i < 51; i++){
                //line = array[counter];
                array[counter] = line;
                counter++;
//                    }

            }

            myFileIn.close(); // closing file in stream

            cout << "File closed" << endl;

        } else {
            cout << "Input file failed to open. Will make new File on Exit." << endl;

        }
//
    }
//        catch (MyException& e) {
//            cout << e.error() << endl;
//        }
    catch (exception &e) {
        cout << "Generic error" << endl;
    }
    catch (...) {
        cout << "General error" << endl;
    }
}
