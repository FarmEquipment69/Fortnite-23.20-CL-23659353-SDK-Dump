// Class /Script/FortniteUI.FortCreativeServersView
// Size: 0x2d0
class UFortCreativeServersView : public UCommonUserWidget
{
	int MaxSuggestedServers; // 0x290 (0x4)
	bool bShowDebugServers; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	class UClass* TileItemClass; // 0x298 (0x8)
	class UCommonButtonGroupLegacy* ServerButtonGroup; // 0x2a0 (0x8)
	class UScrollBox* ScrollBoxServerList; // 0x2a8 (0x8)
	struct TArray<class UFortCreativeServerInfo*> ServerList; // 0x2b0 (0x10)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeServersView.RefreshServerList (Underlying native function: RefreshServerList 0xa693480)
	void RefreshServerList(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeServersView.OnCreativeServerListRefreshed (Has no native function)
	void OnCreativeServerListRefreshed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeServersView.NavigateServerRight (Underlying native function: NavigateServerRight 0xa692ee4)
	void NavigateServerRight(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeServersView.NavigateServerLeft (Underlying native function: NavigateServerLeft 0xa692ed0)
	void NavigateServerLeft(); // (Final | Native | Protected | BlueprintCallable)
};

