// Class /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// Size: 0x28
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle (Underlying native function: SetValueAsSOClaimHandle 0x7f286f8)
	static void SetValueAsSOClaimHandle(class UBlackboardComponent*& BlackboardComponent, struct FName& KeyName, struct FSmartObjectClaimHandle& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetBlackboardValueAsSOClaimHandle (Underlying native function: SetBlackboardValueAsSOClaimHandle 0x7f28568)
	static void SetBlackboardValueAsSOClaimHandle(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FSmartObjectClaimHandle& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled (Underlying native function: K2_SetSmartObjectEnabled 0x7f2828c)
	static bool K2SetSmartObjectEnabled(class AActor*& SmartObject, bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle (Underlying native function: IsValidSmartObjectClaimHandle 0x7f281f8)
	static bool IsValidSmartObjectClaimHandle(struct FSmartObjectClaimHandle& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle (Underlying native function: GetValueAsSOClaimHandle 0x7f28108)
	static struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent*& BlackboardComponent, struct FName& KeyName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetBlackboardValueAsSOClaimHandle (Underlying native function: GetBlackboardValueAsSOClaimHandle 0x7f27a10)
	static struct FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

