// Class /Script/FortniteGame.FortSpatialGameplayLibrary
// Size: 0x28
class UFortSpatialGameplayLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortSpatialGameplayLibrary.GetSpatialGameplayInterfaceFNameForActor (Underlying native function: GetSpatialGameplayInterfaceFNameForActor 0x17ea998)
	static struct FName GetSpatialGameplayInterfaceFNameForActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortSpatialGameplayLibrary.GetComponentsFromSpatialGameplayInterfaceByClass (Underlying native function: GetComponentsFromSpatialGameplayInterfaceByClass 0x86557e0)
	static bool GetComponentsFromSpatialGameplayInterfaceByClass(struct TScriptInterface<class IFortSpatialGameplayInterface>& SpatialGameplayInterface, class UClass*& ComponentType, struct TArray<class UActorComponent*>& OutComponents); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)
};

