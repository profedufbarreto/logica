import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.println("--- 💰 BEM-VINDO AO SIMULADOR DE INVESTIMENTOS ---");
        
        System.out.print("Digite seu nome: ");
        String nome = entrada.nextLine();

        System.out.print("Valor inicial do investimento (R$): ");
        double capital = entrada.nextDouble();

        System.out.print("Taxa de juros mensal (%): ");
        double taxa = entrada.nextDouble();

        System.out.print("Tempo do investimento (meses): ");
        int meses = entrada.nextInt();

        System.out.println("\nCalculando rendimento para " + nome + "...");
        
        // Simulação mês a mês
        double saldo = capital;
        for (int i = 1; i <= meses; i++) {
            saldo += saldo * (taxa / 100);
            System.out.printf("Mês %d: Saldo atualizado R$ %.2f%n", i, saldo);
        }

        double lucro = saldo - capital;
        System.out.println("\n--- RESULTADO FINAL ---");
        System.out.printf("Total acumulado: R$ %.2f%n", saldo);
        System.out.printf("Rendimento total: R$ %.2f%n", lucro);
        
        entrada.close();
    }
}