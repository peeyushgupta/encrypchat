//import java.io.*;
public class Test {
    public static void main(String args[]) {
        Process theProcess = null;


        try {
            theProcess = Runtime.getRuntime().exec("java MainWindow");
        } catch (Exception e) {
            System.err.println("Error on exec() method");
            e.printStackTrace();
        }
    } // end method
} // end class