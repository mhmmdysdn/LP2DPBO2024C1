#include <iostream>
#include <string>

using namespace std;

class Clothing : public Product
{
    private:
        string size;
        string material;
        char gender;

    public:
        Clothing(){
        }

        void setSize(string size){
            this->size = size;
        }

        string getSize(){
            return this->size;
        }
        
        void setMaterial(string material){
            this->material = material;
        }

        string getMaterial(){
            return this->material;
        }

        void setGender(char gender){
            this->gender = gender;
        }

        char getGender(){
            return this->gender;
        }

        ~Clothing(){
        }
};