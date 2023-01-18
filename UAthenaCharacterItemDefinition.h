// Class /Script/FortniteGame.AthenaCharacterItemDefinition
// Size: 0x908
class UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition
{
	unsigned char unreflected_7b0[0x8]; // 0x7b0 (0x8) 
	struct TMap<struct FName, class UClass*> RequestedDataStores; // 0x7b8 (0x50)
	struct TMap<struct TEnumAsByte<EFortCustomPartType>, class UMarshalledVFX_AuthoredDataConfig*> AuthoredVFXDataByPart; // 0x808 (0x50)
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> BaseCharacterParts; // 0x858 (0x10)
	class UFortHeroType* HeroDefinition; // 0x868 (0x8)
	class UAthenaBackpackItemDefinition* DefaultBackpack; // 0x870 (0x8)
	struct TArray<class UAthenaCosmeticItemDefinition*> RequiredCosmeticItems; // 0x878 (0x10)
	float PreviewPawnScale; // 0x888 (0x4)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x88c (0x1)
	unsigned char unreflected_88d[0x3]; // 0x88d (0x3) 
	struct TWeakObjectPtr<class UFortFeedbackBank> FeedbackBank; // 0x890 (0x28)
	struct TMap<struct FGameplayTag, struct FAthenaCharacterTaggedPartsList> TaggedPartsOverride; // 0x8b8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.AthenaCharacterItemDefinition.GetCharacterGender_BP (Underlying native function: GetCharacterGender_BP 0x5d1cce0)
	struct TEnumAsByte<EFortCustomGender> GetCharacterGenderBP(struct FFortAthenaLoadout& Loadout); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCharacterItemDefinition.FindBodyType_BP (Underlying native function: FindBodyType_BP 0x5d1cbc0)
	bool FindBodyTypeBP(struct TArray<struct FMcpVariantChannelInfo>& InCharacterVariantChannels, struct TEnumAsByte<EFortCustomBodyType>& OutBodyType); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

