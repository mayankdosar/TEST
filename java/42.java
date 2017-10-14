import java.util.Scanner;

public class FortyTwo {

	private static Scanner in = new Scanner(System.in);

	public static void main(String[] args) {
		int test = 0;

		while (test != 42) {
			try {
				System.out.println("enter number to test\n");
				test = in.nextInt();

			} catch (Exception e) {
				System.out.print("Invalid input \n");
				in.nextLine();

			}
		}

	}
}
