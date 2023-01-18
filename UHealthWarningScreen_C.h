// WidgetBlueprintGeneratedClass /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C
// Size: 0x558
class UHealthWarningScreen_C : public UHealthWarningScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x518 (0x8)
	class UWidgetAnimation* FinishingAnim; // 0x520 (0x8)
	class USafeZone* SafeZone0; // 0x528 (0x8)
	struct FMulticastInlineDelegate HealthWarningCompleted; // 0x530 (0x10)
	struct FTimerHandle* ShowTimer; // 0x540 (0x8)
	struct FMargin IconPadding; // 0x548 (0x10)

	/* Functions */

	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete (Has no native function)
	void HandleShowTimerComplete(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen (Has no native function)
	void ExecuteUbergraphHealthWarningScreen(int& EntryPoint); // (Final | 0x00008000)

	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature (Has no native function)
	void HealthWarningCompletedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

