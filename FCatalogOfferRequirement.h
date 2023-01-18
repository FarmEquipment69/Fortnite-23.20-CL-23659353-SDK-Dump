// ScriptStruct /Script/GameSubCatalog.CatalogOfferRequirement
// Size: 0x18
struct FCatalogOfferRequirement
{
	enum ECatalogRequirementType RequirementType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int MinQuantity; // 0x4 (0x4)
	struct FString RequiredId; // 0x8 (0x10)
};

