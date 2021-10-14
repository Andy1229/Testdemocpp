#include <vector>
#include <stdexcept>
#include <iostream>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    //throw std::logic_error("Waiting to be implemented");
    auto result = std::lower_bound(std::begin(sortedVector), std::end(sortedVector), lessThan);

    // return the distance between two iterators
    return std::distance(std::begin(sortedVector), result);
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif