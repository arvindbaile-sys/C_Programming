import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        if (iValue1 > iValue2) {
            System.out.println("Maximum is : " + iValue1);
        } else {
            System.out.println("Maximum is : " + iValue2);
        }

        scanner.close();
    }
}
