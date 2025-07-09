import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int sum = 0;
        int d;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        while(n != 0){
            d = n % 10;
            sum = sum + d;
            n = n/10;
        }
        System.out.println("Sum of digit is: "+ sum);
    }
}
