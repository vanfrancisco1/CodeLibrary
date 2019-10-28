/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Pack1;
import java.util.Scanner;
/**
 *
 * @author 201810437
 */
public class Zodiac {
    
    public static void main(String[] args) {
        int month,day;
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter Month: ");
        month = inp.nextInt();
        System.out.print("Enter Day: ");
        day = inp.nextInt();
        
        if (month == 1)
        {
            if (day < 20)
            {
                System.out.println(month + "/"+ day + " is Capricorn"); 
            }
            else
            {
                System.out.println(month + "/" + day + " is Aquarius");
            }
        }
        else if (month == 2)
        {
            if (day < 18)
            {
                System.out.println(month + "/" + day + " is Aquarius"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Pisces");  
            }
        }
        else if (month == 3)
        {
            if (day < 20)
            {
                System.out.println(month + "/" + day + " is Pisces"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Aries");  
            }   
        }
        else if (month == 4)
        {
            if (day < 19)
            {
                System.out.println(month + "/" + day + " is Aries"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Taurus");  
            }   
        }
        else if (month == 5)
        {
            if (day < 20)
            {
                System.out.println(month + "/" + day + " is Taurus"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Gemini");  
            }   
        }
        else if (month == 6)
        {
            if (day < 20)
            {
                System.out.println(month + "/" + day + " is Gemini"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Cancer");  
            }   
        }
        else if (month == 7)
        {
            if (day < 22)
            {
                System.out.println(month + "/" + day + " is Gemini"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Cancer");  
            }   
        }
        else if (month == 8)
        {
            if (day < 22)
            {
                System.out.println(month + "/" + day + " is Cancer"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Leo");  
            }   
        }
        else if (month == 9)
        {
            if (day < 22)
            {
                System.out.println(month + "/" + day + " is Leo"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Virgo");  
            }   
        }
        else if (month == 10)
        {
            if (day < 22)
            {
                System.out.println(month + "/" + day + " is Virgo"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Libra");  
            }   
        }
        else if (month == 11)
        {
            if (day < 22)
            {
                System.out.println(month + "/" + day + " is Libra"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Scorpio");  
            }   
        }
        else if (month == 12)
        {
            if (day < 21)
            {
                System.out.println(month + "/" + day + " is Scorpio"); 
            }
            else
            {
               System.out.println(month + "/" + day + " is Sagitarius");  
            }   
        }
       
    }
    
}
