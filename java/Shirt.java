package LP2.java;

public class Shirt extends Clothing{
    // varible private
    private String color;
    private String sleeve_type;

    // constructor
    public Shirt(){
        this.color = "";
        this.sleeve_type = "";
    }

    public Shirt(String sleeve_type, String color) {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }
    
    // setter dan getter
    public String getColor(){
        return this.color;
    }

    public void setColor(String color){
        this.color = color;
    }

    public String getSleeveType(){
        return this.sleeve_type;
    }

    public void setSleeveType(String sleeve_type){
        this.sleeve_type = sleeve_type;
    }
}