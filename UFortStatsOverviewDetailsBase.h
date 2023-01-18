// Class /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
// Size: 0x2c8
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{
	struct TArray<class UFortAttributeListItem_NUI*> OverviewStats; // 0x290 (0x10)
	class UFortAttributeList_NUI* DetailedStats; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x20]; // 0x2a8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate (Underlying native function: RequestStatsUpdate 0x75c1404)
	void RequestStatsUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges (Underlying native function: ListenForChanges 0x75c0a98)
	void ListenForChanges(bool& bListen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId (Underlying native function: GetLocalPlayerId 0x75bf410)
	struct FUniqueNetIdRepl GetLocalPlayerId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

