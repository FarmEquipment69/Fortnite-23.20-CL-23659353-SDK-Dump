// Class /Script/FortniteGame.FortMcpCollectableFish
// Size: 0xf8
class UFortMcpCollectableFish : public UFortMcpCollectionBase
{
	unsigned char unreflected_98[0x10]; // 0x98 (0x10) 
	struct TMap<struct FString, class UFortItemDefinition*> SpeciesToItemDefMap; // 0xa8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpCollectableFish.AddToPlayerCollection (Underlying native function: AddToPlayerCollection 0x8b9ca60)
	static enum EFortCollectedState AddToPlayerCollection(class AFortPlayerController*& FPC, struct FGameplayTag& Variant, struct FFortMcpCollectedFishProperties*& Props, struct FGameplayTagContainer& ContextTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

