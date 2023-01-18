// Class /Script/FortniteGame.FortPickupCreative
// Size: 0x7c0
class AFortPickupCreative : public AFortPickupAthena
{
	unsigned char unreflected_778[0x8]; // 0x778 (0x8) 
	class UFortCreativeCostComponent* CostComponent; // 0x780 (0x8)
	bool bPickupOnTouch; // 0x788 (0x1)
	unsigned char unreflected_789[0x3]; // 0x789 (0x3) 
	int CachedPickupInstigatorHandle; // 0x78c (0x4)
	struct FPickupInstigatorData CachedInstigatorData; // 0x790 (0x18)
	bool bUseOverrideDespawnTime; // 0x7a8 (0x1)
	unsigned char unreflected_7a9[0x3]; // 0x7a9 (0x3) 
	float OverrideDespawnTime; // 0x7ac (0x4)
	struct FMulticastInlineDelegate OnAccentColorParamChanged; // 0x7b0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupCreative.SetItemResourceCost (Underlying native function: SetItemResourceCost 0x83e2960)
	void SetItemResourceCost(struct TEnumAsByte<EFortResourceType>& ResourceType, int& Cost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupCreative.OnRep_PickupInstigatorIndex (Underlying native function: OnRep_PickupInstigatorIndex 0x83ddd1c)
	void OnRepPickupInstigatorIndex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.OnPickupInstigatorDataRemoved (Underlying native function: OnPickupInstigatorDataRemoved 0x83ddb98)
	void OnPickupInstigatorDataRemoved(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.OnPickupInstigatorDataChanged (Underlying native function: OnPickupInstigatorDataChanged 0x83ddb18)
	void OnPickupInstigatorDataChanged(int& TrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupCreative.GivePickupToPawn (Underlying native function: GivePickupToPawn 0x83dc5a8)
	void GivePickupToPawn(class AFortPawn*& Pawn, bool& DestoryAfterPickup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupCreative.GetAccentColorParam (Underlying native function: GetAccentColorParam 0x83db144)
	float GetAccentColorParam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupCreative.BlueprintTeamAllowed (Underlying native function: BlueprintTeamAllowed 0x83d7558)
	bool BlueprintTeamAllowed(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortPickupCreative.BlueprintClassAllowed (Underlying native function: BlueprintClassAllowed 0x83d74c4)
	bool BlueprintClassAllowed(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent | Const)
};

