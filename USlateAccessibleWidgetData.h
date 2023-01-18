// Class /Script/UMG.SlateAccessibleWidgetData
// Size: 0x80
class USlateAccessibleWidgetData : public UObject
{
	bool bCanChildrenBeAccessible; // 0x28 (0x1)
	enum ESlateAccessibleBehavior AccessibleBehavior; // 0x29 (0x1)
	enum ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a (0x1)
	unsigned char unreflected_2b[0x5]; // 0x2b (0x5) 
	struct FText AccessibleText; // 0x30 (0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48 (0xc)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FText AccessibleSummaryText; // 0x58 (0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70 (0xc)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

