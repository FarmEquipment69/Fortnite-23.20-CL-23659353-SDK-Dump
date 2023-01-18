// Class /Script/FortniteUI.FortHudContextTutorialTipsBase
// Size: 0x4a0
class UFortHudContextTutorialTipsBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x40]; // 0x3a8 (0x40) 
	struct TArray<struct FContextPosition> PositionPerPlatform; // 0x3e8 (0x10)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x3f8 (0x2)
	unsigned char unreflected_3fa[0x6]; // 0x3fa (0x6) 
	class UCanvasPanel* CanvasPanelContainer; // 0x400 (0x8)
	class UCanvasPanel* CanvasPanelBall; // 0x408 (0x8)
	class UOverlay* OverlayContainer; // 0x410 (0x8)
	class UFortHudContextTutorialIndicatorBall* ContextTutorialBall; // 0x418 (0x8)
	class UFortHudContextTutorialIndicatorBall* ContextTutorialBallParented; // 0x420 (0x8)
	class UCommonActionWidget* TipActionWidget; // 0x428 (0x8)
	float MaxLerpSpeedPercentPerSecond; // 0x430 (0x4)
	unsigned char unreflected_434[0x4]; // 0x434 (0x4) 
	struct FDataTableRowHandle CloseObjectInputAction; // 0x438 (0x10)
	unsigned char unreflected_448[0x4c]; // 0x448 (0x4c) 
	float UpdateWorldMarkersInterval; // 0x494 (0x4)
	unsigned char padding_498[0x8]; // 0x498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.UnregisterCloseButtonInput (Underlying native function: UnregisterCloseButtonInput 0xa6dc564)
	void UnregisterCloseButtonInput(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.StopIntroAnimation (Has no native function)
	void StopIntroAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.StartWorldMarkerOutroAnimation (Underlying native function: StartWorldMarkerOutroAnimation 0xa6dc1c4)
	void StartWorldMarkerOutroAnimation(int& InPlayerID, int& InInstanceID); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.StartWorldMarkerIntroAnimation (Has no native function)
	void StartWorldMarkerIntroAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.StartLerpContextTutorialBall (Underlying native function: StartLerpContextTutorialBall 0xa6dc088)
	void StartLerpContextTutorialBall(int& InPlayerID, int& InInstanceID, float& TotalTime, float& StartDelay); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.SetPosition (Underlying native function: SetPosition 0xa6db7c4)
	void SetPosition(struct FVector2D& Position, struct TEnumAsByte<EHorizontalAlignment>& HorizontalAlignment, struct TEnumAsByte<EVerticalAlignment>& VerticalAlignment); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.SetDefaultPlatformPosition (Underlying native function: SetDefaultPlatformPosition 0xa6db0c8)
	void SetDefaultPlatformPosition(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.RegisterCloseButtonInput (Underlying native function: RegisterCloseButtonInput 0xa6daa88)
	void RegisterCloseButtonInput(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.OnButtonCloseProgressImplementation (Has no native function)
	void OnButtonCloseProgressImplementation(float& Progress); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHudContextTutorialTipsBase.OnButtonCloseImplementation (Has no native function)
	void OnButtonCloseImplementation(); // (Event | Protected | BlueprintEvent)
};

