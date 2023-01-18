// ScriptStruct /Script/FortniteUI.FortTopBarTabButtonInfo
// Size: 0x130
struct FFortTopBarTabButtonInfo
{
	struct FName TabId; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString CalendarEventName; // 0x8 (0x10)
	struct FText DisplayName; // 0x18 (0x18)
	struct FSlateBrush IconBrush; // 0x30 (0xc0)
	enum EFortUIFeature LinkedUIFeature; // 0xf0 (0x1)
	enum EFortBangType BangType; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x2]; // 0xf2 (0x2) 
	int SortOrder; // 0xf4 (0x4)
	bool bForceImage; // 0xf8 (0x1)
	bool bPrimaryPlayerOnly; // 0xf9 (0x1)
	bool bInteractAnalytic; // 0xfa (0x1)
	unsigned char unreflected_fb[0x5]; // 0xfb (0x5) 
	struct TWeakObjectPtr<class UClass> OverrideTabWidget; // 0x100 (0x28)
	bool bIsDynamicTab; // 0x128 (0x1)
	unsigned char padding_129[0x7]; // 0x129 (0x7)
};

