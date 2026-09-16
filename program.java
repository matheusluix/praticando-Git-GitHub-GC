import java.util.Scanner;

public class program {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Digite sua idade");
        int idade = sc.nextInt();

        System.out.printf("Voce tem %d anos!", idade);

        if(idade >= 18) {
            System.out.println("Você é maior de idade, mês que vem tem eleição hein");
        }

        sc.close();
    }
}
