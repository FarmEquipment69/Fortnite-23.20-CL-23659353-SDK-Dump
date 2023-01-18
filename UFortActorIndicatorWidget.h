// Class /Script/FortniteUI.FortActorIndicatorWidget
// Size: 0x378
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	class AActor* IndicatedActor; // 0x2d8 (0x8)
	class UPrimitiveComponent* IndicatedActorComponent; // 0x2e0 (0x8)
	struct FVector RelativeLocation; // 0x2e8 (0x18)
	float MaxDistance; // 0x300 (0x4)
	bool bClampOnScreen; // 0x304 (0x1)
	bool bShowClampToScreenArrow; // 0x305 (0x1)
	unsigned char unreflected_306[0x2]; // 0x306 (0x2) 
	struct FElevationArrowData ElevationArrowData; // 0x308 (0x1c)
	bool bUseScreenSpacePosition; // 0x324 (0x1)
	unsigned char unreflected_325[0x3]; // 0x325 (0x3) 
	struct FVector2D ScreenSpaceRelativeOffset; // 0x328 (0x10)
	int ScreenPriority; // 0x338 (0x4)
	unsigned char padding_33c[0x3c]; // 0x33c (0x3c)

	/* Functions */

	// Function /Script/FortniteUI.FortActorIndicatorWidget.SetIndicatedActor (Underlying native function: SetIndicatedActor 0x7570904)
	void SetIndicatedActor(class AActor*& NewIndicatorActor); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActorIndicatorWidget.OnTargetActorChanged (Has no native function)
	void OnTargetActorChanged(class AActor*& TargetedActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActorIndicatorWidget.IsIndicatingActor (Underlying native function: IsIndicatingActor 0xa6b4318)
	bool IsIndicatingActor(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActorIndicatorWidget.Init (Underlying native function: Init 0xa6b4294)
	void Init(class AActor*& TargetedActor); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActorIndicatorWidget.Deinit (Underlying native function: Deinit 0xa6b1d74)
	void Deinit(); // (Native | Public | BlueprintCallable)
};

