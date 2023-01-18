// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
// Size: 0x3a8
class USpecialEventCursorPawnComponent : public UPawnComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnDesiredVisibilityChanged; // 0xa8 (0x10)
	bool bAllowOnNonOwningClients; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	class APawn* OwningPawn; // 0xc0 (0x8)
	class AFortPlayerController* OwningController; // 0xc8 (0x8)
	unsigned char unreflected_d0[0x10]; // 0xd0 (0x10) 
	struct FMulticastInlineDelegate OnCursorModeChanged; // 0xe0 (0x10)
	struct FGameplayTag DefaultCursorModeTag; // 0xf0 (0x4)
	bool bDefaultCursorModeAutoActivate; // 0xf4 (0x1)
	unsigned char unreflected_f5[0x3]; // 0xf5 (0x3) 
	struct TMap<struct FGameplayTag, struct FSpecialEventCursorMode> CursorModes; // 0xf8 (0x50)
	struct TArray<struct FSpecialEventCursorStackEntry> CursorStack; // 0x148 (0x10)
	struct FSpecialEventCursorStackEntry ReplicatedCursorStackEntry; // 0x158 (0xc)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	class UClass* InputHelperClass; // 0x168 (0x8)
	bool bUseGamepadLookInput; // 0x170 (0x1)
	bool bUseGamepadMoveInput; // 0x171 (0x1)
	bool bUseGyroInput; // 0x172 (0x1)
	bool bObeyInvertedPitchUserSetting; // 0x173 (0x1)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	class UCommonInputSubsystem* CommonInputSubsystem; // 0x178 (0x8)
	class USpecialEventInputHelperComponent* InputHelperComponent; // 0x180 (0x8)
	unsigned char unreflected_188[0x38]; // 0x188 (0x38) 
	struct FMulticastInlineDelegate OnViewportLocationChanged; // 0x1c0 (0x10)
	struct FScalableFloat NonOwningInterpSpeed; // 0x1d0 (0x28)
	struct FScalableFloat MinDeltaToSendWorldLocationToServer; // 0x1f8 (0x28)
	unsigned char unreflected_220[0x8]; // 0x220 (0x8) 
	struct FVector ReplicatedWorldLocation; // 0x228 (0x18)
	unsigned char unreflected_240[0x50]; // 0x240 (0x50) 
	struct TArray<class UUserWidget*> Widgets; // 0x290 (0x10)
	unsigned char unreflected_2a0[0xe9]; // 0x2a0 (0xe9) 
	bool bAdditiveRotationAllowedByDefault; // 0x389 (0x1)
	unsigned char unreflected_38a[0x1]; // 0x38a (0x1) 
	bool bZoomAllowedByDefault; // 0x38b (0x1)
	struct FName ZoomActionName; // 0x38c (0x4)
	unsigned char unreflected_390[0x8]; // 0x390 (0x8) 
	class UCameraComponent* AdditiveOffsetCameraComponent; // 0x398 (0x8)
	unsigned char padding_3a0[0x8]; // 0x3a0 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed (Underlying native function: SetZoomAllowed 0x76c7b34)
	void SetZoomAllowed(bool& bInZoomAllowed); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients (Underlying native function: SetAllowOnNonOwningClients 0x76c6a08)
	void SetAllowOnNonOwningClients(bool& bAllow); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed (Underlying native function: SetAdditiveRotationAllowed 0x76c6988)
	void SetAdditiveRotationAllowed(bool& bInAdditiveRotationAllowed); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged (Underlying native function: ServerOnWorldLocationChanged 0x76c6878)
	void ServerOnWorldLocationChanged(struct FVector& WorldLocation); // (Final | Net | Native | Event | Private | NetServer | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor (Underlying native function: PushCursor 0x76c6318)
	void PushCursor(struct FGameplayTag& CursorModeTag, class UObject*& InstigatingObject, bool& bActivate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor (Underlying native function: PopCursor 0x76c61f0)
	void PopCursor(struct FGameplayTag& CursorModeTag, class UObject*& InstigatingObject, bool& bDeactivateIfStackEmpty); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject (Underlying native function: PopAllCursorsForObject 0x76c6128)
	void PopAllCursorsForObject(class UObject*& InstigatingObject, bool& bDeactivateIfStackEmpty); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation (Underlying native function: OnRep_ReplicatedWorldLocation 0x76c57a8)
	void OnRepReplicatedWorldLocation(); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry (Underlying native function: OnRep_ReplicatedCursorStackEntry 0x76c5714)
	void OnRepReplicatedCursorStackEntry(struct FSpecialEventCursorStackEntry& OldCursorStackEntry); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients (Underlying native function: OnRep_bAllowOnNonOwningClients 0x76c5958)
	void OnRepbAllowOnNonOwningClients(); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged (Underlying native function: OnLocallyControlledCursorVisibilityChanged 0x76c4ab8)
	void OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent*& CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool& bShouldBeVisible); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged (Underlying native function: OnInputMethodChanged 0x76c44f4)
	void OnInputMethodChanged(enum ECommonInputType& InputType); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender (Underlying native function: OnHUDPostRender 0x70dc290)
	void OnHUDPostRender(class AHUD*& HUD, class UCanvas*& Canvas); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate (Underlying native function: MoveInputUpdate 0x76c3d08)
	void MoveInputUpdate(struct FVector& InInputVector); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate (Underlying native function: LookInputUpdate 0x76c3bac)
	void LookInputUpdate(struct FVector& InInputVector); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed (Underlying native function: IsZoomAllowed 0x76c3a88)
	bool IsZoomAllowed(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled (Underlying native function: IsLocallyControlled 0x76c3a70)
	bool IsLocallyControlled(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed (Underlying native function: IsAdditiveRotationAllowed 0x76c3a58)
	bool IsAdditiveRotationAllowed(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed (Underlying native function: InputPressed 0x76c3984)
	void InputPressed(struct FName& ActionName, bool& bPressed); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate (Underlying native function: GyroInputUpdate 0x76c370c)
	void GyroInputUpdate(struct FVector& InInputVector); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection (Underlying native function: GetWorldLocationAndDirection 0x76c3614)
	bool GetWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize (Underlying native function: GetViewportSize 0x76c3580)
	bool GetViewportSize(struct FVector2D& OutViewportSize); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation (Underlying native function: GetViewportLocation 0x76c34e0)
	bool GetViewportLocation(struct FVector2D& OutViewportLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter (Underlying native function: GetViewportCenter 0x76c341c)
	bool GetViewportCenter(struct FVector2D& OutViewportCenter); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent (Underlying native function: GetSpecialEventCursorPawnComponent 0x76c2d3c)
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(class APawn*& Pawn, struct FGameplayTag& CursorModeTag, bool& bMustBeActive); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation (Underlying native function: GetNormalizedLocation 0x76c2cf0)
	struct FVector2D GetNormalizedLocation(); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController (Underlying native function: GetLocalController 0x76c2bf4)
	class APlayerController* GetLocalController(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType (Underlying native function: GetInputType 0x76c2bdc)
	enum ECommonInputType GetInputType(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget (Underlying native function: GetCursorModeTagsForWidget 0x76c23d8)
	struct FGameplayTagContainer GetCursorModeTagsForWidget(class UUserWidget*& Widget); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget (Underlying native function: GetCurrentWidget 0x76c2380)
	class UUserWidget* GetCurrentWidget(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult (Underlying native function: GetCurrentHitResult 0x76c2198)
	bool GetCurrentHitResult(struct FHitResult& OutHitResult); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag (Underlying native function: GetCurrentCursorModeTag 0x76c2180)
	struct FGameplayTag GetCurrentCursorModeTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation (Underlying native function: GetCenteredWidgetLocation 0x76c1f78)
	struct FVector2D GetCenteredWidgetLocation(class UUserWidget*& Widget, struct FVector2D& ViewportLocation); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent (Underlying native function: GetCameraComponent 0x76c1f54)
	class UCameraComponent* GetCameraComponent(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation (Underlying native function: ConvertWorldToViewportLocation 0x76c0cb4)
	bool ConvertWorldToViewportLocation(struct FVector2D& OutViewportLocation, struct FVector& WorldLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation (Underlying native function: ConvertWorldToNormalizedLocation 0x76c0bc4)
	bool ConvertWorldToNormalizedLocation(struct FVector2D& OutNormalizedLocation, struct FVector& WorldLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection (Underlying native function: ConvertViewportToWorldLocationAndDirection 0x76c0a88)
	bool ConvertViewportToWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection, struct FVector2D& ViewportLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation (Underlying native function: ConvertViewportToNormalizedLocation 0x76c0998)
	bool ConvertViewportToNormalizedLocation(struct FVector2D& OutNormalizedLocation, struct FVector2D& ViewportLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection (Underlying native function: ConvertNormalizedToWorldLocationAndDirection 0x76c085c)
	bool ConvertNormalizedToWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection, struct FVector2D& NormalizedLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation (Underlying native function: ConvertNormalizedToViewportLocation 0x76c076c)
	bool ConvertNormalizedToViewportLocation(struct FVector2D& OutViewportLocation, struct FVector2D& NormalizedLocation); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible (Underlying native function: CanBeVisible 0x76c0624)
	bool CanBeVisible(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

