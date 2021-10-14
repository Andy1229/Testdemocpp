#include <stdexcept>
#include <iostream>
#include <deque>

class TrainComposition
{
private:
    
    std::deque<int> train;

public:
    void attachWagonFromLeft(int wagonId)
    {
        // throw std::logic_error("Waiting to be implemented");
        train.push_front(wagonId);
    }

    void attachWagonFromRight(int wagonId)
    {
        // throw std::logic_error("Waiting to be implemented");
        train.push_back(wagonId);
    }

    int detachWagonFromLeft()
    {
        // throw std::logic_error("Waiting to be implemented");
        int result = train.front();
        train.pop_front();
        return result;
    }

    int detachWagonFromRight()
    {
        // throw std::logic_error("Waiting to be implemented");
        int result = train.back();
        train.pop_back();
        return result; 
    }
};

#ifndef RunTests
int main()
{
    TrainComposition train;
    train.attachWagonFromLeft(7);
    train.attachWagonFromLeft(13);
    std::cout << train.detachWagonFromRight() << "\n"; // 7 
    std::cout << train.detachWagonFromLeft(); // 13
}
#endif