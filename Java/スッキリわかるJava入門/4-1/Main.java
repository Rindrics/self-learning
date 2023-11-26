class Main {
    public static void main(String[] args) {
        System.out.println("points");
        int[] points = new int[4];
        for (int i = 0; i < points.length; i++) {
            points[i] = new java.util.Random().nextInt(100);
            System.out.format("points[%d]: %d\n", i, points[i]);
        }

        System.out.println("weights");
        double[] weights = new double[5];
        for (int i = 0; i < weights.length; i++) {
            weights[i] = new java.util.Random().nextDouble() * 100;
            System.out.format("weights[%d]: %.1f\n", i, weights[i]);
        }

        System.out.println("answers");
        boolean[] answers = new boolean[3];
        for (int i = 0; i < answers.length; i++) {
            answers[i] = new java.util.Random().nextBoolean();
            System.out.format("answers[%d]: %b\n", i, answers[i]);
        }

        System.out.println("names");
        String[] names = new String[3];
        names[0] = "John";
        names[1] = "Mary";
        names[2] = "Mike";
        for (int i = 0; i < names.length; i++) {
            System.out.format("names[%d]: %s\n", i, names[i]);
        }
    }
}
