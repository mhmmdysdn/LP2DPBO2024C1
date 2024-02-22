package LP2.java;

public class Product {
    // varible private
    private String id;
    private String name;
    private String brand;
    private int price;

    // constructor
    public Product(){
        this.id = "";
        this.name = "";
        this.brand = "";
        this.price = 0;
    }

    public Product(String id, String name, String brand, int price) {
        this.id = id;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // setter dan getter
    public String getID(){
        return this.id;
    }

    public void setID(String id){
        this.id = id;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getBrand(){
        return this.brand;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }

    public int getPrice(){
        return this.price;
    }

    public void setPrice(int price){
        this.price = price;
    }
}