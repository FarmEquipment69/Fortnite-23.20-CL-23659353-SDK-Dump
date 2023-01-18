// Class /Script/CommonUI.CommonNumericTextBlock
// Size: 0x3f0
class UCommonNumericTextBlock : public UCommonTextBlock
{
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x380 (0x10)
	float CurrentNumericValue; // 0x390 (0x4)
	enum ECommonNumericType NumericType; // 0x394 (0x1)
	unsigned char unreflected_395[0x3]; // 0x395 (0x3) 
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x398 (0x14)
	float EaseOutInterpolationExponent; // 0x3ac (0x4)
	float InterpolationUpdateInterval; // 0x3b0 (0x4)
	float PostInterpolationShrinkDuration; // 0x3b4 (0x4)
	bool PerformSizeInterpolation; // 0x3b8 (0x1)
	bool IsPercentage; // 0x3b9 (0x1)
	unsigned char padding_3ba[0x36]; // 0x3ba (0x36)

	/* Functions */

	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType (Underlying native function: SetNumericType 0x6a4e24c)
	void SetNumericType(enum ECommonNumericType& InNumericType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue (Underlying native function: SetCurrentValue 0x1bed910)
	void SetCurrentValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature (Has no native function)
	void OnOutroDelegateSignature(class UCommonNumericTextBlock*& NumericTextBlock); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature (Has no native function)
	void OnInterpolationUpdatedDelegateSignature(class UCommonNumericTextBlock*& NumericTextBlock, float& LastValue, float& NewValue); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature (Has no native function)
	void OnInterpolationStartedDelegateSignature(class UCommonNumericTextBlock*& NumericTextBlock); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature (Has no native function)
	void OnInterpolationEndedDelegateSignature(class UCommonNumericTextBlock*& NumericTextBlock, bool& HadCompleted); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue (Underlying native function: IsInterpolatingNumericValue 0x6a4c4e0)
	bool IsInterpolatingNumericValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue (Underlying native function: InterpolateToValue 0x6a4c2d8)
	void InterpolateToValue(float& TargetValue, float& MaximumInterpolationDuration, float& MinimumChangeRate, float& OutroOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue (Underlying native function: GetTargetValue 0x6a4bdf0)
	float GetTargetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

