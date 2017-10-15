//Jared Craddock
#include <iostream>
#include "chaining.cpp"
#include "probing.cpp"
#include "minheap.cpp"
using namespace std;

int hashFunction(std::string theString)
{
    int sum = 0;
    for (int i = 0; i < theString.length(); i++)
    {
        sum += theString[i];
    }
    return sum % 1000;
}


int main()
{
   chaining* table = new chaining;

   table->insert("AB");
   table->insert("BA");
   table->print();
   std::cout<<"Look in chainingoutput.txt to see chaining results" <<std::endl;

   probing aTable;

   aTable.insert("AB",hashFunction("AB"));
   aTable.insert("BA",hashFunction("BA"));
   aTable.print();
   std::cout<<"Look in probingoutput.txt to see probing results" <<std::endl;

   std::cout<<"=================================="<<std::endl;
   std::cout<<"Heap Test"<<std::endl;
   std::cout<<"=================================="<<std::endl;
   minHeap a;
   a.populate(5);
   a.populate(59);
   a.populate(2);
   a.populate(8);
   a.removeMin();

    return 0;
}






