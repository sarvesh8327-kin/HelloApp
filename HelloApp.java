/**
 * UC6: Display Hello using multiple arguments (Enhanced for loop + substring)
 */

public class HelloApp {

    public static void main(String[] args) {

        // Check if no arguments
        if (args.length == 0) {
            System.out.println("Hello, World!");
        } else {

            StringBuilder names = new StringBuilder();

            // Enhanced for loop
            for (String name : args) {
                names.append(name).append(", ");
            }

            // Remove last ", " using substring
            String finalNames = names.substring(0, names.length() - 2);

            System.out.println("Hello, " + finalNames + "!");
        }
    }
}