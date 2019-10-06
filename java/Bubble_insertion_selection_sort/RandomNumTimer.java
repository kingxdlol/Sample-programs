import java.util.*;

public class RandomNumTimer{
	
	public static void main(String[] args){
		Random rand = new Random();						// Creates our random object.
		ISorter bubsorter = new BubbleSorter();			// Creates a sort object of type
		ISorter selectsorter = new SelectionSorter();	// Bubble, Insertion, & Selection.
		ISorter insertsorter = new InsertionSorter();
		
		List<Integer> list21 = new ArrayList();			// Creates 3 Arrays of each
		List<Integer> list22 = new ArrayList();			// type of sort, and of the
		List<Integer> list23 = new ArrayList();			// 4 sizes of ArrayList length;
		List<Integer> list101 = new ArrayList();		// 20, 100, 500, and 2500.
		List<Integer> list102 = new ArrayList();
		List<Integer> list103 = new ArrayList();
		List<Integer> list501 = new ArrayList();
		List<Integer> list502 = new ArrayList();
		List<Integer> list503 = new ArrayList();
		List<Integer> list2501 = new ArrayList();
		List<Integer> list2502 = new ArrayList();
		List<Integer> list2503 = new ArrayList();

		
		// Length 20 BubbleSort
		System.out.println("Bubble sort of length 20:");				//Introduces the sort
		for(int i = 0; i<20; i++){										
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list21.add(n);												// adds it to the specified list
		}
		long start_timebub20 = System.nanoTime();						// Captures current time in nanoseconds
		bubsorter.sort(list21);											// Runs specified sort.
		long end_timebub20 = System.nanoTime();							// Captures current time in nanoseconds
		System.out.print("\t" + (end_timebub20-start_timebub20)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		
		// Length 20 InsertionSort
		System.out.println("Insertion sort of length 20:");				//Introduces the sort
		for(int i = 0; i<20; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list22.add(n);												// adds it to the specified list
		}
		long start_timeins20 = System.nanoTime();						// Captures current time in nanoseconds
		selectsorter.sort(list22);										// Runs specified sort.
		long end_timeins20 = System.nanoTime();							// Captures current time in nanoseconds
		System.out.print("\t" + (end_timeins20-start_timeins20)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		
		// Length 20 SelectionSort
		System.out.println("Selection sort of length 20:");				//Introduces the sort
		for(int i = 0; i<20; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list23.add(n);												// adds it to the specified list
		}
		long start_timesel20 = System.nanoTime();						// Captures current time in nanoseconds
		insertsorter.sort(list23);										// Runs specified sort.
		long end_timesel20 = System.nanoTime();							// Captures current time in nanoseconds
		System.out.print("\t" + (end_timesel20-start_timesel20)/1000000f + " milliseconds\n\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 100 BubbleSort
		System.out.println("Bubble sort of length 100:");				//Introduces the sort
		for(int i = 0; i<100; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list101.add(n);												// adds it to the specified list
		}
		long start_timebub100 = System.nanoTime();						// Captures current time in nanoseconds
		bubsorter.sort(list101);										// Runs specified sort.
		long end_timebub101 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timebub101-start_timebub100)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 100 InsertionSort
		System.out.println("Insertion sort of length 100:");			//Introduces the sort
		for(int i = 0; i<100; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list102.add(n);												// adds it to the specified list
		}
		long start_timeins100 = System.nanoTime();						// Captures current time in nanoseconds
		insertsorter.sort(list102);										// Runs specified sort.
		long end_timeins100 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timeins100-start_timeins100)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 100 SelectionSort
		System.out.println("Selection sort of length 100:");			//Introduces the sort
		for(int i = 0; i<100; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list103.add(n);												// adds it to the specified list
		}
		long start_timesel100 = System.nanoTime();						// Captures current time in nanoseconds
		selectsorter.sort(list103);										// Runs specified sort.
		long end_timesel100 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timesel100-start_timesel100)/1000000f + " milliseconds\n\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 500 BubbleSort
		System.out.println("Bubble sort of length 500:");				//Introduces the sort
		for(int i = 0; i<500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list501.add(n);												// adds it to the specified list
		}
		long start_timebub500 = System.nanoTime();						// Captures current time in nanoseconds
		bubsorter.sort(list501);										// Runs specified sort.
		long end_timebub500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timebub500-start_timebub500)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 500 InsertionSort
		System.out.println("Insertion sort of length 500:");			//Introduces the sort
		for(int i = 0; i<500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list502.add(n);												// adds it to the specified list
		}
		long start_timeins500 = System.nanoTime();						// Captures current time in nanoseconds
		insertsorter.sort(list502);										// Runs specified sort.
		long end_timeins500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timeins500-start_timeins500)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 500 SelectionSort
		System.out.println("Selection sort of length 500:");			//Introduces the sort
		for(int i = 0; i<500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list503.add(n);												// adds it to the specified list
		}
		long start_timesel500 = System.nanoTime();						// Captures current time in nanoseconds
		selectsorter.sort(list503);										// Runs specified sort.
		long end_timesel500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timesel500-start_timesel500)/1000000f + " milliseconds\n\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 2500 BubbleSort
		System.out.println("Bubble sort of length 2500:");				//Introduces the sort
		for(int i = 0; i<2500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list2501.add(n);											// adds it to the specified list
		}
		long start_timebub2500 = System.nanoTime();						// Captures current time in nanoseconds
		bubsorter.sort(list2501);										// Runs specified sort.
		long end_timebub2500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timebub2500-start_timebub2500)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 2500 InsertionSort
		System.out.println("Insertion sort of length 2500:");			//Introduces the sort
		for(int i = 0; i<2500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list2502.add(n);											// adds it to the specified list
		}
		long start_timeins2500 = System.nanoTime();						// Captures current time in nanoseconds
		insertsorter.sort(list2502);									// Runs specified sort.
		long end_timeins2500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timeins2500-start_timeins2500)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
		
		// Length 2500 SelectionSort
		System.out.println("Selection sort of length 2500:");			//Introduces the sort
		for(int i = 0; i<2500; i++){
		    int  n = rand.nextInt(2500) + 1;							// Picks a random number from 1 to 2500
		    list2503.add(n);											// adds it to the specified list
		}
		long start_timesel2500 = System.nanoTime();						// Captures current time in nanoseconds
		selectsorter.sort(list2503);									// Runs specified sort.
		long end_timesel2500 = System.nanoTime();						// Captures current time in nanoseconds
		System.out.print("\t" + (end_timesel2500-start_timesel2500)/1000000f + " milliseconds\n");
																		/* Displays the time in milliseconds for the
																		 * sort to take place.  The the end time
																		 * minus the start time, then divides it by
																		 * 1000000.  Displayed as a float.
																		 */
	}
	
}