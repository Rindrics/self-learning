class Main {
    public static void main(String[] args) {
        Book book = new Book("book", 1000, "red", "1234567890", 123);
        System.out.println("book name: " + book.getName());
        System.out.println("book price: " + book.getPrice());
        System.out.println("book color: " + book.getColor());
        System.out.println("book isbn: " + book.getIsbn());
        System.out.println("book weight: " + book.getWeight());

        Computer computer = new Computer("computer", 2000, "blue", "apple", 4567);
        System.out.println("computer name: " + computer.getName());
        System.out.println("computer price: " + computer.getPrice());
        System.out.println("computer color: " + computer.getColor());
        System.out.println("computer makerName: " + computer.getMakerName());
        System.out.println("computer weight: " + computer.getWeight());
    }
}
