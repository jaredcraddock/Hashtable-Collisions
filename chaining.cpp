#include <iostream>
#include <vector>
#include "chainnode.cpp"
#include <string>
#include <fstream>

using namespace std;
class chaining
{
public:
    vector<chainNode*>* linkedListVector;
    chaining()
    {
        linkedListVector = new vector<chainNode*>(1000);
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

    void insert(std::string data)
    {
        int index = hashFunction(data);
        if(linkedListVector->at(index) == 0)
        {
            linkedListVector->at(index) = new chainNode(data,0);
            return;
        }
        chainNode* ptr = linkedListVector->at(hashFunction(data));
        while(ptr != 0)
        {
            if(ptr->next == 0)
            {
                ptr->next = new chainNode(data,0);
                break;
            }
            ptr = ptr->next;
        }
    }



    void print()
    {
        ofstream myfile;
        myfile.open ("chainingoutput.txt");
        for(int i = 0; i < linkedListVector->size(); i++)
        {
            myfile<< i << "\n";
            chainNode* ptr = linkedListVector->at(i);
            while(ptr != 0)
            {
                myfile<< ptr->data<<"  ";
                ptr = ptr->next;

            }

        }
        myfile.close();
    }
};
