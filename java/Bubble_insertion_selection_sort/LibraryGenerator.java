import java.util.*;

public class LibraryGenerator{
	public static void main(String[] args){
		Random rand = new Random();												// Creates Random object.
		List<MusicTrack> library = MusicTrack.generateMusicLibrary(rand.nextInt()*(2000 - 1)); //Creates our randomly generated library.
		LibraryGenerator(library);												// Calls our method below to perform sorts.
		
	}
	public static void LibraryGenerator(List<MusicTrack> list){
		List<MusicTrack> list_to_sort = new ArrayList(list);					// Creates the sorted list that will be overwritten
																				// through each sort.
		
		ISorter bubsorter = new BubbleSorter();									// Creates the new bubble sorter object.
		Comparator<MusicTrack> compArt = new ArtistComparator();				// Creates a Artist comparator object.
		System.out.println("Bubble sort, sorting by Artists\nUnsorted: ");		// Display Type of sort and what comparator.
		for(int i=0; i<list_to_sort.size(); i++){								// Loops through unsorted list and prints.
			System.out.println(list_to_sort.get(i));
		}
		System.out.println("Sorted:");											// Header for sorted list.
		bubsorter.sort(list_to_sort, compArt);									// Sorts list.
		for(int i=0; i<list_to_sort.size(); i++){								// Loops through sorted list and prints.
			System.out.println(list_to_sort.get(i));
		}
		
		ISorter insertsorter = new InsertionSorter();								 // Creates the new Insertion sorter object.
		Comparator<MusicTrack> compHotNew= new HotAndNewComparator();				 // Creates a HotAndNew comparator object.
		System.out.println("\nInsertion sort, sorting by Hot and New \nUnsorted: "); // Display Type of sort and what comparator.
		for(int i=0; i<list_to_sort.size(); i++){									 // Loops through unsorted list and prints.
			System.out.println(list_to_sort.get(i));
		}
		System.out.println("Sorted:");												// Header for sorted list.
		insertsorter.sort(list_to_sort, compHotNew);								// Sorts list.
		for(int i=0; i<list_to_sort.size(); i++){									// Loops through sorted list and prints.
			System.out.println(list_to_sort.get(i));
		}
				
		ISorter selectsorter = new SelectionSorter();									// Creates the new Selection sorter object.
		Comparator<MusicTrack> compChron = new ChronologicalComparator();				// Creates a Chronological comparator object.
		System.out.println("\nSelection sort, sorting by Chronological\nUnsorted: ");  // Display Type of sort and what comparator.
		for(int i=0; i<list_to_sort.size(); i++){										// Loops through unsorted list and prints.
			System.out.println(list_to_sort.get(i));
		}
		System.out.println("Sorted:");													// Header for sorted list.
		selectsorter.sort(list_to_sort, compChron);										// Sorts list.
		for(int i=0; i<list_to_sort.size(); i++){										// Loops through sorted list and prints.
			System.out.println(list_to_sort.get(i));									
		}
		
	}
}