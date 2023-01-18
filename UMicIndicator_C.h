// WidgetBlueprintGeneratedClass /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C
// Size: 0x2ea
class UMicIndicator_C : public UFortMicIndicatorWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2c0 (0x8)
	class UOverlay* 01NotSpeaking; // 0x2c8 (0x8)
	class UOverlay* 02Speaking; // 0x2d0 (0x8)
	class UOverlay* 03Muted; // 0x2d8 (0x8)
	class UWidgetSwitcher* MicStateSwitcher; // 0x2e0 (0x8)
	bool bIsMuted; // 0x2e8 (0x1)
	bool bIsTalking; // 0x2e9 (0x1)

	/* Functions */

	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.OnPlayerTalkingChanged (Has no native function)
	void OnPlayerTalkingChanged(bool& bIsTalking); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.OnPlayerMuted (Has no native function)
	void OnPlayerMuted(bool& bIsMuted); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator (Has no native function)
	void ExecuteUbergraphMicIndicator(int& EntryPoint, int& CallFuncSelectIntReturnValue, bool& K2NodeEventbIsTalking, bool& K2NodeEventbIsMuted); // (Final | 0x00008000)
};

