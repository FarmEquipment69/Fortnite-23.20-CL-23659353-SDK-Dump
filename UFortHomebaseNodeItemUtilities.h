// Class /Script/FortniteUI.FortHomebaseNodeItemUtilities
// Size: 0x28
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen (Underlying native function: IsSquadSlotUnseen 0xa918f54)
	static bool IsSquadSlotUnseen(class AFortPlayerController*& FortPC, struct FName& SquadId, int& SquadSlot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer (Underlying native function: IsHomebaseNodeItemUnseenForTagContainer 0xa918c3c)
	static bool IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer (Underlying native function: GetHomebaseNodeItemNameForTagContainer 0xa916b78)
	static struct FString GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer (Underlying native function: GetHomebaseNodeItemForTagContainer 0xa916a78)
	static class UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot (Underlying native function: GetHomebaseNodeItemForSquadSlot 0xa916974)
	static class UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(class AFortPlayerController*& FortPC, struct FName& SquadId, int& SquadSlot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType (Underlying native function: AreAnyHomebaseNodeItemsUnseenForSquadType 0xa915b4c)
	static bool AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController*& FortPC, enum EFortHomebaseSquadType& SquadType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId (Underlying native function: AreAnyHomebaseNodeItemsUnseenForSquadId 0xa915a7c)
	static bool AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController*& FortPC, struct FName& SquadId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

