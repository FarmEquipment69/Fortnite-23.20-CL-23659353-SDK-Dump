// BlueprintGeneratedClass /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C
// Size: 0x1128
class ADA_BoostJumpPack_C : public AFortCustomizableAbilityDecoTool
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x10e0 (0x8)
	struct FGameplayTagContainer ErrorReason; // 0x10e8 (0x20)
	struct FGameplayTagContainer ErrorReasonGamepad; // 0x1108 (0x20)

	/* Functions */

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C.IsOnGround (Has no native function)
	void IsOnGround(bool& bOnGround, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsFallingReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C.RaiseUsageError (Has no native function)
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C.BPPressTrigger (Has no native function)
	void BPPressTrigger(class AFortDecoHelper*& FortDecoHelper); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C.ExecuteUbergraph_DA_BoostJumpPack (Has no native function)
	void ExecuteUbergraphDABoostJumpPack(int& EntryPoint, bool& CallFuncIsErebusReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, class AFortDecoHelper*& K2NodeEventFortDecoHelper, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue, bool& TempboolVariable, struct FGameplayTagContainer& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)
};

