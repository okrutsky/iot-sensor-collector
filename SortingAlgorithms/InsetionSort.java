/*
* Insertion Sort (Ascending Order)
* Treats the first part of the array as a growing "sorted section"
* For each new element, shifts larger elements to the right until
* the correct position is found, then inserts.
* 
* Time : O(n^2) wort / O(n) best
* Space : O(1)
* Stable : Yes
*/
public static void main insertionSort(int[] arr) {
    for (int i =1; i<arr.length; i++) {
        int key = arr[i];
        int j = i-1;

        while(j>0 && arr[j] > key {
            arr[j+1] = arr[j];
            j--;
        }
    }
}