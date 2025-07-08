import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter 1st number:");
        int n = sc.nextInt();
        System.out.println("Enter 2nd number:");
        int u = sc.nextInt();
        int t = n+u;
        System.out.printf("Addition of %d and %d is %d",n,u,t);
    }
}
