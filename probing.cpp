#include <vector>
#include "probingnode.cpp"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
class probing
{
public:
    vector<probingnode*>theTable;
    probing()
    {
            theTable.resize(1000);
    }



    int hashFunction(std::string theString)
    {
        int sum = 0;
        for (int i = 0; i < theString.length(); i++)
        {
            sum += theString[i];
        }
        return sum % 1000;
    }

    void insert(std::string key, int value) {
            int hash = hashFunction(key);
            while (theTable[hash] != NULL && theTable[hash]->getKey() != key)
                  hash = (hash + 1) % 300;
            if (theTable[hash] != NULL)
                  delete theTable[hash];
            theTable[hash] = new probingnode(key, value);
      }



        void print()
    {
        ofstream myfile;
        myfile.open ("probingoutput.txt");
        for(int i = 0; i < theTable.size(); i++)
        {
            myfile<< i << "\n";
            probingnode* ptr = theTable.at(i);
            if (ptr != 0)
            {
                    myfile<< ptr->key<<"  ";
            }


        }
        myfile.close();

    }


};
