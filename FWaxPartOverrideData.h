// ScriptStruct /Script/FortniteGame.WaxPartOverrideData
// Size: 0x30
struct FWaxPartOverrideData
{
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<class UCustomCharacterPart*> PartsToSwapIn; // 0x8 (0x10)
	struct TArray<class UCustomCharacterPart*> DefaultParts; // 0x18 (0x10)
	struct FGameplayTag CosmeticSwapTag; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

