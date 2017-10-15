#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
class minHeap
{

public:
    priority_queue<int,vector<int>,greater<int> > theQueue;
    void populate(int num)
    {
        theQueue.push(num);
    }

    void removeMin()
    {
        if (!theQueue.empty())
        {
            cout << "removing " << theQueue.top() << ' ';
            theQueue.pop();
            cout << endl;
        }

    }





};




