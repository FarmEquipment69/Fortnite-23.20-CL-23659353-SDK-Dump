// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_AvoidThreat
// Size: 0x258
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName AvoidThreatKeyName; // 0x230 (0x4)
	struct FName AvoidThreatMovementStateKeyName; // 0x234 (0x4)
	struct FName AvoidThreatDestinationKeyName; // 0x238 (0x4)
	unsigned char unreflected_23c[0xc]; // 0x23c (0xc) 
	class AActor* CurrentThreatActorAvoiding; // 0x248 (0x8)
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x250 (0x8)
};

