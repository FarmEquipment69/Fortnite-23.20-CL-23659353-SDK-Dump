// Class /Script/FortniteUI.AthenaSpectatorPlayerListBase
// Size: 0x428
class UAthenaSpectatorPlayerListBase : public UCommonActivatableWidget
{
	class UCommonListView* ListView; // 0x3a8 (0x8)
	struct TArray<class UAthenaRemotePlayerViewData*> PlayerDataArray; // 0x3b0 (0x10)
	struct FDataTableRowHandle SortListRowHandles[0x5]; // 0x3c0 (0x10) (ARRAY) 
	struct FDataTableRowHandle ShowPlayerProfileRowHandle; // 0x410 (0x10)
	unsigned char padding_420[0x8]; // 0x420 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListBase.SetSortMethod (Underlying native function: SetSortMethod 0xa5d3108)
	void SetSortMethod(enum ESpectatorPlayerListSortMethod& InNewSortMethod); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListBase.BP_HandlePlayerEventScoreChanged (Has no native function)
	void BPHandlePlayerEventScoreChanged(int& EventScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListBase.BP_HandleCurrentSortMethodChanged (Has no native function)
	void BPHandleCurrentSortMethodChanged(enum ESpectatorPlayerListSortMethod& NewSortMethod); // (Event | Protected | BlueprintEvent)
};

