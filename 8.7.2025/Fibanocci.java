import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        int t1=0;
        int t2 = 1;
        int u;
        System.out.printf("Fibanocci series is ");
        for(int i=1;i<=n;i++){
           System.out.printf("%d",t1);
           u = t1+t2;
           t1=t2;
           t2=u;
        }
        
    }
}
