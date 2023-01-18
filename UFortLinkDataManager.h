// Class /Script/FortniteGame.FortLinkDataManager
// Size: 0xe8
class UFortLinkDataManager : public UGameInstanceSubsystem
{
	unsigned char unreflected_e8[0xe8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortLinkDataManager.QueueLinkDataQueryByCode (Underlying native function: QueueLinkDataQueryByCode 0x89702d8)
	void QueueLinkDataQueryByCode(struct FOnlineLinkId& LinkId, struct FDelegate& Callback, bool& bCalledByModerator); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkDataManager.QueryQueuedLinkData (Underlying native function: QueryQueuedLinkData 0x89702c4)
	void QueryQueuedLinkData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLinkDataManager.QueryLinkDataByCode (Underlying native function: QueryLinkDataByCode 0x8970084)
	void QueryLinkDataByCode(struct FOnlineLinkId& LinkId, struct FDelegate& Callback, bool& bCalledByModerator); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkDataManager.GetLinkTitle (Underlying native function: GetLinkTitle 0x896c870)
	struct FText GetLinkTitle(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLinkDataManager.GetLinkTagline (Underlying native function: GetLinkTagline 0x896c764)
	struct FText GetLinkTagline(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLinkDataManager.GetLinkIntroduction (Underlying native function: GetLinkIntroduction 0x896c660)
	struct FText GetLinkIntroduction(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLinkDataManager.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0x896c580)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLinkDataManager.DownloadThumbnail (Underlying native function: DownloadThumbnail 0x896c138)
	void DownloadThumbnail(struct FCreativeLoadedLinkData& LinkData, struct FDelegate& Callback); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

