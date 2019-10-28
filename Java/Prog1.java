/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Pack1;

import java.util.Scanner;


public class Prog1 {
    public static void main(String[] args) 
    {
        int number = 10;
        char letter = 'a';
        boolean result = true;
        String str = "Hello";
        Scanner Inp = new Scanner(System.in);
        System.out.println("Number = " + number);
        System.out.println("Letter = " + letter);
        System.out.println("Result = " + result);
        System.out.println("Str = " + str);
        System.out.println("\n\n");
        
        int number_1 = 10,number_2 = 20,number_3 = 45,Ave;
        Ave = (number_1 + number_2 + number_3) / 3;
        System.out.println("number 1 = " + number_1 );
        System.out.println("number 2 = " + number_2);
        System.out.println("number_3 = " + number_3);
        System.out.println("The Average is " + Ave + "\n\n");
        
        number_1 = 10;
        number_2 = 23;
        number_3 = 5;
        int compare1 = number_1 > number_2? number_1:number_2;
        int compare2 = compare1 > number_3? compare1:number_3;
        
        System.out.println("number 1 = " + number_1 );
        System.out.println("number 2 = " + number_2);
        System.out.println("number_3 = " + number_3);
        System.out.println("The Highest is " + compare2 + "\n");
        
        double ConUs,ConEuro,ConYuan,ConWon;
        System.out.println("Enter Philippine Peso: ");
        double Php = Inp.nextDouble();
        ConUs = Php / 52.20;
        ConEuro = Php / 57.20;
        ConYuan = Php / 7.28;
        ConWon = Php / 0.043;
        System.out.println("The Amount is Equivalent to:");
        System.out.println("US Dollar   :    "  + ConUs);
        System.out.println("Euro        :    "  + ConEuro);
        System.out.println("Yuan        :    "  + ConYuan);
        System.out.println("Korean Won  :    "  + ConWon);
    }
}
