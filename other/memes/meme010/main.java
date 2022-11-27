package other.meme010;

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    double d = in.nextDouble();
    System.out.printf("%.3f", d);
    in.close();
  }
}