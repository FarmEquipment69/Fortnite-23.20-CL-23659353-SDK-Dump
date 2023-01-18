// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C
// Size: 0xbc0
class UGA_Athena_ZipLine_Jump_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	struct FScalableFloat MaxLateralSpeed; // 0xb30 (0x28)
	struct FVector ImpulseVec; // 0xb58 (0x18)
	struct FScalableFloat JumpVertStrength; // 0xb70 (0x28)
	struct FScalableFloat JumpLateralDamper; // 0xb98 (0x28)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.ExecuteUbergraph_GA_Athena_ZipLine_Jump (Has no native function)
	void ExecuteUbergraphGAAthenaZipLineJump(int& EntryPoint, float& CallFuncGetValueAtLevelReturnValue, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, struct FVector& CallFuncGetVelocityReturnValue1, double& CallFuncVSizeSquaredReturnValue, double& CallFuncBreakVectorX3, double& CallFuncBreakVectorY3, double& CallFuncBreakVectorZ3, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast1, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMakeVectorZImplicitCast1); // (Final | 0x00008000)
};

