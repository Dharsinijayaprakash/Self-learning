import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        int o =n;
        int rev = 0;
        int r;
        while(o!=0){
            r = o%10;
            rev = rev*10 + r;
            o = o/10;
        }
        if(rev == n){
            System.out.println("It's a Palindrome.");
        } else{
            System.out.println("It's not a Palindrome.");
        }
    }
}
