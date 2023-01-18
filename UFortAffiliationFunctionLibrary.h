// Class /Script/FortniteGame.FortAffiliationFunctionLibrary
// Size: 0x28
class UFortAffiliationFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.RemoveFromFaction (Underlying native function: RemoveFromFaction 0x82896dc)
	static void RemoveFromFaction(class AActor*& Actor, struct FGameplayTag& FactionTag); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.RemoveFromAllFactions (Underlying native function: RemoveFromAllFactions 0x828966c)
	static void RemoveFromAllFactions(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.GetCurrentFactions (Underlying native function: GetCurrentFactions 0x8287e30)
	static struct FGameplayTagContainer GetCurrentFactions(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.ChangeFactionAttitudeTowardsActor (Underlying native function: ChangeFactionAttitudeTowardsActor 0x8286764)
	static void ChangeFactionAttitudeTowardsActor(class UObject*& WorldContextObject, struct FGameplayTagContainer& FactionTags, class AActor*& TowardsActor, struct TEnumAsByte<EFortFactionAttitude>& Attitude); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.ChangeAttitudeBetweenActors (Underlying native function: ChangeAttitudeBetweenActors 0x8286604)
	static void ChangeAttitudeBetweenActors(class UObject*& WorldContextObject, class AActor*& FactionOwner, class AActor*& TowardsActor, struct TEnumAsByte<EFortFactionAttitude>& Attitude); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.AddToFactions (Underlying native function: AddToFactions 0x8286500)
	static void AddToFactions(class AActor*& Actor, struct FGameplayTagContainer& FactionsTagContainer); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.AddToFaction (Underlying native function: AddToFaction 0x828644c)
	static void AddToFaction(class AActor*& Actor, struct FGameplayTag& FactionTag); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)
};

