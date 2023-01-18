// Class /Script/FortniteUI.AthenaSpectatorBuildCountBase
// Size: 0x2b0
class UAthenaSpectatorBuildCountBase : public UCommonUserWidget
{
	class UClass* BuildingClass; // 0x290 (0x8)
	enum ESpectatorBuildCountType BuildCountType; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortItemDefinition* ItemDefinition; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorBuildCountBase.UpdateBuildCount (Underlying native function: UpdateBuildCount 0xa5bdf94)
	void UpdateBuildCount(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorBuildCountBase.OnWorldItemListChanged (Underlying native function: OnWorldItemListChanged 0xa5bcab4)
	void OnWorldItemListChanged(struct TArray<class UFortWorldItem*>& ItemsAdded, struct TArray<class UFortWorldItem*>& ItemsRemoved); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpectatorBuildCountBase.OnFollowedPlayerChanged_BP (Has no native function)
	void OnFollowedPlayerChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorBuildCountBase.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0x17668b0)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatingPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorBuildCountBase.OnBuildCountChanged (Has no native function)
	void OnBuildCountChanged(int& OldCount, int& NewCount); // (Event | Protected | BlueprintEvent)
};

