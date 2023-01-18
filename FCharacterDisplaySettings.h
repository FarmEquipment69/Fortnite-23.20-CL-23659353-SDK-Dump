// ScriptStruct /Script/FortniteGame.CharacterDisplaySettings
// Size: 0x90
struct FCharacterDisplaySettings
{
	struct TWeakObjectPtr<class UFortAccountItemDefinition> PrimaryItem; // 0x8 (0x8)
	unsigned char unreflected_10[0x18]; // 0x10 (0x18) 
	struct TArray<class UAthenaCosmeticAccountItem*> CosmeticItems; // 0x28 (0x10)
	unsigned char unreflected_38[0x10]; // 0x38 (0x10) 
	struct TArray<struct FFortCosmeticVariantPreview> ItemVariantPreviews; // 0x48 (0x10)
	unsigned char padding_58[0x38]; // 0x58 (0x38)
};

