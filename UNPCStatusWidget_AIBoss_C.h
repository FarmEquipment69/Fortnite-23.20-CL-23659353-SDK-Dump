// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C
// Size: 0x2e4
class UNPCStatusWidget_AIBoss_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UNPCStatusWidgetBar_C* BarHealth; // 0x270 (0x8)
	class UNPCStatusWidgetBar_C* BarShield; // 0x278 (0x8)
	class USizeBox* SizeBoxHealth; // 0x280 (0x8)
	struct FTimerHandle* VisibiltyTimer; // 0x288 (0x8)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x290 (0x10)
	double StatusWidgetVisibleDuration; // 0x2a0 (0x8)
	double CurrentHealthPercent; // 0x2a8 (0x8)
	double CurrentShieldPercent; // 0x2b0 (0x8)
	double MaxHealth; // 0x2b8 (0x8)
	double PipAmount; // 0x2c0 (0x8)
	double MinimumPipAmount; // 0x2c8 (0x8)
	int NumHealthPips; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	double MaxShield; // 0x2d8 (0x8)
	int NumShieldPips; // 0x2e0 (0x4)

	/* Functions */

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.SetMaxShield (Has no native function)
	void SetMaxShield(double& MaxShield, bool& CallFuncNearlyEqualFloatFloatReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int64_t& CallFuncFFloor64ReturnValue, int& CallFuncConvInt64ToIntReturnValue, int& CallFuncSubtractIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.SetMaxHealth (Has no native function)
	void SetMaxHealth(double& MaxHealth, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int64_t& CallFuncFFloor64ReturnValue, int& CallFuncConvInt64ToIntReturnValue, bool& CallFuncNearlyEqualFloatFloatReturnValue, int& CallFuncSubtractIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.EventUpdateStatus (Has no native function)
	void EventUpdateStatus(double& Health, double& Shield, double& MaxHealth, double& MaxShield, bool& ShowShield); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.EventHideStatus (Has no native function)
	void EventHideStatus(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.ChangeWidgetVisibleDuration (Has no native function)
	void ChangeWidgetVisibleDuration(double& StatusWidgetVisibleDuration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.ExecuteUbergraph_NPCStatusWidget_AIBoss (Has no native function)
	void ExecuteUbergraphNPCStatusWidgetAIBoss(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& K2NodeCustomEventStatusWidgetVisibleDuration, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncK2IsValidTimerHandleReturnValue, double& K2NodeCustomEventhealth, double& K2NodeCustomEventshield, double& K2NodeCustomEventmaxHealth, double& K2NodeCustomEventmaxShield, bool& K2NodeCustomEventShowShield, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.VisibilityChanged__DelegateSignature (Has no native function)
	void VisibilityChangedDelegateSignature(bool& bVisible); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

