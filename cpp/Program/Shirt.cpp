#include <iostream>
#include <string>

using namespace std;

class Shirt : public Clothing
{
private:
    string color;
    string sleeveType;

public:
    Shirt(){
    }

    void setColor(string color){
        this->color = color;
    }

    string getColor(){
        return this->color;
    }

    void setSleeveType(string sleeveType){
        this->sleeveType = sleeveType;
    }

    string getSleeveType(){
        return this->sleeveType;
    }

    ~Shirt(){
    }
};