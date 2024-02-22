#include <iostream>
#include <string>

using namespace std;

class Product
{
    private:
        string id;
        string name;
        string brand;
        int price;

    public:
        Product(){
        }
        
        void setId(string id){
            this->id = id;
        }

        string getId(){
            return this->id;
        }

        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }

        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return this->brand;
        }

        void setPrice(int price){
            this->price = price;
        }

        int getPrice(){
            return this->price;
        }

        ~Product(){
        }
};