// Class /Script/EventScreenBase.EventScreenListView
// Size: 0x3e0
class UEventScreenListView : public UListViewBase
{
	unsigned char unreflected_260[0xd8]; // 0x260 (0xd8) 
	struct FMulticastInlineDelegate OnProgressBarAnimationStartedEvent; // 0x338 (0x10)
	struct FMulticastInlineDelegate OnProgressBarAnimationCompletedEvent; // 0x348 (0x10)
	struct FMulticastInlineDelegate OnProgressBarAnimationInterruptedEvent; // 0x358 (0x10)
	unsigned char unreflected_368[0x20]; // 0x368 (0x20) 
	class UClass* RewardWidgetClass; // 0x388 (0x8)
	class UClass* SpacerWidgetClass; // 0x390 (0x8)
	float EntrySpacing; // 0x398 (0x4)
	float MaxItemsInView; // 0x39c (0x4)
	bool bPreviewMode; // 0x3a0 (0x1)
	unsigned char unreflected_3a1[0x7]; // 0x3a1 (0x7) 
	class UCurveFloat* ProgressAnimationCurve; // 0x3a8 (0x8)
	unsigned char padding_3b0[0x30]; // 0x3b0 (0x30)
};

