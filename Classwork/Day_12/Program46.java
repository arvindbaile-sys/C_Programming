import java.util.Scanner;

public class Program46 {

    public static double average(int value1, int value2, int value3) {
        
        return (value1 + value2 + value3) / 3.0;
    }

    public static void main(String[] args) {
        int value1 = 0, value2 = 0, value3 = 0;
        double result = 0.0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first number : ");
        value1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        value2 = scanner.nextInt();

        System.out.println("Enter third number : ");
        value3 = scanner.nextInt();

        result = average(value1, value2, value3);

        System.out.println("Average is : " + result);

        scanner.close();
    }
}
