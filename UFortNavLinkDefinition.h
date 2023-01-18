// Class /Script/FortniteAI.FortNavLinkDefinition
// Size: 0x80
class UFortNavLinkDefinition : public UNavLinkDefinition
{
	struct FFortNavLinkPattern* Pattern; // 0x50 (0x8)
	struct TArray<struct FFortNavLinkPattern*> AdditionalPatterns; // 0x58 (0x10)
	struct TArray<struct TEnumAsByte<EBuildingStairsRailing>> StairsRailing; // 0x68 (0x10)
	enum EBuildingFloorRailing FloorRailing; // 0x78 (0x1)
	struct TEnumAsByte<EFortNavLinkPattern> PatternType; // 0x79 (0x1)
	unsigned char padding_7a[0x6]; // 0x7a (0x6)
};

