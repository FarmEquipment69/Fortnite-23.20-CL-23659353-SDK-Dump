// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Flee
// Size: 0x268
class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement
{
	float MinDistanceFromTarget; // 0x230 (0x4)
	float MinValidDistanceForFleeLocation; // 0x234 (0x4)
	float FleeDistance; // 0x238 (0x4)
	float MaxDistanceFromTargetWhenFleeing; // 0x23c (0x4)
	float MinDistanceHysteresisWhenChangingTarget; // 0x240 (0x4)
	struct FName FleeKeyName; // 0x244 (0x4)
	struct FName FleeMovementStateKeyName; // 0x248 (0x4)
	struct FName FleeDestinationKeyName; // 0x24c (0x4)
	struct FName FleeActorKeyName; // 0x250 (0x4)
	unsigned char unreflected_254[0xc]; // 0x254 (0xc) 
	class AActor* CurrentActorFleeingFrom; // 0x260 (0x8)
};

