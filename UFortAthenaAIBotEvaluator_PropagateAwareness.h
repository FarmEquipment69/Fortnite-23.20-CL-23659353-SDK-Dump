// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_PropagateAwareness
// Size: 0x110
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator
{
	struct FGameplayTagQuery AwarenessTagQuery; // 0x88 (0x48)
	class UClass* AwarenessGameplayEffectClass; // 0xd0 (0x8)
	struct TArray<class AFortPlayerPawnAthena*> AwareAllyPawns; // 0xd8 (0x10)
	struct TArray<class AFortPlayerPawnAthena*> AlreadyTestedPawns; // 0xe8 (0x10)
	class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet; // 0xf8 (0x8)
	class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters; // 0x100 (0x8)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters; // 0x108 (0x8)
};

