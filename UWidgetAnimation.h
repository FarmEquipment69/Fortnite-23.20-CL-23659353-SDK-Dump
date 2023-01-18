// Class /Script/UMG.WidgetAnimation
// Size: 0x98
class UWidgetAnimation : public UMovieSceneSequence
{
	class UMovieScene* MovieScene; // 0x68 (0x8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x70 (0x10)
	bool bLegacyFinishOnStop; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FString DisplayLabel; // 0x88 (0x10)

	/* Functions */

	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted (Underlying native function: UnbindFromAnimationStarted 0x9af05c4)
	void UnbindFromAnimationStarted(class UUserWidget*& Widget, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished (Underlying native function: UnbindFromAnimationFinished 0x2369c14)
	void UnbindFromAnimationFinished(class UUserWidget*& Widget, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted (Underlying native function: UnbindAllFromAnimationStarted 0x9af0538)
	void UnbindAllFromAnimationStarted(class UUserWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished (Underlying native function: UnbindAllFromAnimationFinished 0x9af04ac)
	void UnbindAllFromAnimationFinished(class UUserWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimation.GetStartTime (Underlying native function: GetStartTime 0x9aeca70)
	float GetStartTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetAnimation.GetEndTime (Underlying native function: GetEndTime 0x1595104)
	float GetEndTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted (Underlying native function: BindToAnimationStarted 0x9aebb90)
	void BindToAnimationStarted(class UUserWidget*& Widget, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished (Underlying native function: BindToAnimationFinished 0x19c9d84)
	void BindToAnimationFinished(class UUserWidget*& Widget, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)
};

