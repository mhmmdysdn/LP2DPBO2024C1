package LP2.java;

public class Clothing extends Product {
    // varible private
    private String size;
    private String material;
    private char gender;

    // constructor
    public Clothing(){
        this.size = "";
        this.material = "";
        this.gender = '-';
    }

    public Clothing(String size, String material, char gender) {
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // setter dan getter
    public String getSize(){
        return this.size;
    }

    public void setSize(String size){
        this.size = size;
    }

    public String getMaterial(){
        return this.material;
    }

    public void setMaterial(String material){
        this.material = material;
    }

    public char getGender(){
        return this.gender;
    }

    public void setGender(char gender){
        this.gender = gender;
    }
}