
/**
 ** Coded by: "António 3A"
 ** UVa: 893 - Y3K Problem
**/
import java.io.File;
import java.io.FileNotFoundException;
import java.time.LocalDate;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner ls = new Scanner(new File("input.in"));
        //Scanner ls = new Scanner(System.in);

        
        while(true) {
            int a = ls.nextInt(), d  = ls.nextInt(), m  = ls.nextInt(), y  = ls.nextInt();
            if(a == d && d == 0)
                break;
            LocalDate date = LocalDate.of(y, m, d);
            date = date.plusDays(a);
            System.out.println(date.getDayOfMonth()+" "+date.getMonthValue()+" "+date.getYear());
        }
    }
}