// Class /Script/FortniteGame.InteractionPointWidget
// Size: 0x2c0
class UInteractionPointWidget : public UUserWidget
{
	class UWidgetSwitcher* SwitcherIcons; // 0x268 (0x8)
	struct TArray<float> IconSwitchDistances; // 0x270 (0x10)
	class UTextBlock* TextBlockDistance; // 0x280 (0x8)
	class AActor* TargetActor; // 0x288 (0x8)
	bool bScaleIconByDistance; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	float MinIconScale; // 0x294 (0x4)
	float MinIconScaleDistance; // 0x298 (0x4)
	float MaxIconScale; // 0x29c (0x4)
	float MaxIconScaleDistance; // 0x2a0 (0x4)
	float HideIconWhenCloseDistance; // 0x2a4 (0x4)
	float DistanceUpdateInterval; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0xc]; // 0x2ac (0xc) 
	bool bValidSwitcher; // 0x2b8 (0x1)
	unsigned char padding_2b9[0x7]; // 0x2b9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.InteractionPointWidget.UpdateDistance (Underlying native function: UpdateDistance 0x84615e4)
	void UpdateDistance(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InteractionPointWidget.StopDistanceUpdateTimer (Underlying native function: StopDistanceUpdateTimer 0x84614c8)
	void StopDistanceUpdateTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InteractionPointWidget.StartDistanceUpdateTimer (Underlying native function: StartDistanceUpdateTimer 0x84614a0)
	void StartDistanceUpdateTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InteractionPointWidget.SetDistanceText (Underlying native function: SetDistanceText 0x8460be0)
	void SetDistanceText(float& Distance); // (Final | Native | Protected)
};

