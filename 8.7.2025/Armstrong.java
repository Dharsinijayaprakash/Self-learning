import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        int o =n;
        int res = 0;
        int r;
        while(o!=0){
            r = o%10;
            res = res+(r*r*r);
            o = o/10;
        }
        if(res == n){
            System.out.println("It's Armstrong number.");
        } else{
            System.out.println("It's not a Armstrong number.");
        }
    }
}
