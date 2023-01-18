// BlueprintGeneratedClass /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
// Size: 0x7f0
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x430 (0x8)
	struct FRuntimeFloatCurve GunshotFalloffLongRange; // 0x438 (0x88)
	struct FRuntimeFloatCurve ChestFalloff; // 0x4c0 (0x88)
	struct FRuntimeFloatCurve FootstepsFalloff; // 0x548 (0x88)
	struct FRuntimeFloatCurve GunshotFalloffMidRange; // 0x5d0 (0x88)
	struct FRuntimeFloatCurve GunshotFalloffMelee; // 0x658 (0x88)
	struct FRuntimeFloatCurve GliderFalloff; // 0x6e0 (0x88)
	struct FRuntimeFloatCurve PlaneFalloff; // 0x768 (0x88)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType (Has no native function)
	struct FRuntimeFloatCurve GetStrengthCurveForActiveType(); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint (Has no native function)
	struct FLinearColor GetDefaultTint(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon (Has no native function)
	class UTexture* GetDefaultIcon(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve (Has no native function)
	struct FRuntimeFloatCurve GetWeaponCurve(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01 (Has no native function)
	void ExecuteUbergraphBSoundIndicator01(int& EntryPoint); // (Final | 0x00008000)
};

