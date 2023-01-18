// Class /Script/FortniteAI.FortAIPawnCustomizationDefinition
// Size: 0xa8
class UFortAIPawnCustomizationDefinition : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x38 (0x28)
	struct TArray<struct FFortAIPawnMaterialDefinition> OverrideMaterials; // 0x60 (0x10)
	struct TWeakObjectPtr<class UClass> AnimationBP; // 0x70 (0x28)
	struct TArray<class UCustomCharacterPart*> CharacterParts; // 0x98 (0x10)
};

