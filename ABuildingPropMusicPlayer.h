// Class /Script/FortniteGame.BuildingPropMusicPlayer
// Size: 0xf58
class ABuildingPropMusicPlayer : public ABuildingProp
{
	unsigned char bCheckAlternateHotfixValue; // 0xee8 (0x1)
	unsigned char bPlayingByDefault; // 0xee8 (0x1)
	unsigned char bPlayRandomSong; // 0xee8 (0x1)
	unsigned char unreflected_ee9[0x7]; // 0xee9 (0x7) 
	struct TArray<int> AvailableSongIndices; // 0xef0 (0x10)
	class UDataTable* MusicTrackTable; // 0xf00 (0x8)
	struct TArray<struct TWeakObjectPtr<class UObject>> MusicArray; // 0xf08 (0x10)
	struct FMusicPlayerData* PlayingSongData; // 0xf18 (0x8)
	class UAudioComponent* SongAudioComponent; // 0xf20 (0x8)
	unsigned char unreflected_f28[0x10]; // 0xf28 (0x10) 
	struct FString SavedTrackName; // 0xf38 (0x10)
	enum EMusicTrackPlayback PlaybackType; // 0xf48 (0x1)
	unsigned char padding_f49[0xf]; // 0xf49 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.StartSongForOptionsChange (Underlying native function: StartSongForOptionsChange 0x26daa0c)
	void StartSongForOptionsChange(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.OnRep_PlayingSongData (Underlying native function: OnRep_PlayingSongData 0x860c11c)
	void OnRepPlayingSongData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.LoadThenPlaySong (Underlying native function: LoadThenPlaySong 0x197c8dc)
	void LoadThenPlaySong(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.GetSavedTrackName (Underlying native function: GetSavedTrackName 0x8609594)
	struct FString GetSavedTrackName(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.GetMusicDataTable (Underlying native function: GetMusicDataTable 0x8608ecc)
	class UDataTable* GetMusicDataTable(); // (Native | Event | Protected | BlueprintEvent | Const)
};

