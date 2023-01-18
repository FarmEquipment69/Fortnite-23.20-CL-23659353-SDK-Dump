// Class /Script/FortniteUI.FortSimpleWidgetAnimationsPanel
// Size: 0x190
class UFortSimpleWidgetAnimationsPanel : public UContentWidget
{
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x160 (0x10)
	struct TArray<struct FFortSimpleWidgetAnimations> Animations; // 0x170 (0x10)
	unsigned char padding_180[0x10]; // 0x180 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.StopAnimationByName (Underlying native function: StopAnimationByName 0xa8f3324)
	bool StopAnimationByName(struct FName& Name); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.StopAllAnimations (Underlying native function: StopAllAnimations 0xa8f3310)
	void StopAllAnimations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ResetAnimationByName (Underlying native function: ResetAnimationByName 0xa8f1134)
	bool ResetAnimationByName(struct FName& Name); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ResetAllAnimations (Underlying native function: ResetAllAnimations 0xa8f1120)
	void ResetAllAnimations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.PlayAnimationByName (Underlying native function: PlayAnimationByName 0x15c1638)
	bool PlayAnimationByName(struct FName& Name, float& Speed); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.OnAnimationsFinished__DelegateSignature (Has no native function)
	void OnAnimationsFinishedDelegateSignature(struct FName& Name); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ForwardOnAnimationsFinished (Underlying native function: ForwardOnAnimationsFinished 0xa8ea9a0)
	void ForwardOnAnimationsFinished(struct FName& Name); // (Final | Native | Private)
};

