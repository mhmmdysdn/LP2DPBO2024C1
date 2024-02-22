package LP2.java;
import java.util.Scanner;

public class Main {
            public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
                int n;
                System.out.println("Masukkan jumlah barang yang ingin diinputkan: ");
                n = sc.nextInt();

                Shirt[] arr = new Shirt[n];
                for (int i = 0; i < n; i++) {
                    String id, name, brand, size, material, color, sleeve_type;
                    int price;
                    char gender;

                    System.out.println("Masukkan id: ");
                    id = sc.next();
                    System.out.println("Masukkan nama: ");
                    name = sc.next();
                    System.out.println("Masukkan brand: ");
                    brand = sc.next();
                    System.out.println("Masukkan harga: ");
                    price = sc.nextInt();
                    System.out.println("Masukkan size: ");
                    size = sc.next();
                    System.out.println("Masukkan material: ");
                    material = sc.next();
                    System.out.println("Masukkan gender: ");
                    gender = sc.next().charAt(0);
                    System.out.println("Masukkan color: ");
                    color = sc.next();
                    System.out.println("Masukkan sleeve type: ");
                    sleeve_type = sc.next();

                    arr[i] = new Shirt();
                    arr[i].setID(id);
                    arr[i].setName(name);
                    arr[i].setBrand(brand);
                    arr[i].setPrice(price);
                    arr[i].setSize(size);
                    arr[i].setMaterial(material);
                    arr[i].setGender(gender);
                    arr[i].setColor(color);
                    arr[i].setSleeveType(sleeve_type);
                }

                for (int i = 0; i < n; i++) {
                    System.out.println("ID: " + arr[i].getID());
                    System.out.println("Nama: " + arr[i].getName());
                    System.out.println("Brand: " + arr[i].getBrand());
                    System.out.println("Harga: " + arr[i].getPrice());
                    System.out.println("Size: " + arr[i].getSize());
                    System.out.println("Material: " + arr[i].getMaterial());
                    System.out.println("Color: " + arr[i].getColor());
                    System.out.println("Sleeve Type: " + arr[i].getSleeveType());
                }
        }    
}
