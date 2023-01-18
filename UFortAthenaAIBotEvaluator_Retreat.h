// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Retreat
// Size: 0x258
class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName RetreatDestinationName; // 0x230 (0x4)
	unsigned char unreflected_234[0x4]; // 0x234 (0x4) 
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x238 (0x8)
	class UFortAthenaAICoverComponent* CachedCoverComponent; // 0x240 (0x8)
	unsigned char padding_248[0x10]; // 0x248 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged (Underlying native function: HandlePlayerHealthOrShieldChanged 0xa38ccb0)
	void HandlePlayerHealthOrShieldChanged(); // (Final | Native | Protected)
};

