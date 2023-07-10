import java.util.Scanner;

public class test{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the ratings for Alice's challenge
        int[] a = new int[3];
        System.out.println("Enter the ratings for Alice's challenge:");
        for (int i = 0; i < 3; i++) {
            a[i] = scanner.nextInt();
        }

        // Get the ratings for Bob's challenge
        int[] b = new int[3];
        System.out.println("Enter the ratings for Bob's challenge:");
        for (int i = 0; i < 3; i++) {
            b[i] = scanner.nextInt();
        }

        // Calculate the comparison points
        int alicePoints = 0;
        int bobPoints = 0;
        for (int i = 0; i < 3; i++) {
            if (a[i] > b[i]) {
                alicePoints++;
            } else if (a[i] < b[i]) {
                bobPoints++;
            }
        }

        // Print the comparison points
        System.out.println("Alice's comparison points: " + alicePoints);
        System.out.println("Bob's comparison points: " + bobPoints);
    }
}
