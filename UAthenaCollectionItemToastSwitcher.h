// Class /Script/FortniteUI.AthenaCollectionItemToastSwitcher
// Size: 0x378
class UAthenaCollectionItemToastSwitcher : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FMulticastInlineDelegate OnResetToast; // 0x310 (0x10)
	unsigned char unreflected_320[0x20]; // 0x320 (0x20) 
	float TimeToShowToast; // 0x340 (0x4)
	float ActivationDelay; // 0x344 (0x4)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x348 (0x2)
	unsigned char unreflected_34a[0x6]; // 0x34a (0x6) 
	class UCommonVisibilitySwitcher* WidgetSwitcherToasts; // 0x350 (0x8)
	class UAthenaCollectionItemToast* ActiveCollectionItemToastWidget; // 0x358 (0x8)
	unsigned char unreflected_360[0x10]; // 0x360 (0x10) 
	bool bHasPrioritizedWidgetFocus; // 0x370 (0x1)
	unsigned char padding_371[0x7]; // 0x371 (0x7)
};

