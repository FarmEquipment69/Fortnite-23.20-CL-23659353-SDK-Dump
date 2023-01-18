// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
// Size: 0x4a0
class AGCL_BoostJumpPack_FuelRegen_C : public AGameplayCueNotify_Jetpack_FuelRegen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x488 (0x8)
	float FullBlinkTimelineBlink108772B949790E60DC9BE1BAC70C2EA1; // 0x490 (0x4)
	struct TEnumAsByte<ETimelineDirection> FullBlinkTimelineDirection108772B949790E60DC9BE1BAC70C2EA1; // 0x494 (0x1)
	unsigned char unreflected_495[0x3]; // 0x495 (0x3) 
	class UTimelineComponent* FullBlinkTimeline; // 0x498 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc (Has no native function)
	void FullBlinkTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc (Has no native function)
	void FullBlinkTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink (Has no native function)
	void ResetBlink(class AFortPlayerPawn*& PlayerPawn); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen (Has no native function)
	void ExecuteUbergraphGCLBoostJumpPackFuelRegen(int& EntryPoint, class AFortPlayerPawn*& K2NodeEventPlayerPawn, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue); // (Final | 0x00008000)
};

