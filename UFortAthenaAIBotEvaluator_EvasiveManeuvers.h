// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_EvasiveManeuvers
// Size: 0x270
class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator
{
	unsigned char unreflected_88[0xa8]; // 0x88 (0xa8) 
	struct FName CrouchExecutionStatusName; // 0x130 (0x4)
	struct FName JumpExecutionStatusName; // 0x134 (0x4)
	struct FName JetpackStrafeExecutionStatusName; // 0x138 (0x4)
	struct FName DodgeName; // 0x13c (0x4)
	struct FName DestinationKeyName; // 0x140 (0x4)
	struct FName UrgentMoveKeyName; // 0x144 (0x4)
	unsigned char unreflected_148[0xc]; // 0x148 (0xc) 
	bool bDoCrouching; // 0x154 (0x1)
	bool bDoDodging; // 0x155 (0x1)
	bool bDoJumping; // 0x156 (0x1)
	bool bDoJumpingDistanceCheck; // 0x157 (0x1)
	bool bDoJetpackStrafing; // 0x158 (0x1)
	bool bDoJetpackStrafingDistanceCheck; // 0x159 (0x1)
	unsigned char unreflected_15a[0x2]; // 0x15a (0x2) 
	float JetpackStrafingRequiredFuelPercent; // 0x15c (0x4)
	float JetpackStrafeNavPadding; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	struct FGameplayTagQuery RequiredTagQuery; // 0x168 (0x48)
	struct FGameplayTagQuery JetpackRequiredTagQuery; // 0x1b0 (0x48)
	struct FGameplayTagQuery JumpRequiredTagQuery; // 0x1f8 (0x48)
	class UClass* ForcedPerkClass; // 0x240 (0x8)
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x248 (0x8)
	unsigned char padding_250[0x20]; // 0x250 (0x20)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted (Underlying native function: OnMoveCompleted 0xa374fb4)
	void OnMoveCompleted(struct FAIRequestID& RequestId, struct TEnumAsByte<EPathFollowingResult>& MovementResult); // (Final | Native | Public)
};

