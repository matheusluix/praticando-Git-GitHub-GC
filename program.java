import java.util.Scanner;

public class program {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Digite sua idade");
        int idade = sc.nextInt();

        System.out.printf("Voce tem %d anos!", idade);


        sc.close();
    }
}