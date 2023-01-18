// Class /Script/UMG.WidgetInteractionComponent
// Size: 0x560
class UWidgetInteractionComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x2a0 (0x10)
	unsigned char unreflected_2b0[0x10]; // 0x2b0 (0x10) 
	int VirtualUserIndex; // 0x2c0 (0x4)
	int PointerIndex; // 0x2c4 (0x4)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	float InteractionDistance; // 0x2cc (0x4)
	enum EWidgetInteractionSource InteractionSource; // 0x2d0 (0x1)
	bool bEnableHitTesting; // 0x2d1 (0x1)
	bool bShowDebug; // 0x2d2 (0x1)
	unsigned char unreflected_2d3[0x1]; // 0x2d3 (0x1) 
	float DebugSphereLineThickness; // 0x2d4 (0x4)
	float DebugLineThickness; // 0x2d8 (0x4)
	struct FLinearColor DebugColor; // 0x2dc (0x10)
	unsigned char unreflected_2ec[0x7c]; // 0x2ec (0x7c) 
	struct FHitResult CustomHitResult; // 0x368 (0xe0)
	struct FVector2D LocalHitLocation; // 0x448 (0x10)
	struct FVector2D LastLocalHitLocation; // 0x458 (0x10)
	class UWidgetComponent* HoveredWidgetComponent; // 0x468 (0x8)
	struct FHitResult LastHitResult; // 0x470 (0xe0)
	bool bIsHoveredWidgetInteractable; // 0x550 (0x1)
	bool bIsHoveredWidgetFocusable; // 0x551 (0x1)
	bool bIsHoveredWidgetHitTestVisible; // 0x552 (0x1)
	unsigned char padding_553[0xd]; // 0x553 (0xd)

	/* Functions */

	// Function /Script/UMG.WidgetInteractionComponent.SetFocus (Underlying native function: SetFocus 0x9b0e058)
	void SetFocus(class UWidget*& FocusWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult (Underlying native function: SetCustomHitResult 0x9b0d710)
	void SetCustomHitResult(struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar (Underlying native function: SendKeyChar 0x9b0c864)
	bool SendKeyChar(struct FString& Characters, bool& bRepeat); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel (Underlying native function: ScrollWheel 0x9b0c688)
	void ScrollWheel(float& ScrollDelta); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey (Underlying native function: ReleasePointerKey 0x9b0c260)
	void ReleasePointerKey(struct FKey& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey (Underlying native function: ReleaseKey 0x9b0c174)
	bool ReleaseKey(struct FKey& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey (Underlying native function: PressPointerKey 0x9b0c06c)
	void PressPointerKey(struct FKey& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.PressKey (Underlying native function: PressKey 0x9b0bf38)
	bool PressKey(struct FKey& Key, bool& bRepeat); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey (Underlying native function: PressAndReleaseKey 0x9b0be4c)
	bool PressAndReleaseKey(struct FKey& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget (Underlying native function: IsOverInteractableWidget 0x9b0b848)
	bool IsOverInteractableWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget (Underlying native function: IsOverHitTestVisibleWidget 0x9b0b830)
	bool IsOverHitTestVisibleWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget (Underlying native function: IsOverFocusableWidget 0x9b0b818)
	bool IsOverFocusableWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult (Underlying native function: GetLastHitResult 0x9b0ad08)
	struct FHitResult GetLastHitResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent (Underlying native function: GetHoveredWidgetComponent 0x2c0d3ec)
	class UWidgetComponent* GetHoveredWidgetComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation (Underlying native function: Get2DHitLocation 0x9b0a490)
	struct FVector2D Get2DHitLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

