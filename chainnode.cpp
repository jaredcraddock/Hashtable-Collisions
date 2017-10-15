#include <string>
class chainNode {

  public:
        chainNode* next;
        std::string data;

      chainNode(std::string data, chainNode* next){
      this->data = data;
      this->next = next;
    }

};
