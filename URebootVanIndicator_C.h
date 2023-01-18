// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Team/RebootVanIndicator.RebootVanIndicator_C
// Size: 0x618
class URebootVanIndicator_C : public UAthenaRebootVanIndicator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5d8 (0x8)
	class UWidgetAnimation* Intro; // 0x5e0 (0x8)
	class UBorder* BorderNameplate; // 0x5e8 (0x8)
	class UImage* Icon; // 0x5f0 (0x8)
	class UImage* ImageRebootIcon; // 0x5f8 (0x8)
	class UImage* ImageSmallIndicator; // 0x600 (0x8)
	class UImage* ImageVan; // 0x608 (0x8)
	class USpacer* IndicatorSpacer; // 0x610 (0x8)

	/* Functions */

	// Function /Game/Athena/HUD/Team/RebootVanIndicator.RebootVanIndicator_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/HUD/Team/RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator (Has no native function)
	void ExecuteUbergraphRebootVanIndicator(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Final | 0x00008000)
};

