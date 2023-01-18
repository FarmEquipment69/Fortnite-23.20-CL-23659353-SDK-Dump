// Class /Script/Engine.NavLinkDefinition
// Size: 0x50
class UNavLinkDefinition : public UObject
{
	struct TArray<struct FNavigationLink> Links; // 0x28 (0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38 (0x10)
	unsigned char padding_48[0x8]; // 0x48 (0x8)
};

