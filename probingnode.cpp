#include <string>
class probingnode
{
public:
    std::string key;
    int value;
    probingnode(std::string key, int value)
      {
            this->key = key;
            this->value = value;

      }

      std::string getKey() {
            return key;
      }

      int getValue() {
            return value;
      }
};
