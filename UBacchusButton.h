// Class /Script/FortniteUI.BacchusButton
// Size: 0x390
class UBacchusButton : public UBacchusHUDElement
{
	class UPaperSprite* DefaultIcon; // 0x318 (0x8)
	struct FLinearColor PressedColor; // 0x320 (0x10)
	struct FLinearColor UnpressedColor; // 0x330 (0x10)
	struct TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x340 (0x1)
	struct TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0x341 (0x1)
	unsigned char unreflected_342[0x2]; // 0x342 (0x2) 
	float ButtonSize; // 0x344 (0x4)
	float ButtonDisplayScale; // 0x348 (0x4)
	bool ShowRadialProgress; // 0x34c (0x1)
	unsigned char unreflected_34d[0x3]; // 0x34d (0x3) 
	struct FGameplayTag ListenedGamePlayTag; // 0x350 (0x4)
	unsigned char unreflected_354[0x4]; // 0x354 (0x4) 
	class UImage* ImageBackground; // 0x358 (0x8)
	unsigned char unreflected_360[0x8]; // 0x360 (0x8) 
	class USizeBox* SizeBoxButtonSize; // 0x368 (0x8)
	class USizeBox* SizeBoxImageSize; // 0x370 (0x8)
	class UImage* ImageIcon; // 0x378 (0x8)
	class URadialBacchusButtonBase* RadialButtonButtonCooldown; // 0x380 (0x8)
	class UButton* ButtonInternalButton; // 0x388 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BacchusButton.SetIconPressed (Underlying native function: SetIconPressed 0xa5a440c)
	void SetIconPressed(bool& bIsPressed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusButton.SetDefaultIcon (Underlying native function: SetDefaultIcon 0xa5a4390)
	void SetDefaultIcon(class UPaperSprite*& Icon); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusButton.SetButtonSprite (Underlying native function: SetButtonSprite 0x72923e0)
	void SetButtonSprite(class UPaperSprite*& NewSprite); // (0x00000002 | Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusButton.SetButtonSize (Underlying native function: SetButtonSize 0xa5a4308)
	void SetButtonSize(float& NewButtonSize); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusButton.SetButtonDisplayScale (Underlying native function: SetButtonDisplayScale 0xa5a4280)
	void SetButtonDisplayScale(float& NewDisplayScale); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusButton.OnClicked (Underlying native function: OnClicked 0x8d3da58)
	void OnClicked(); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusButton.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0xa5a2fb0)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Final | Native | Private)
};

