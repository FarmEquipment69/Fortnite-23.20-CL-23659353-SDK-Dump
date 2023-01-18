// Class /Script/MovieScene.MovieSceneFolder
// Size: 0x70
class UMovieSceneFolder : public UObject
{
	unsigned char unreflected_28[0x4]; // 0x28 (0x4) 
	struct FName FolderName; // 0x2c (0x4)
	struct TArray<class UMovieSceneFolder*> ChildFolders; // 0x30 (0x10)
	struct TArray<class UMovieSceneTrack*> ChildMasterTracks; // 0x40 (0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50 (0x10)
	unsigned char padding_60[0x10]; // 0x60 (0x10)
};

