// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_DBNO
// Size: 0x288
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName DBNODestinationKeyName; // 0x230 (0x4)
	unsigned char unreflected_234[0x2]; // 0x234 (0x2) 
	unsigned char bAllowReachSquadmates; // 0x236 (0x1)
	unsigned char bAllowReachSameFactionNPCs; // 0x236 (0x1)
	unsigned char unreflected_237[0x1]; // 0x237 (0x1) 
	struct TArray<class AFortPlayerPawnAthena*> AllyPawns; // 0x238 (0x10)
	struct FVector CachedCurrentDestination; // 0x248 (0x18)
	class UFortAthenaAIBotDBNODigestedSkillSet* DBNOSkillSet; // 0x260 (0x8)
	class UFortAthenaAICoverComponent* CachedCoverComponent; // 0x268 (0x8)
	class UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters; // 0x270 (0x8)
	unsigned char padding_278[0x10]; // 0x278 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged (Underlying native function: OnAllyPawnDBNOStateChanged 0xa374db4)
	void OnAllyPawnDBNOStateChanged(class AFortPawn*& InPlayer, bool& bInIsDBNO); // (Final | Native | Private)
};

