// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C
// Size: 0xc18
class UGA_Athena_ZipLine_ReachedEnd_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	struct FScalableFloat MaxLateralSpeed; // 0xb30 (0x28)
	struct FVector ImpulseVec; // 0xb58 (0x18)
	struct FScalableFloat JumpVertStrength; // 0xb70 (0x28)
	struct FScalableFloat LateralDamping; // 0xb98 (0x28)
	struct FScalableFloat MaxZiplineVel; // 0xbc0 (0x28)
	bool Debug; // 0xbe8 (0x1)
	unsigned char unreflected_be9[0x7]; // 0xbe9 (0x7) 
	struct FScalableFloat MinJumpVertStrength; // 0xbf0 (0x28)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd (Has no native function)
	void ExecuteUbergraphGAAthenaZipLineReachedEnd(int& EntryPoint, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncGetVelocityReturnValue1, double& CallFuncVSizeReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncLessDoubleDoubleReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncMakeVectorReturnValue, float& CallFuncGetValueAtLevelReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, float& CallFuncGetValueAtLevelReturnValue3, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct FVector& CallFuncNormalReturnValue, double& CallFuncFClampReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncVSizeSquaredReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& K2NodeEventbWasCancelled, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, float& CallFuncGetValueAtLevelReturnValue4, double& CallFuncFMaxReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast1, double& CallFuncMultiplyVectorFloatBImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncFMaxBImplicitCast); // (Final | 0x00008000)
};

