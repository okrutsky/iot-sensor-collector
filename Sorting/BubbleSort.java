public class BubbleSort {

	public static void Main(String[] args) {
		
		int[] arr = { 5, 3, 8, 2, 4 }; // declaring array
		
		for (int i = 0; i < arr.length - 1; i++) { // first cycle for the whole array
			
			// Inner loop (compares adjasment elements
			for (int j = 0; j < arr.length - 1; j++) {  
				// Swap arr[j] and arr [j+1]
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		for (int num : arr) {
			System.out.println(num + "");
		}
	}
}