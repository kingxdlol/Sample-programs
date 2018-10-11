import java.util.*;


public class BubbleSorter implements ISorter{
    
	public <T extends Comparable<T>> int sort(List<T> list){
    	int count = 0;											// Creates our swap count.
    	for(int j=0;j<list.size();j++){							// Loops through ArrayList starting at index 0.
    		for(int i=j+1;i<list.size();i++){					// Makes j the 'next' index to i.
    			if((list.get(i)).compareTo(list.get(j))<0){		// If j is less than i, i and j swap their
    				T t = list.get(j);							// values, and the swap count increases by 1.
    				list.set(j, list.get(i));
    				list.set(i,t);
    				count++;
    			}
    		}
    	}
    	return count;
     }
    
    public <T> int sort(List<T> list, Comparator<T> comparator){
    	int count = 0;													// This method is the exact same as the method
    	for(int j=0;j<list.size();j++){									// above except, we call .compare() with
    		for(int i=j+1;i<list.size();i++){							// our comparator object given and, we
    			if(comparator.compare((list.get(i)),(list.get(j)))<0){	// implement it on our i and j values, in
    				T t = list.get(j);									// the conditional statement's parameters.
    				list.set(j, list.get(i));
    				list.set(i,t);
    				count++;
    			}
    		}
    	}
    	return count;
    }
}