// Class /Script/UMG.WidgetComponent
// Size: 0x6c0
class UWidgetComponent : public UMeshComponent
{
	enum EWidgetSpace Space; // 0x580 (0x1)
	enum EWidgetTimingPolicy TimingPolicy; // 0x581 (0x1)
	unsigned char unreflected_582[0x6]; // 0x582 (0x6) 
	class UClass* WidgetClass; // 0x588 (0x8)
	struct FIntPoint* DrawSize; // 0x590 (0x8)
	bool bManuallyRedraw; // 0x598 (0x1)
	bool bRedrawRequested; // 0x599 (0x1)
	unsigned char unreflected_59a[0x2]; // 0x59a (0x2) 
	float RedrawTime; // 0x59c (0x4)
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	struct FIntPoint* CurrentDrawSize; // 0x5a8 (0x8)
	bool bDrawAtDesiredSize; // 0x5b0 (0x1)
	unsigned char unreflected_5b1[0x7]; // 0x5b1 (0x7) 
	struct FVector2D Pivot; // 0x5b8 (0x10)
	bool bReceiveHardwareInput; // 0x5c8 (0x1)
	bool bWindowFocusable; // 0x5c9 (0x1)
	enum EWindowVisibility WindowVisibility; // 0x5ca (0x1)
	bool bApplyGammaCorrection; // 0x5cb (0x1)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	class ULocalPlayer* OwnerPlayer; // 0x5d0 (0x8)
	struct FLinearColor BackgroundColor; // 0x5d8 (0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5e8 (0x10)
	float OpacityFromTexture; // 0x5f8 (0x4)
	enum EWidgetBlendMode BlendMode; // 0x5fc (0x1)
	bool bIsTwoSided; // 0x5fd (0x1)
	bool TickWhenOffscreen; // 0x5fe (0x1)
	unsigned char unreflected_5ff[0x1]; // 0x5ff (0x1) 
	class UBodySetup* BodySetup; // 0x600 (0x8)
	class UMaterialInterface* TranslucentMaterial; // 0x608 (0x8)
	class UMaterialInterface* TranslucentMaterialOneSided; // 0x610 (0x8)
	class UMaterialInterface* OpaqueMaterial; // 0x618 (0x8)
	class UMaterialInterface* OpaqueMaterialOneSided; // 0x620 (0x8)
	class UMaterialInterface* MaskedMaterial; // 0x628 (0x8)
	class UMaterialInterface* MaskedMaterialOneSided; // 0x630 (0x8)
	class UTextureRenderTarget2D* RenderTarget; // 0x638 (0x8)
	class UMaterialInstanceDynamic* MaterialInstance; // 0x640 (0x8)
	bool bAddedToScreen; // 0x648 (0x1)
	bool bEditTimeUsable; // 0x649 (0x1)
	unsigned char unreflected_64a[0x2]; // 0x64a (0x2) 
	struct FName SharedLayerName; // 0x64c (0x4)
	int LayerZOrder; // 0x650 (0x4)
	enum EWidgetGeometryMode GeometryMode; // 0x654 (0x1)
	unsigned char unreflected_655[0x3]; // 0x655 (0x3) 
	float CylinderArcAngle; // 0x658 (0x4)
	enum ETickMode TickMode; // 0x65c (0x1)
	unsigned char unreflected_65d[0x2b]; // 0x65d (0x2b) 
	class UUserWidget* Widget; // 0x688 (0x8)
	unsigned char padding_690[0x30]; // 0x690 (0x30)

	/* Functions */

	// Function /Script/UMG.WidgetComponent.SetWindowVisibility (Underlying native function: SetWindowVisibility 0x9b12d24)
	void SetWindowVisibility(enum EWindowVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetWindowFocusable (Underlying native function: SetWindowFocusable 0x9b12c9c)
	void SetWindowFocusable(bool& bInWindowFocusable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetWidgetSpace (Underlying native function: SetWidgetSpace 0x9b12b68)
	void SetWidgetSpace(enum EWidgetSpace& NewSpace); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetWidget (Underlying native function: SetWidget 0x9b12ae4)
	void SetWidget(class UUserWidget*& Widget); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetTwoSided (Underlying native function: SetTwoSided 0x9b12180)
	void SetTwoSided(bool& bWantTwoSided); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity (Underlying native function: SetTintColorAndOpacity 0x9b11f88)
	void SetTintColorAndOpacity(struct FLinearColor& NewTintColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen (Underlying native function: SetTickWhenOffscreen 0x9b11f08)
	void SetTickWhenOffscreen(bool& bWantTickWhenOffscreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetTickMode (Underlying native function: SetTickMode 0x9b11e88)
	void SetTickMode(enum ETickMode& InTickMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetRedrawTime (Underlying native function: SetRedrawTime 0x9b10884)
	void SetRedrawTime(float& InRedrawTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetPivot (Underlying native function: SetPivot 0x9b10758)
	void SetPivot(struct FVector2D& InPivot); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer (Underlying native function: SetOwnerPlayer 0x9b103ac)
	void SetOwnerPlayer(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw (Underlying native function: SetManuallyRedraw 0x9b0f3b0)
	void SetManuallyRedraw(bool& bUseManualRedraw); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetGeometryMode (Underlying native function: SetGeometryMode 0x9b0e5e4)
	void SetGeometryMode(enum EWidgetGeometryMode& InGeometryMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetDrawSize (Underlying native function: SetDrawSize 0x9b0dbcc)
	void SetDrawSize(struct FVector2D& Size); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize (Underlying native function: SetDrawAtDesiredSize 0x90428b0)
	void SetDrawAtDesiredSize(bool& bInDrawAtDesiredSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle (Underlying native function: SetCylinderArcAngle 0x6bc7148)
	void SetCylinderArcAngle(float& InCylinderArcAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.SetBackgroundColor (Underlying native function: SetBackgroundColor 0x9b0d0b8)
	void SetBackgroundColor(struct FLinearColor& NewBackgroundColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate (Underlying native function: RequestRenderUpdate 0x90432dc)
	void RequestRenderUpdate(); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.RequestRedraw (Underlying native function: RequestRedraw 0x9b0c530)
	void RequestRedraw(); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetComponent.IsWidgetVisible (Underlying native function: IsWidgetVisible 0x9b0b938)
	bool IsWidgetVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility (Underlying native function: GetWindowVisiblility 0x9b0b4a0)
	enum EWindowVisibility GetWindowVisiblility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetWindowFocusable (Underlying native function: GetWindowFocusable 0x9b0b488)
	bool GetWindowFocusable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetWidgetSpace (Underlying native function: GetWidgetSpace 0x9b0b470)
	enum EWidgetSpace GetWidgetSpace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetWidget (Underlying native function: GetWidget 0x9b0b3bc)
	class UUserWidget* GetWidget(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject (Underlying native function: GetUserWidgetObject 0x25d5008)
	class UUserWidget* GetUserWidgetObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetTwoSided (Underlying native function: GetTwoSided 0x2d78154)
	bool GetTwoSided(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen (Underlying native function: GetTickWhenOffscreen 0x2d00af4)
	bool GetTickWhenOffscreen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetRenderTarget (Underlying native function: GetRenderTarget 0x9b0b048)
	class UTextureRenderTarget2D* GetRenderTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetRedrawTime (Underlying native function: GetRedrawTime 0x9b0b030)
	float GetRedrawTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetPivot (Underlying native function: GetPivot 0x9b0b014)
	struct FVector2D GetPivot(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer (Underlying native function: GetOwnerPlayer 0x9b0afa4)
	class ULocalPlayer* GetOwnerPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetMaterialInstance (Underlying native function: GetMaterialInstance 0x9b0ade8)
	class UMaterialInstanceDynamic* GetMaterialInstance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw (Underlying native function: GetManuallyRedraw 0x9b0add0)
	bool GetManuallyRedraw(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetGeometryMode (Underlying native function: GetGeometryMode 0x6bc6144)
	enum EWidgetGeometryMode GetGeometryMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetDrawSize (Underlying native function: GetDrawSize 0x9b0a8e8)
	struct FVector2D GetDrawSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize (Underlying native function: GetDrawAtDesiredSize 0x9b0a8d0)
	bool GetDrawAtDesiredSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle (Underlying native function: GetCylinderArcAngle 0x2d00b84)
	float GetCylinderArcAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize (Underlying native function: GetCurrentDrawSize 0x9b0a75c)
	struct FVector2D GetCurrentDrawSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

