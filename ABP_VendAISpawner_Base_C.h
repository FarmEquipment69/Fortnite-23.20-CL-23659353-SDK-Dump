// BlueprintGeneratedClass /BattlePassS23/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
// Size: 0x2b0
class ABP_VendAISpawner_Base_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UNiagaraComponent* Niagara; // 0x290 (0x8)
	double SpawnDelay; // 0x298 (0x8)
	struct FDataTableRowHandle EventRowHandle; // 0x2a0 (0x10)

	/* Functions */

	// Function /BattlePassS23/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /BattlePassS23/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base (Has no native function)
	void ExecuteUbergraphBPVendAISpawnerBase(int& EntryPoint, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& TempdelegateVariable, struct FTransform& CallFuncGetTransformReturnValue, class AFortGameStateAthena*& CallFuncGetGameStateAthenaFromContextReturnValue, class UFortAthenaLivingWorldManager*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncTrySpawnEventRequestId, bool& CallFuncTrySpawnEventReturnValue, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

