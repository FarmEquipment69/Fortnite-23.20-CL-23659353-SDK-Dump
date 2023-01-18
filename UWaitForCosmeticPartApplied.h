// Class /Script/FortniteGame.WaitForCosmeticPartApplied
// Size: 0x70
class UWaitForCosmeticPartApplied : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnPartApplied; // 0x30 (0x10)
	unsigned char padding_40[0x30]; // 0x40 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.WaitForCosmeticPartApplied.WaitForCosmeticSpecificPartApplied (Underlying native function: WaitForCosmeticSpecificPartApplied 0x5eb8350)
	static class UWaitForCosmeticPartApplied* WaitForCosmeticSpecificPartApplied(class UObject*& WorldContextObject, class AFortPlayerPawn*& FortPlayerPawn, bool& bSkipNullMesh, struct TEnumAsByte<EFortCustomPartType>& PartType, struct TArray<class UObject*>& AnyObjects, struct TArray<struct FString>& AnyStrings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.WaitForCosmeticPartApplied.WaitForCosmeticPartApplied (Underlying native function: WaitForCosmeticPartApplied 0x5eb8100)
	static class UWaitForCosmeticPartApplied* WaitForCosmeticPartApplied(class UObject*& WorldContextObject, class AFortPlayerPawn*& FortPlayerPawn, bool& bSkipNullMesh, struct TArray<class UObject*>& AnyObjects, struct TArray<struct FString>& AnyStrings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.WaitForCosmeticPartApplied.PartApplied (Underlying native function: PartApplied 0x5eb7f20)
	void PartApplied(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Private)
};

