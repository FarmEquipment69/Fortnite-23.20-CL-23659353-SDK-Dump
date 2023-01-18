// ScriptStruct /Script/FortniteGame.FortAttributeInfo
// Size: 0x90
struct FFortAttributeInfo
{
	struct FGameplayAttribute Attribute; // 0x0 (0x38)
	struct TEnumAsByte<EFortAttributeDisplay> DisplayMethod; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FText UnitDisplayName; // 0x40 (0x18)
	float DisplayScalingFactor; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FText FormatText; // 0x60 (0x18)
	struct TArray<struct FFortAttributeDetailsInfo> AttributeDetails; // 0x78 (0x10)
	bool bShowInSummaries; // 0x88 (0x1)
	bool bShowInDifferences; // 0x89 (0x1)
	bool bShowAsBuffInFE; // 0x8a (0x1)
	bool bNegativeValuesShouldBeDisplayedPositively; // 0x8b (0x1)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

