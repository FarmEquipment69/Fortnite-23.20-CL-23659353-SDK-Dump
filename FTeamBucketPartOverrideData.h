// ScriptStruct /Script/FortniteGame.TeamBucketPartOverrideData
// Size: 0x38
struct FTeamBucketPartOverrideData
{
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x0 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> BodyType; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TArray<class UCustomCharacterPart*> PartsToSwapIn; // 0x8 (0x10)
	bool bShouldRemoveExtras; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<class UCustomCharacterPart*> PartsToAddIfSpecialTags; // 0x20 (0x10)
	struct FGameplayTag CosmeticSwapTag; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

