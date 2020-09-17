// Full C++ Tutorial

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <sstream>
#include <vector>
#include <numeric>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    ofstream writeToFile;
    ifstream readFromFile;
    string txtToFile = "";
    string txtFromFile = "";

    writeToFile.open("text.txt", ios_base::out | ios_base::trunc);
    if(writeToFile.is_open())
    {
        writeToFile << "Beginning of the file\n";
        cout << "Enter data to write : ";
        getline(cin, txtToFile);
        writeToFile << txtToFile;
        writeToFile.close();
    }

    readFromFile.open("text.txt", ios_base::in);
    if(readFromFile.is_open())
    {
        while(readFromFile.good())
        {
            getline(readFromFile, txtFromFile);
            cout << txtFromFile << endl;
        }
        readFromFile.close();
    }
    
    return 0;
}