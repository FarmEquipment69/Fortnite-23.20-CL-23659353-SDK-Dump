// Class /Script/FortniteUI.FortModalContainerWidget
// Size: 0x1a0
class UFortModalContainerWidget : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	enum EModalContainerSize SizeConstraint; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	struct TArray<struct FFortModalContainerSizeEntry> DefaultSizeEntries; // 0x158 (0x10)
	class UFortModalContainerData* OverrideSizeEntries; // 0x168 (0x8)
	class UWidget* TopContent; // 0x170 (0x8)
	class UWidget* MiddleContent; // 0x178 (0x8)
	class UWidget* BottomContent; // 0x180 (0x8)
	class UWidget* BackgroudContent; // 0x188 (0x8)
	unsigned char padding_190[0x10]; // 0x190 (0x10)
};

