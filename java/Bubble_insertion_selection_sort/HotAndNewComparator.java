import java.util.Comparator;

public class HotAndNewComparator<T extends MusicTrack> implements Comparator<T>{
	
	@Override
	public int compare(T a, T b){
		int aRating = a.getRating();							// Creates our Rating, Year, Artist,
		int bRating = b.getRating();							// Album, and TrackNumber variables for
		int aYear = a.getYear();								// MusicTack a and b.
		int bYear = b.getYear();
		String aArtist = a.getArtistName();
		String bArtist = b.getArtistName();
		String aAlbum = a.getAlbumName();
		String bAlbum = b.getAlbumName();
		int aTrackNum = a.getTrackNumber();
		int bTrackNum = b.getTrackNumber();
		
		if(bRating-aRating <= -1){								// If a has a higher rating than b
			return -1;											// a goes first.
		}
		else if(bRating-aRating >= 1){							// If b has a higher rating than a
			return 1;											// b goes first.
		}
		else{													// If they have the same rating we compare Years.
			if(bYear-aYear <= -1){								// If a's year came after b's year
				return -1;										// a goes first.
			}
			else if(bYear-aYear >= 1){							// If b's year came after a's year
				return 1;										// b goes first
			}
			else{												// If they have the same year.
				if(aArtist.compareTo(bArtist) >= 1){			// If a's artist's name alphabetically comes before
					return 1;									// b's, a goes first.	
				}
				else if(aArtist.compareTo(bArtist) <= -1){		// If b's artist's name alphabetically comes before
					return -1;									// a's, b goes first.
				}
				else{											// If they are the same artist, we compare album.
					if(aAlbum.compareTo(bAlbum) >= 1){			// If a's album alphabetically comes before
						return 1;								// b's, a goes first.		
					}
					else if(aAlbum.compareTo(bAlbum) <= -1){	// If b's album alphabetically comes before
						return -1;								// a's, b goes first.
					}
					else{										// If they are in the same album, we compare track number.
						if(aTrackNum-bTrackNum <= -1){			// If a's track number chronologically comes before
							return -1;							// b's, a goes first.
						}
						else if(aTrackNum-bTrackNum >= 1){		// If b's track number chronologically comes before
							return 1;							// a's, b goes first.
						}
						else{
							return 0;							// Else, they are the same.
						}
					}
				}
			}
		}
		
	}
}