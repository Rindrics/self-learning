public class TangibleAsset extends Asset implements Thing {
    String color;
    double weight;

    public TangibleAsset (String name, int price, String color, double weight) {
        super(name, price);
        this.color = color;
    }

    public void setWeight(double weight) {this.weight = weight;}
    public double getWeight() {return this.weight;}

    public String getColor() {return this.color;}
}
