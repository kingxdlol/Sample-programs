import java.util.Comparator;
import java.util.List;

public class InsertionSorter implements ISorter{
	
	public <T extends Comparable<T>> int sort(List<T> list){
		int count=0;													// Creates our swap count variable.
		for(int i=1;i<list.size();i++){									// Loops through our ArrayList at 1 (so we can get a previous).
            T key = list.get(i);										// Sets a key value at index i.
            int j = i-1;												// Sets j as i's previous.
            while (j>=0 && list.get(j).compareTo(key)>0){				// While j's value is greater than 0 and is bigger than the key
            	list.set(j+1, list.get(j));								// we set j's next to j's value to the key's value, increase the swap
            	count++;												// count and, decrement j and i progresses.
            	j--;
            }
            list.set(j+1, key);											// Sets j's next to the key.
        }
		return count;
	}
	
	 public <T> int sort(List<T> list, Comparator<T> comparator){			
		 int count=0;													 // This method is the exact same as the method
		 for(int i=1;i<list.size();i++){								 // above except, we call .compare() with
	            T key = list.get(i);									 // our comparator object given and, we
	            int j = i-1;											 // implement it on our key and j values, in
	            while (j>=0 && comparator.compare(list.get(j), key)>0){  // the while loop's parameters.
	            	list.set(j+1, list.get(j));
	            	count++;
	            	j--;
	            }
	            list.set(j+1, key);
	        }
			return count;
	    }
}