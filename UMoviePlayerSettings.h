// Class /Script/MoviePlayer.MoviePlayerSettings
// Size: 0x40
class UMoviePlayerSettings : public UObject
{
	bool bWaitForMoviesToComplete; // 0x28 (0x1)
	bool bMoviesAreSkippable; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TArray<struct FString> StartupMovies; // 0x30 (0x10)
};

