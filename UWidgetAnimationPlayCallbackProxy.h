// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x40
class UWidgetAnimationPlayCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate Finished; // 0x28 (0x10)
	unsigned char padding_38[0x8]; // 0x38 (0x8)

	/* Functions */

	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject (Underlying native function: CreatePlayAnimationTimeRangeProxyObject 0x9aebf4c)
	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget*& Widget, class UWidgetAnimation*& InAnimation, float& StartAtTime, float& EndAtTime, int& NumLoopsToPlay, struct TEnumAsByte<EUMGSequencePlayMode>& PlayMode, float& PlaybackSpeed); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject (Underlying native function: CreatePlayAnimationProxyObject 0x9aebd3c)
	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget*& Widget, class UWidgetAnimation*& InAnimation, float& StartAtTime, int& NumLoopsToPlay, struct TEnumAsByte<EUMGSequencePlayMode>& PlayMode, float& PlaybackSpeed); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

