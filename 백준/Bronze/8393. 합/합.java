import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		int sum = 0;
		for(; num > 0; num--)
			sum += num;
		System.out.println(sum);
	}
}
