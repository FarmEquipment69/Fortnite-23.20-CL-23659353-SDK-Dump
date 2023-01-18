// Class /Script/FortniteGame.FortVariantTokenType
// Size: 0x478
class UFortVariantTokenType : public UFortAccountItemDefinition
{
	enum EItemProfileType ProfileType; // 0x420 (0x1)
	unsigned char unreflected_421[0x7]; // 0x421 (0x7) 
	class UFortItemDefinition* cosmeticitem; // 0x428 (0x8)
	struct FGameplayTag VariantChannelTag; // 0x430 (0x4)
	struct FGameplayTag VariantNameTag; // 0x434 (0x4)
	struct TArray<struct FCosmeticVariantInfo*> AdditionalVariantsToGrant; // 0x438 (0x10)
	struct TArray<struct FCosmeticVariantInfo*> VariantPreviewOverrides; // 0x448 (0x10)
	bool bAutoEquipVariant; // 0x458 (0x1)
	enum EFortVariantTokenEquipRule VariantEquipRules; // 0x459 (0x1)
	bool bMarkItemUnseen; // 0x45a (0x1)
	bool bCreateGiftbox; // 0x45b (0x1)
	bool bGrantBaseItem; // 0x45c (0x1)
	unsigned char unreflected_45d[0x3]; // 0x45d (0x3) 
	struct FString CustomGiftbox; // 0x460 (0x10)
	bool bUseDisplayNameInGiftbox; // 0x470 (0x1)
	unsigned char padding_471[0x7]; // 0x471 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortVariantTokenType.GetVariantNameTag (Underlying native function: GetVariantNameTag 0x8a46d9c)
	struct FGameplayTag GetVariantNameTag(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVariantTokenType.GetVariantChannelTag (Underlying native function: GetVariantChannelTag 0x868c094)
	struct FGameplayTag GetVariantChannelTag(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVariantTokenType.GetCosmeticItem (Underlying native function: GetCosmeticItem 0x7a9d0a8)
	class UFortItemDefinition* GetCosmeticItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

