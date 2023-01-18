// Class /Script/FortniteGame.CreativeIslandResourceManagerComponent
// Size: 0xb0
class UCreativeIslandResourceManagerComponent : public UActorComponent
{
	struct TArray<struct FCreativeIslandResource> Resources; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.CreativeIslandResourceManagerComponent.RequestResource (Underlying native function: RequestResource 0x87d21a4)
	bool RequestResource(struct FName& tag, struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeIslandResourceManagerComponent.FreeResource (Underlying native function: FreeResource 0x87cf7f8)
	void FreeResource(struct FName& tag, struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

