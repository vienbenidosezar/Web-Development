#include<iostream> 
#include<fstream>
#include<string>

using namespace std;

int main() {
    fstream myFile;
    myFile.open("supra.txt", ios::out);
    if(myFile.is_open()){
        myFile <<"hi po";
        myFile << "hello po";
        myFile.close();
    }


    return 0;
}