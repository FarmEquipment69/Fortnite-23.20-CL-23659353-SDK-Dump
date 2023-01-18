// Class /Script/FortniteUI.VariantObject
// Size: 0x70
class UVariantObject : public UObject
{
	struct FGameplayTag VariantChannel; // 0x28 (0x4)
	struct FGameplayTag VariantTag; // 0x2c (0x4)
	struct FString VariantCustomData; // 0x30 (0x10)
	bool bOwned; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class UAthenaCosmeticItemDefinition* CosmeticDef; // 0x48 (0x8)
	unsigned char padding_50[0x20]; // 0x50 (0x20)
};

