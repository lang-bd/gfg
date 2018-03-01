
class Program {

    public static int findFirstMissing(int arr[], int start, int end) {

        if (start > end) {
            return end + 1;
        }
        if (start != arr[start]) {
            return start;
        }
        int mid = (start + end) / 2;

        if (arr[mid] > mid) {
            return findFirstMissing(arr, start, mid);
        } else {
            return findFirstMissing(arr, mid + 1, end);
        }

    }

    public static void main(String[] args) {
        int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
        int n = arr.length;
        System.out.println("First Missing Number: " + Program.findFirstMissing(arr, 0, n - 1));
    }
}
