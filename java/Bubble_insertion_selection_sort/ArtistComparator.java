import java.util.*;
public class ArtistComparator<T extends MusicTrack> implements Comparator<T>{
	
	@Override
	public int compare(T a, T b){
		String aArtist = a.getArtistName();				//Creates our Artist, Album, and Track
		String bArtist = b.getArtistName();				// Number variables for MusicTack a
		String aAlbum = a.getAlbumName();				// and b.
		String bAlbum = b.getAlbumName();
		int aTrackNum = a.getTrackNumber();
		int bTrackNum = b.getTrackNumber();		
		
		if(aArtist.compareTo(bArtist) >= 1){			// If a's artist's name alphabetically comes before
			return 1;									// b's, a goes first.
		}
		else if(aArtist.compareTo(bArtist) <= -1){		// If b's artist's name alphabetically comes before
			return -1;									// a's, b goes first.
		}
		else{											// If they're the same, we compare the album name.
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