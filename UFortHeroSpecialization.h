// Class /Script/FortniteGame.FortHeroSpecialization
// Size: 0x2d0
class UFortHeroSpecialization : public UPrimaryDataAsset
{
	struct TArray<struct FFortSpecializationSlot> SpecializationSlots; // 0x30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> CharacterParts; // 0x40 (0x10)
	struct TEnumAsByte<EFortAlteration> AlterationType; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct TArray<struct FHeroSpecializationAttributeRequirement> AttributeRequirements; // 0x58 (0x10)
	struct FGameplayTagContainer RequiredTags; // 0x68 (0x20)
	unsigned char bForceShowHeadAccessory; // 0x88 (0x1)
	unsigned char bForceShowBackpack; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct FSlateBrush CardIconBrush[0x3]; // 0x90 (0xc0) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortHeroSpecialization.GetCharacterPartPtrs (Underlying native function: GetCharacterPartPtrs 0x8ecf3c0)
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> GetCharacterPartPtrs(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

