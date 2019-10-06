import java.util.Comparator;
import java.util.List;

public class SelectionSorter implements ISorter{
	
	public <T extends Comparable<T>> int sort(List<T> list){
		int minindex;											// Creates our minimum index.
		int count = 0; 											// Creates our Swap count.
        for (int i = 0; i < list.size()-1; i++){				// Loops through ArrayList starting at 0.
        	minindex = i;										// Sets our minimum index to be the i position.
    		T minval = list.get(i);								// Creates our minimum value.
            for (int j = i + 1; j < list.size(); j++){			// Loops through focusing on the next index after i (j).
            	T testval = list.get(j);						// Creates our test value.
                if (testval.compareTo(minval)<0){				// If our test value is less than our minimum value,
                    minindex = j;								// our new minimum value is the test value and our index is j.
                    minval = testval;					
                	}
                }
            if(minindex != i){									// To avoid when the minimum value has not been changed in the loop before
	        list.set(minindex, list.get(i));					// if, the minimum's index is i, we don't swap. Otherwise, we swap the i index
	        list.set(i, minval);								// with the minimum index and their values, and increase our swap count.
	        count++;
            }
        }
		return count;
	}
	
	// Comparator method
	 public <T> int sort(List<T> list, Comparator<T> comparator){				
		 	int minindex;
			int count = 0; 
	    			for (int i = 0; i < list.size()-1; i++){
	    	        	minindex = i;
	    	    		T minval = list.get(i);
	    	            for (int j = i + 1; j < list.size(); j++){			// This method is the exact same as the method above except
	    	            	T testval = list.get(j);						// in our first conditional statement, we call .compare()
	    	                if (comparator.compare(testval, minval)<0){		// with our comparator object to test our test value and minimum
	    	                    minindex = j;								// value.
	    	                    minval = testval;
	    	                	}
	    	                }
	    	            if(minindex != i){
	    		        list.set(minindex, list.get(i));
	    		        list.set(i, minval);
	    		        count++;
	    	            }
	    	        }
	    			return count;
	    	}
	 }