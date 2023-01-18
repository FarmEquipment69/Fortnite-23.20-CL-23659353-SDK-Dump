// Class /Script/MediaAssets.MediaPlaylist
// Size: 0x38
class UMediaPlaylist : public UObject
{
	struct TArray<class UMediaSource*> Items; // 0x28 (0x10)

	/* Functions */

	// Function /Script/MediaAssets.MediaPlaylist.Replace (Underlying native function: Replace 0x9bca27c)
	bool Replace(int& Index, class UMediaSource*& Replacement); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt (Underlying native function: RemoveAt 0x9bca184)
	bool RemoveAt(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.Remove (Underlying native function: Remove 0x9bca0f4)
	bool Remove(class UMediaSource*& MediaSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.Num (Underlying native function: Num 0x731dc50)
	int Num(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.Insert (Underlying native function: Insert 0x9bc95c4)
	void Insert(class UMediaSource*& MediaSource, int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.GetRandom (Underlying native function: GetRandom 0x9bc876c)
	class UMediaSource* GetRandom(int& OutIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious (Underlying native function: GetPrevious 0x9bc86d4)
	class UMediaSource* GetPrevious(int& InOutIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.GetNext (Underlying native function: GetNext 0x9bc82a4)
	class UMediaSource* GetNext(int& InOutIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.Get (Underlying native function: Get 0x9bc7c7c)
	class UMediaSource* Get(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.AddUrl (Underlying native function: AddUrl 0x9bc7378)
	bool AddUrl(struct FString& URL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.AddFile (Underlying native function: AddFile 0x9bc7188)
	bool AddFile(struct FString& FilePath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlaylist.Add (Underlying native function: Add 0x9bc70d0)
	bool Add(class UMediaSource*& MediaSource); // (Final | Native | Public | BlueprintCallable)
};

