// BlueprintGeneratedClass /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
// Size: 0xc0
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa0 (0x8)
	struct FName GasPumpIconEnabled; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	class UClass* GasPumpIndicatorManagerClass; // 0xb0 (0x8)
	class UValet_GasPumpIndicatorManagerV2_C* GasPumpIndicatorManager; // 0xb8 (0x8)

	/* Functions */

	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component (Has no native function)
	void ExecuteUbergraphBGasPumpValetComponent(int& EntryPoint, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncHasAuthorityReturnValue, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, class AActor*& CallFuncGetOwnerReturnValue1, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncHasAuthorityReturnValue1, class UFortGameStateComponent*& CallFuncGetComponentByClassReturnValue, class UValet_GasPumpIndicatorManagerV2_C*& K2NodeDynamicCastAsValetGasPumpIndicatorManagerV2, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue3, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Final | 0x00008000)
};

