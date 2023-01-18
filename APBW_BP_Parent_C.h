// BlueprintGeneratedClass /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C
// Size: 0x1040
class APBW_BP_Parent_C : public ABuildingWall
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1028 (0x8)
	struct TArray<class UStaticMesh*> StaticMeshAlternateArray; // 0x1030 (0x10)

	/* Functions */

	// Function /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C.OnRep_Random Chance (Has no native function)
	void OnRepRandomChance(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C.ExecuteUbergraph_PBW_BP_Parent (Has no native function)
	void ExecuteUbergraphPBWBPParent(int& EntryPoint, bool& CallFuncHasAuthorityReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, int& CallFuncRandomIntegerInRangeReturnValue, class UStaticMesh*& CallFuncArrayGetItem); // (Final | 0x00008000)
};

