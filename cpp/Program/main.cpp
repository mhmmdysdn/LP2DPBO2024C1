#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include "Product.cpp"
#include "Clothing.cpp"
#include "Shirt.cpp"

using namespace std;

int main(){

    Shirt shirt;
    int n;
    string id, name, brand, size, material;
    int price;
    string color, sleeve;
    char gender;

    
    cout << "Masukkan jumlah baju: ";
    cin >> n;

    // buat array buat nampung baju
    Shirt shirts[n];

    // Initialize maximum lengths for each property
    int maxIdLen = 2, maxNameLen = 4, maxBrandLen = 5, maxSizeLen = 4, maxMaterialLen = 8, maxColorLen = 5, maxSleeveLen = 6;

    for(int i = 0; i < n; i++){
        cout << "Masukkan id: ";
        cin >> id;
        cout << "Masukkan nama: ";
        cin >> name;
        cout << "Masukkan brand: ";
        cin >> brand;
        cout << "Masukkan harga: ";
        cin >> price;
        cout << "Masukkan size: ";
        cin >> size;
        cout << "Masukkan material: ";
        cin >> material;
        cout << "Masukkan gender: ";
        cin >> gender;
        cout << "Masukkan color: ";
        cin >> color;
        cout << "Masukkan sleeve: ";
        cin >> sleeve;

        shirts[i].setId(id);
        shirts[i].setName(name);
        shirts[i].setBrand(brand);
        shirts[i].setPrice(price);
        shirts[i].setSize(size);
        shirts[i].setMaterial(material);
        shirts[i].setGender(gender);
        shirts[i].setColor(color);
        shirts[i].setSleeveType(sleeve);

        // Update maximum lengths if necessary
        maxIdLen = max(maxIdLen, static_cast<int>(id.length()));
        maxNameLen = max(maxNameLen, static_cast<int>(name.length()));
        maxBrandLen = max(maxBrandLen, static_cast<int>(brand.length()));
        maxSizeLen = max(maxSizeLen, static_cast<int>(size.length()));
        maxMaterialLen = max(maxMaterialLen, static_cast<int>(material.length()));
        maxColorLen = max(maxColorLen, static_cast<int>(color.length()));
        maxSleeveLen = max(maxSleeveLen, static_cast<int>(sleeve.length()));
    }

    // Tampilkan isi array dengan tabel dinamis
    cout << left << setw(maxIdLen + 2) << "Id" << setw(maxNameLen + 2) << "Nama" << setw(maxBrandLen + 2) << "Brand" << setw(10) << "Harga" << setw(maxSizeLen + 2) << "Size" << setw(maxMaterialLen + 2) << "Material" << setw(10) << "Gender" << setw(maxColorLen + 2) << "Color" << setw(maxSleeveLen + 2) << "Sleeve" << endl;
    // cout << string(maxIdLen + maxNameLen + maxBrandLen + maxSizeLen + maxMaterialLen + maxColorLen + maxSleeveLen + 45, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(maxIdLen + 2) << shirts[i].getId() << setw(maxNameLen + 2) << shirts[i].getName() << setw(maxBrandLen + 2) << shirts[i].getBrand() << setw(10) << shirts[i].getPrice() << setw(maxSizeLen + 2) << shirts[i].getSize() << setw(maxMaterialLen + 2) << shirts[i].getMaterial() << setw(10) << shirts[i].getGender() << setw(maxColorLen + 2) << shirts[i].getColor() << setw(maxSleeveLen + 2) << shirts[i].getSleeveType() << endl;
    }

    
}