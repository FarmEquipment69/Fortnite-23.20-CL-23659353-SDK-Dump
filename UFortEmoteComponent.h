// Class /Script/FortniteGame.FortEmoteComponent
// Size: 0xa8
class UFortEmoteComponent : public UActorComponent
{
	class AFortPersistentProp* ActivePersistentProp; // 0xa0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortEmoteComponent.SpawnPersistentProp (Underlying native function: SpawnPersistentProp 0x8235ff8)
	class AFortPersistentProp* SpawnPersistentProp(class UClass*& PropClass, struct FName& AttachSocket); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortEmoteComponent.GetActivePersistentProp (Underlying native function: GetActivePersistentProp 0x2676038)
	class AFortPersistentProp* GetActivePersistentProp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteComponent.DespawnActivePersistentProp (Underlying native function: DespawnActivePersistentProp 0x8235d4c)
	void DespawnActivePersistentProp(bool& bShouldInstantDestroy); // (Final | Native | Public | BlueprintCallable)
};

