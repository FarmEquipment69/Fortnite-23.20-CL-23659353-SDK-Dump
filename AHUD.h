// Class /Script/Engine.HUD
// Size: 0x378
class AHUD : public AActor
{
	class APlayerController* PlayerOwner; // 0x288 (0x8)
	unsigned char bLostFocusPaused; // 0x290 (0x1)
	unsigned char bShowHUD; // 0x290 (0x1)
	unsigned char bShowDebugInfo; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	int CurrentTargetIndex; // 0x294 (0x4)
	unsigned char bShowHitBoxDebugInfo; // 0x298 (0x1)
	unsigned char bShowOverlays; // 0x298 (0x1)
	unsigned char bEnableDebugTextShadow; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct TArray<class AActor*> PostRenderedActors; // 0x2a0 (0x10)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	struct TArray<struct FName> DebugDisplay; // 0x2b8 (0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x2c8 (0x10)
	class UCanvas* Canvas; // 0x2d8 (0x8)
	class UCanvas* DebugCanvas; // 0x2e0 (0x8)
	struct TArray<struct FDebugTextInfo> DebugTextList; // 0x2e8 (0x10)
	class UClass* ShowDebugTargetDesiredClass; // 0x2f8 (0x8)
	class AActor* ShowDebugTargetActor; // 0x300 (0x8)
	unsigned char padding_308[0x70]; // 0x308 (0x70)

	/* Functions */

	// Function /Script/Engine.HUD.ShowHUD (Underlying native function: ShowHUD 0x23eff98)
	void ShowHUD(); // (Exec | Native | Public)

	// Function /Script/Engine.HUD.ShowDebugToggleSubCategory (Underlying native function: ShowDebugToggleSubCategory 0x9db2c58)
	void ShowDebugToggleSubCategory(struct FName& category); // (Final | Exec | Native | Public)

	// Function /Script/Engine.HUD.ShowDebugForReticleTargetToggle (Underlying native function: ShowDebugForReticleTargetToggle 0x9db2bc0)
	void ShowDebugForReticleTargetToggle(class UClass*& DesiredClass); // (Final | Exec | Native | Public)

	// Function /Script/Engine.HUD.ShowDebug (Underlying native function: ShowDebug 0x9db2b3c)
	void ShowDebug(struct FName& DebugType); // (Exec | Native | Public)

	// Function /Script/Engine.HUD.RemoveDebugText (Underlying native function: RemoveDebugText 0x9db2a74)
	void RemoveDebugText(class AActor*& SrcActor, bool& bLeaveDurationText); // (Final | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.HUD.RemoveAllDebugStrings (Underlying native function: RemoveAllDebugStrings 0x9db29dc)
	void RemoveAllDebugStrings(); // (Final | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.HUD.ReceiveHitBoxRelease (Has no native function)
	void ReceiveHitBoxRelease(struct FName& BoxName); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/Engine.HUD.ReceiveHitBoxEndCursorOver (Has no native function)
	void ReceiveHitBoxEndCursorOver(struct FName& BoxName); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/Engine.HUD.ReceiveHitBoxClick (Has no native function)
	void ReceiveHitBoxClick(struct FName& BoxName); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/Engine.HUD.ReceiveHitBoxBeginCursorOver (Has no native function)
	void ReceiveHitBoxBeginCursorOver(struct FName& BoxName); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/Engine.HUD.ReceiveDrawHUD (Has no native function)
	void ReceiveDrawHUD(int& SizeX, int& SizeY); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/Engine.HUD.Project (Underlying native function: Project 0x9db28e8)
	struct FVector Project(struct FVector& Location, bool& bClampToZeroPlane); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.HUD.PreviousDebugTarget (Underlying native function: PreviousDebugTarget 0x6e13634)
	void PreviousDebugTarget(); // (Exec | Native | Public)

	// Function /Script/Engine.HUD.NextDebugTarget (Underlying native function: NextDebugTarget 0x2daad1c)
	void NextDebugTarget(); // (Exec | Native | Public)

	// Function /Script/Engine.HUD.GetTextSize (Underlying native function: GetTextSize 0x9db2668)
	void GetTextSize(struct FString& Text, float& OutWidth, float& OutHeight, class UFont*& Font, float& Scale); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.HUD.GetOwningPlayerController (Underlying native function: GetOwningPlayerController 0x7341450)
	class APlayerController* GetOwningPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.HUD.GetOwningPawn (Underlying native function: GetOwningPawn 0x9db2648)
	class APawn* GetOwningPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.HUD.GetActorsInSelectionRectangle (Underlying native function: GetActorsInSelectionRectangle 0x9db2428)
	void GetActorsInSelectionRectangle(class UClass*& ClassFilter, struct FVector2D& FirstPoint, struct FVector2D& SecondPoint, struct TArray<class AActor*>& OutActors, bool& bIncludeNonCollidingComponents, bool& bActorMustBeFullyEnclosed); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.HUD.DrawTextureSimple (Underlying native function: DrawTextureSimple 0x9db21ec)
	void DrawTextureSimple(class UTexture*& Texture, float& ScreenX, float& ScreenY, float& Scale, bool& bScalePosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawTexture (Underlying native function: DrawTexture 0x9db1bfc)
	void DrawTexture(class UTexture*& Texture, float& ScreenX, float& ScreenY, float& ScreenW, float& ScreenH, float& TextureU, float& TextureV, float& TextureUWidth, float& TextureVHeight, struct FLinearColor& TintColor, struct TEnumAsByte<EBlendMode>& BlendMode, float& Scale, bool& bScalePosition, float& Rotation, struct FVector2D& RotPivot); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawText (Underlying native function: DrawText 0x9db190c)
	void DrawText(struct FString& Text, struct FLinearColor& TextColor, float& ScreenX, float& ScreenY, class UFont*& Font, float& Scale, bool& bScalePosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawRect (Underlying native function: DrawRect 0x9db1780)
	void DrawRect(struct FLinearColor& RectColor, float& ScreenX, float& ScreenY, float& ScreenW, float& ScreenH); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawMaterialTriangle (Underlying native function: DrawMaterialTriangle 0x9db13e0)
	void DrawMaterialTriangle(class UMaterialInterface*& Material, struct FVector2D& V0Pos, struct FVector2D& V1Pos, struct FVector2D& V2Pos, struct FVector2D& V0UV, struct FVector2D& V1UV, struct FVector2D& V2UV, struct FLinearColor& V0Color, struct FLinearColor& V1Color, struct FLinearColor& V2Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawMaterialSimple (Underlying native function: DrawMaterialSimple 0x9db10d8)
	void DrawMaterialSimple(class UMaterialInterface*& Material, float& ScreenX, float& ScreenY, float& ScreenW, float& ScreenH, float& Scale, bool& bScalePosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawMaterial (Underlying native function: DrawMaterial 0x9db0b80)
	void DrawMaterial(class UMaterialInterface*& Material, float& ScreenX, float& ScreenY, float& ScreenW, float& ScreenH, float& MaterialU, float& MaterialV, float& MaterialUWidth, float& MaterialVHeight, float& Scale, bool& bScalePosition, float& Rotation, struct FVector2D& RotPivot); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.DrawLine (Underlying native function: DrawLine 0x9db09ac)
	void DrawLine(float& StartScreenX, float& StartScreenY, float& EndScreenX, float& EndScreenY, struct FLinearColor& LineColor, float& LineThickness); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.Deproject (Underlying native function: Deproject 0x9db084c)
	void Deproject(float& ScreenX, float& ScreenY, struct FVector& WorldPosition, struct FVector& WorldDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.HUD.AddHitBox (Underlying native function: AddHitBox 0x9db06ac)
	void AddHitBox(struct FVector2D& Position, struct FVector2D& Size, struct FName& InName, bool& bConsumesInput, int& Priority); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.HUD.AddDebugText (Underlying native function: AddDebugText 0x9daffb0)
	void AddDebugText(struct FString& DebugText, class AActor*& SrcActor, float& Duration, struct FVector& Offset, struct FVector& DesiredOffset, struct FColor& TextColor, bool& bSkipOverwriteCheck, bool& bAbsoluteLocation, bool& bKeepAttachedToActor, class UFont*& InFont, float& FontScale, bool& bDrawShadow); // (Final | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)
};

