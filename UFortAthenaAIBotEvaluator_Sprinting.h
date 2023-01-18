// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Sprinting
// Size: 0x108
class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator
{
	struct FName AllowSprintKeyName; // 0x88 (0x4)
	struct FName AllowSlideKeyName; // 0x8c (0x4)
	struct FName JumpExecutionStatusName; // 0x90 (0x4)
	struct FName TacticalSprintExecutionStatusName; // 0x94 (0x4)
	struct FName SlideExecutionStatusName; // 0x98 (0x4)
	struct FName UrgentMovementKeyName; // 0x9c (0x4)
	struct FName RangeAttackExecutionStatusName; // 0xa0 (0x4)
	struct FName MeleeAttackExecutionStatusName; // 0xa4 (0x4)
	struct FName ThrowableAttackExecutionStatusName; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x12]; // 0xac (0x12) 
	bool bSprintOnlyInWater; // 0xbe (0x1)
	bool bSprintOnlyInUrgentMode; // 0xbf (0x1)
	class UFortAthenaAIBotMovementDigestedSkillSet* MovementSkillSet; // 0xc0 (0x8)
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0xc8 (0x8)
	float TacticalSprintTriggerChance; // 0xd0 (0x4)
	float TacticalSprintTriggerChanceInUrgentMovement; // 0xd4 (0x4)
	float TacticalSprintJumpTriggerChance; // 0xd8 (0x4)
	unsigned char padding_dc[0x2c]; // 0xdc (0x2c)
};

