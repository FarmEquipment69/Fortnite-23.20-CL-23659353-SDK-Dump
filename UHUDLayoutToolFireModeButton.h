// Class /Script/FortniteUI.HUDLayoutToolFireModeButton
// Size: 0x2e0
class UHUDLayoutToolFireModeButton : public UCommonUserWidget
{
	enum EFireModeType FireModeType; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FText FireModeName; // 0x298 (0x18)
	struct FText FireModeDescription; // 0x2b0 (0x18)
	class UTexture2D* FireModeImage; // 0x2c8 (0x8)
	class UCommonButtonLegacy* SelectionButton; // 0x2d0 (0x8)
	class UFortMovieWidget* MovieWidget; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.HUDLayoutToolFireModeButton.SelectFireMode (Has no native function)
	void SelectFireMode(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.HUDLayoutToolFireModeButton.OnSelected (Has no native function)
	void OnSelected(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HUDLayoutToolFireModeButton.OnDeselected (Has no native function)
	void OnDeselected(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HUDLayoutToolFireModeButton.GetFireModeType (Underlying native function: GetFireModeType 0x8700490)
	enum EFireModeType GetFireModeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.HUDLayoutToolFireModeButton.GetFireModeDescription (Underlying native function: GetFireModeDescription 0xa5b8e48)
	struct FText GetFireModeDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

