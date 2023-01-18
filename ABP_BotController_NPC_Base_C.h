// BlueprintGeneratedClass /Game/Athena/AI/NPCs/Base/BP_BotController_NPC_Base.BP_BotController_NPC_Base_C
// Size: 0x1318
class ABP_BotController_NPC_Base_C : public ABP_PhoebeController_NonParticipant_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x12c8 (0x8)
	class UFortAthenaNpcPatrollingComponent* FortAthenaNpcPatrolling; // 0x12d0 (0x8)
	class UClass* GEPatrolling; // 0x12d8 (0x8)
	struct FActiveGameplayEffectHandle* GEPatrollingSpeedHandle; // 0x12e0 (0x8)
	struct FRotator SavedRotationRate; // 0x12e8 (0x18)
	struct FRotator PatrollingRotationRate; // 0x1300 (0x18)

	/* Functions */

	// Function /Game/Athena/AI/NPCs/Base/BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature (Has no native function)
	void BndEvtFortAthenaNpcPatrollingK2NodeComponentBoundEvent0PatrollingComponentOnStartPatrollingDelegateSignature(); // (BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature (Has no native function)
	void BndEvtFortAthenaNpcPatrollingK2NodeComponentBoundEvent1PatrollingComponentOnStopPatrollingDelegateSignature(); // (BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.ExecuteUbergraph_BP_BotController_NPC_Base (Has no native function)
	void ExecuteUbergraphBPBotControllerNPCBase(int& EntryPoint, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue); // (Final | 0x00008000 | HasDefaults)
};

