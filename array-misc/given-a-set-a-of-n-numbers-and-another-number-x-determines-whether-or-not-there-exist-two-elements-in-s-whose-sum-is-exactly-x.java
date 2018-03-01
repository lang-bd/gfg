
class Program {

    private static final int MAX = 100000; // Max size of Hashmap

    static void printpairs(int arr[], int sum) {
        // Declares and initializes the whole array as false
        boolean[] binmap = new boolean[MAX];

        for (int i = 0; i < arr.length; ++i) {
            int temp = sum - arr[i];

            // checking for condition
            if (temp >= 0 && binmap[temp]) {
                System.out.println("Pair with given sum "
                        + sum + " is (" + arr[i]
                        + ", " + temp + ")");
            }
            binmap[arr[i]] = true;
        }
    }

    // Main to test the above function
    public static void main(String[] args) {
        int A[] = {2, 4, 1, 5};
        int n = 6;
        printpairs(A, n);
    }
}
