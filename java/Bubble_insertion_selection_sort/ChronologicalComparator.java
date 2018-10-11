import java.util.Comparator;

public class ChronologicalComparator<T extends MusicTrack> implements Comparator<T>{
	
	@Override
	public int compare(T a, T b){
		int aYear = a.getYear();						//Creates our Year, Album, and Track
		int bYear = b.getYear();						// Number variables for MusicTack a
		String aAlbum = a.getAlbumName();				// and b.
		String bAlbum = b.getAlbumName();
		int aTrackNum = a.getTrackNumber();
		int bTrackNum = b.getTrackNumber();		
		
		if(aYear-bYear >= 1){							// If b's year comes before a's
			return 1;									// return b
		}
		else if(aYear-bYear <= -1){						// If a's year comes before b's
			return -1;									// return a
		}
		else{											// If they are the same year, we compare album.
			if(aAlbum.compareTo(bAlbum) >= 1){			// If a's album alphabetically comes before
				return 1;								// b's, a goes first.
			}
			else if(aAlbum.compareTo(bAlbum) <= -1){	// If b's album alphabetically comes before
				return -1;								// a's, b goes first.
			}
			else{										// If they're in the same album, we compare the track number.
				if (aTrackNum - bTrackNum >= 1){		// If b's track number chronologically comes before
					return 1;							// a's, b goes first.
				}
				else if(aTrackNum - bTrackNum <= -1){	// If a's track number chronologically comes before
					return -1;							// b's, a goes first.
				}
				else{									// Else, they are the same.
					return 0;
				}
			}
		}
		
	}
}