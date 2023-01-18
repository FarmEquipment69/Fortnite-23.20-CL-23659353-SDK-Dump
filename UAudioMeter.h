// Class /Script/AudioWidgets.AudioMeter
// Size: 0x680
class UAudioMeter : public UWidget
{
	struct TArray<struct FMeterChannelInfo> MeterChannelInfo; // 0x148 (0x10)
	struct FDelegate MeterChannelInfoDelegate; // 0x158 (0xc)
	unsigned char unreflected_164[0xc]; // 0x164 (0xc) 
	struct FAudioMeterStyle WidgetStyle; // 0x170 (0x480)
	struct TEnumAsByte<EOrientation> Orientation; // 0x5f0 (0x1)
	unsigned char unreflected_5f1[0x3]; // 0x5f1 (0x3) 
	struct FLinearColor BackgroundColor; // 0x5f4 (0x10)
	struct FLinearColor MeterBackgroundColor; // 0x604 (0x10)
	struct FLinearColor MeterValueColor; // 0x614 (0x10)
	struct FLinearColor MeterPeakColor; // 0x624 (0x10)
	struct FLinearColor MeterClippingColor; // 0x634 (0x10)
	struct FLinearColor MeterScaleColor; // 0x644 (0x10)
	struct FLinearColor MeterScaleLabelColor; // 0x654 (0x10)
	unsigned char padding_664[0x1c]; // 0x664 (0x1c)

	/* Functions */

	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor (Underlying native function: SetMeterValueColor 0x7a0b568)
	void SetMeterValueColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor (Underlying native function: SetMeterScaleLabelColor 0x7a0b4cc)
	void SetMeterScaleLabelColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor (Underlying native function: SetMeterScaleColor 0x7a0b430)
	void SetMeterScaleColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor (Underlying native function: SetMeterPeakColor 0x7a0b394)
	void SetMeterPeakColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor (Underlying native function: SetMeterClippingColor 0x7a0b2f8)
	void SetMeterClippingColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo (Underlying native function: SetMeterChannelInfo 0x7a0b25c)
	void SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor (Underlying native function: SetMeterBackgroundColor 0x7a0b1c0)
	void SetMeterBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor (Underlying native function: SetBackgroundColor 0x7a0affc)
	void SetBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// DelegateFunction /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature (Has no native function)
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfoDelegateSignature(); // (Public | Delegate)

	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo (Underlying native function: GetMeterChannelInfo 0x7a0ad78)
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

