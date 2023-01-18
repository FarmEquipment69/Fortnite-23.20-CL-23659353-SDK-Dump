// Class /Script/FortniteGame.FortMcpCollectableCharacter
// Size: 0xa8
class UFortMcpCollectableCharacter : public UFortMcpCollectionBase
{
	unsigned char unreflected_a8[0xa8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortMcpCollectableCharacter.SavePlayerQuestUpdate (Underlying native function: SavePlayerQuestUpdate 0x8b66df8)
	static void SavePlayerQuestUpdate(class AFortPlayerController*& FPC, struct FGameplayTag& Variant, enum ESavePlayerQuestUpdate& Update); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpCollectableCharacter.AddToPlayerCollection (Underlying native function: AddToPlayerCollection 0x8b65de8)
	static enum EFortCollectedState AddToPlayerCollection(class AFortPlayerController*& FPC, struct FGameplayTag& Variant, struct FFortMcpCollectedCharacterProperties& Props, struct FGameplayTagContainer& ContextTags, enum ECharacterEncounterType& EncounterType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

