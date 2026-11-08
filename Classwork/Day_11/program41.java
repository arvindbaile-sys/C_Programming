import java.util.Scanner;

public class Main {
    
    public static void maximum(int iNo1, int iNo2) {
        if (iNo1 > iNo2) {
            System.out.println("Maximum is : " + iNo1);
        } else {
            System.out.println("Maximum is : " + iNo2);
        }
    }

    public static void main(String args) {
        Scanner scanner = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        maximum(iValue1, iValue2);

        scanner.close();
    }
}
