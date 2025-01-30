#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decodeFile(const string& inputFilename,const string& outputFilename,int shift){
    encodeFile(inputFilename,outputFilename,-shift);
}
