// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_HitAndRun
// Size: 0x328
class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement
{
	struct FScalableFloat AttackDurationBeforeEvade; // 0x230 (0x28)
	struct FScalableFloat MeleeAttackMaxDistToEvade; // 0x258 (0x28)
	struct FScalableFloat ClampEvadeDistanceEnable; // 0x280 (0x28)
	struct FScalableFloat MinDistanceToEvade; // 0x2a8 (0x28)
	struct FScalableFloat MaxDistanceToEvade; // 0x2d0 (0x28)
	struct FName EvadeKeyName; // 0x2f8 (0x4)
	struct FName EvadeMovementStateKeyName; // 0x2fc (0x4)
	struct FName EvadeDestinationKeyName; // 0x300 (0x4)
	struct FName WeaponTriggerMeleeName; // 0x304 (0x4)
	unsigned char unreflected_308[0x10]; // 0x308 (0x10) 
	float MeleeAttackMaxDistToEvadeSqr; // 0x318 (0x4)
	float MaxDistanceToEvadeSqr; // 0x31c (0x4)
	unsigned char padding_320[0x8]; // 0x320 (0x8)
};

