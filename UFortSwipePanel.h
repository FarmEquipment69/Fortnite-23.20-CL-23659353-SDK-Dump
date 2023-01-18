// Class /Script/FortniteUI.FortSwipePanel
// Size: 0x2b8
class UFortSwipePanel : public UContentWidget
{
	struct FVector2D SwipeThreshold; // 0x160 (0x10)
	bool bBeginSwipeOnPointerEnter; // 0x170 (0x1)
	bool bConsumePointerInput; // 0x171 (0x1)
	unsigned char unreflected_172[0x6]; // 0x172 (0x6) 
	struct FMulticastInlineDelegate BPOnSwipeLeft; // 0x178 (0x10)
	struct FMulticastInlineDelegate BPOnSwipeRight; // 0x188 (0x10)
	struct FMulticastInlineDelegate BPOnSwipeUp; // 0x198 (0x10)
	struct FMulticastInlineDelegate BPOnSwipeDown; // 0x1a8 (0x10)
	struct FFortSwipeDetector SwipeDetector; // 0x1b8 (0x90)
	unsigned char padding_248[0x70]; // 0x248 (0x70)

	/* Functions */

	// Function /Script/FortniteUI.FortSwipePanel.GetSwipeInfo (Underlying native function: GetSwipeInfo 0xa7e5bd8)
	void GetSwipeInfo(int& OutIndex, struct FVector2D& OutSwipePercentage); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

