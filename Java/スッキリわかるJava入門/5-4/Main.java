class Main {
    public static void main(String[] args) {
        double bottom = 10.0;
        double height = 5.0;

        System.out.format("底辺 %.1f cm、高さ %.1f cm の三角形の面積は %.1f cm2 です\n", bottom, height, calcTriangleArea(bottom, height));

        double radius = 5.0;
        System.out.format("半径 %.1f cm の円の面積は %.1f cm2 です\n", radius, cacCircleArea(radius));
    }

    public static double calcTriangleArea(double bottom, double height) {
        double area = bottom * height / 2;
        return area;
    }

    public static double cacCircleArea(double radius) {
        double area = radius * radius * 3.14;
        return area;
    }
}
