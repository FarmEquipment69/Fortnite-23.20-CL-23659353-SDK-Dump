// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Revive
// Size: 0x298
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{
	struct FScalableFloat LastReviveTargetExpiration; // 0x230 (0x28)
	struct FName ReviveTargetKeyName; // 0x258 (0x4)
	struct FName ReviveLastTargetKeyName; // 0x25c (0x4)
	class UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters; // 0x260 (0x8)
	class AFortPlayerPawnAthena* CurrentReviveTarget; // 0x268 (0x8)
	struct TArray<class AFortPlayerPawnAthena*> DBNOAllyPawns; // 0x270 (0x10)
	class UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet; // 0x280 (0x8)
	unsigned char padding_288[0x10]; // 0x288 (0x10)
};

