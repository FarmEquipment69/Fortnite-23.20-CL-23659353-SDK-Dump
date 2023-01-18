// Class /Script/FortniteGame.SpecialEventInputHelperComponent
// Size: 0x208
class USpecialEventInputHelperComponent : public UActorComponent
{
	struct FMulticastInlineDelegate SpecialEventInputUpdateDelegate; // 0xa0 (0x10)
	struct FMulticastInlineDelegate SpecialEventLookInputUpdateDelegate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate SpecialEventGyroInputUpdateDelegate; // 0xc0 (0x10)
	struct FMulticastInlineDelegate SpecialEventInputPressDelegate; // 0xd0 (0x10)
	struct FMulticastInlineDelegate AnyKeyPressedDelegate; // 0xe0 (0x10)
	bool bBlockInput; // 0xf0 (0x1)
	bool bConsumeMoveInput; // 0xf1 (0x1)
	bool bConsumeLookInput; // 0xf2 (0x1)
	unsigned char unreflected_f3[0x1]; // 0xf3 (0x1) 
	int Priority; // 0xf4 (0x4)
	struct TMap<struct FName, struct FSpecialEventInputHelperActionBindData> InputActionMap; // 0xf8 (0x50)
	bool bAllowRepeatAnyKeyEvents; // 0x148 (0x1)
	unsigned char unreflected_149[0x3]; // 0x149 (0x3) 
	float MinTimeBetweenRepeatAnyKeyEvents; // 0x14c (0x4)
	struct TArray<struct FName> IgnoredAnyKeyEventKeyNames; // 0x150 (0x10)
	class UInputComponent* InputComp; // 0x160 (0x8)
	unsigned char padding_168[0xa0]; // 0x168 (0xa0)

	/* Functions */

	// Function /Script/FortniteGame.SpecialEventInputHelperComponent.SetEnableAnyKey (Underlying native function: SetEnableAnyKey 0x8547360)
	void SetEnableAnyKey(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SpecialEventInputHelperComponent.PushInputComponent (Underlying native function: PushInputComponent 0x8546be0)
	void PushInputComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SpecialEventInputHelperComponent.PopInputComponent (Underlying native function: PopInputComponent 0x8546bcc)
	void PopInputComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

