import java.util.Scanner;

class Program29 
{
    public static void main(String[] args) 
    {
        try (Scanner scanner = new Scanner(System.in)) 
        {
            String sName = "";
            int iAge = 0;
            float fMarks = 0.0f;

            System.out.println("Enter your name : ");
            sName = scanner.nextLine(); 

            System.out.println("Enter your age : ");
            iAge = scanner.nextInt();
            scanner.nextLine(); 

            System.out.println("Enter your marks : ");
            fMarks = scanner.nextFloat();
            scanner.nextLine(); 

            System.out.println("Welcome " + sName);
            System.out.println("Your age is : " + iAge);
            System.out.println("Your marks : " + fMarks);
        }
    }
}
