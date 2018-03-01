// Java program to demonstrate that floating point
// addition may not be associative
import java.io.*;
 
class Main
{
    public static void main (String[] args)
    {
        // A and B have sane values but apposite signs
        float A = -500000000;
        float B =  500000000;
 
        float C = 1;
 
        System.out.println("A + (B + C) is equal to " + 
                          (A + (B + C)));
        System.out.println("(A + B) + C is equal to " + 
                          ((A + B) + C));
    }
}