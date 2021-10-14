#include <stdexcept>
#include <iostream>
#include <map>


class Song
{
public:
    Song(std::string name): name(name), nextSong(NULL) {}
    
    void next(Song* song)
    {
        this->nextSong = song;
    }

    bool isRepeatingPlaylist()
    {
        // throw std::logic_error("Waiting to be implemented");
        Song* current = this;
        std::map<std::string, int> countMap;
        for (; current != NULL; current = current->nextSong) {
            auto result = countMap.insert(std::pair<std::string, int>(current->name, 1));
            if (result.second == false)
            {
                return true;
            }
        }
        
        return false;
    }

private:
    const std::string name;
    Song* nextSong;
};

#ifndef RunTests
int main()
{
    Song* first = new Song("Hello");
    Song* second = new Song("Eye of the tiger");
    
    first->next(second);
    second->next(first);

    std::cout << std::boolalpha << first->isRepeatingPlaylist();
}
#endif