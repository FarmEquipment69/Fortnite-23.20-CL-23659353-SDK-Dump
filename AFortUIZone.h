// Class /Script/FortniteGame.FortUIZone
// Size: 0x790
class AFortUIZone : public AFortUIBaseClass
{
	struct FFontRenderInfo TextRenderInfo; // 0x408 (0x40)
	class UReporterGraph* IntensityGraph; // 0x448 (0x8)
	class UReporterGraph* PIDValuesGraph; // 0x450 (0x8)
	class UReporterGraph* PIDContributionsGraph; // 0x458 (0x8)
	class UReporterGraph* UtilitiesGraph; // 0x460 (0x8)
	unsigned char unreflected_468[0x28]; // 0x468 (0x28) 
	struct TEnumAsByte<EFortContextualReticleTypes> CurrentContextualReticleIconType; // 0x490 (0x1)
	unsigned char unreflected_491[0x3]; // 0x491 (0x3) 
	struct FColor CurrentContextualReticleColor; // 0x494 (0x4)
	struct TWeakObjectPtr<class UTexture2D> ContextualReticleIcons[0x8]; // 0x498 (0x28) (ARRAY) 
	struct TWeakObjectPtr<class USlateBrushAsset> ActorCanvasArrowBrush; // 0x5d8 (0x28)
	struct TWeakObjectPtr<class USlateBrushAsset> ActorCanvasElevationBrush; // 0x600 (0x28)
	unsigned char unreflected_628[0x150]; // 0x628 (0x150) 
	struct TArray<class UFortSpottedActorIndicator*> SpottedActorIndicators; // 0x778 (0x10)
	unsigned char padding_788[0x8]; // 0x788 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortUIZone.ToggleTimeOfDayDebugInfo (Underlying native function: ToggleTimeOfDayDebugInfo 0x8f9be58)
	void ToggleTimeOfDayDebugInfo(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.ToggleTargetInfoSensing (Underlying native function: ToggleTargetInfoSensing 0x8f9be38)
	void ToggleTargetInfoSensing(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.ToggleTargetInfoPaths (Underlying native function: ToggleTargetInfoPaths 0x8f9be18)
	void ToggleTargetInfoPaths(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.ToggleTargetInfoLock (Underlying native function: ToggleTargetInfoLock 0x8f9bd68)
	void ToggleTargetInfoLock(bool& bTraceComplex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.ToggleTargetInfoAI (Underlying native function: ToggleTargetInfoAI 0x8f9bd54)
	void ToggleTargetInfoAI(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.ToggleTargetInfo (Underlying native function: ToggleTargetInfo 0x8f9bd34)
	void ToggleTargetInfo(); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortUIZone.GetCurrentCursorModeAction (Underlying native function: GetCurrentCursorModeAction 0x8f99764)
	struct FName GetCurrentCursorModeAction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortUIZone.CloseFullScreenMap (Underlying native function: CloseFullScreenMap 0x8f99568)
	void CloseFullScreenMap(); // (Final | Native | Protected | BlueprintCallable)
};

