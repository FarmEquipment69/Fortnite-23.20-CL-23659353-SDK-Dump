// Class /Script/FortniteGame.FortNearbyActorsPerceptionComponent
// Size: 0xc8
class UFortNearbyActorsPerceptionComponent : public UActorComponent
{
	unsigned char unreflected_c8[0xc8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortNearbyActorsPerceptionComponent.FindOrCreateNearbyActorsPerceptionComponentOnActor (Underlying native function: FindOrCreateNearbyActorsPerceptionComponentOnActor 0x5d851a0)
	static class UFortNearbyActorsPerceptionComponent* FindOrCreateNearbyActorsPerceptionComponentOnActor(class AActor*& Owner, class UClass*& ActorComponentClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortNearbyActorsPerceptionComponent.BP_UnregisterListener (Underlying native function: BP_UnregisterListener 0x899b94c)
	static bool BPUnregisterListener(struct FFortNearbyActorsHandle& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNearbyActorsPerceptionComponent.BP_RegisterListener (Underlying native function: BP_RegisterListener 0x899b7dc)
	struct FFortNearbyActorsHandle BPRegisterListener(struct FFortNearbyActorsPerceptionConfiguration& Configuration, struct FDelegate& HandleDeltaDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

