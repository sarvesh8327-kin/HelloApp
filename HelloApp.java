/**
 * HelloApp.java – Displays Hello World or a personalized greeting
 * using command-line arguments.
 *
 * @author Sarvesh
 * @version 1.0
 */

public class HelloApp {

    public static void main(String[] args) {

        if (args.length > 0) {
            // If user provides name
            String name = args[0];
            System.out.println("Hello, " + name + "!");
        } 
        else {
            // Default message
            System.out.println("Hello, World!");
