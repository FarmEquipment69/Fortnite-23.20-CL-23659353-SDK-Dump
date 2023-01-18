// Class /Script/FortniteGame.FortCustomizationsPreloader
// Size: 0x150
class UFortCustomizationsPreloader : public UObject
{
	unsigned char unreflected_28[0x60]; // 0x28 (0x60) 
	struct TSet<class UCustomCharacterPart*> PrioritizedCharacterPartsNPCBudget; // 0x88 (0x50)
	struct TSet<class UCustomCharacterPart*> PrioritizedCharacterPartsPlayerBudget; // 0xd8 (0x50)
	struct TArray<class UFortAIPawnCustomizationDefinition*> PrioritizedAIPawnCustomizations; // 0x128 (0x10)
	unsigned char padding_138[0x18]; // 0x138 (0x18)
};

