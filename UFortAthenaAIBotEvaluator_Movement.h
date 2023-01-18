// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Movement
// Size: 0x230
class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIBotEvaluator
{
	struct FName MovementStateKeyName; // 0x88 (0x4)
	struct FName MovementDestinationKeyName; // 0x8c (0x4)
	struct FName LastPartialPathTimeKeyName; // 0x90 (0x4)
	struct FName LastPartialPathCountKeyName; // 0x94 (0x4)
	struct FName LastBlockedPathCountKeyName; // 0x98 (0x4)
	struct FName UnstuckInWaterExecutionStatusName; // 0x9c (0x4)
	struct FName UnstuckLastBlockedByActorKeyName; // 0xa0 (0x4)
	struct FName UnstuckExecutionStatusKeyName; // 0xa4 (0x4)
	struct FName TeleportExecutionStatusKeyName; // 0xa8 (0x4)
	struct FName UndermineExecutionStatusKeyName; // 0xac (0x4)
	struct FName UndermineTargetKeyName; // 0xb0 (0x4)
	struct FName UndermineLocationImpactName; // 0xb4 (0x4)
	struct FName UnstuckSteerExecutionStatusKeyName; // 0xb8 (0x4)
	struct FName UnstuckSteerDirectionKeyName; // 0xbc (0x4)
	struct FName ZiplineTargetKeyName; // 0xc0 (0x4)
	struct FName LastZiplineUsedName; // 0xc4 (0x4)
	struct FName ZiplineMoveExecutionStatusKeyName; // 0xc8 (0x4)
	struct FName ZiplineMovementStateName; // 0xcc (0x4)
	struct FName ZiplineEntryLocationKeyName; // 0xd0 (0x4)
	struct FName ZiplineExitLocationKeyName; // 0xd4 (0x4)
	struct FName ZiplineLastUsageTimeName; // 0xd8 (0x4)
	struct FName ZiplineUsageExecutionStatusName; // 0xdc (0x4)
	struct FScalableFloat WaitTimeBetweenZiplineRandomChoices; // 0xe0 (0x28)
	struct FScalableFloat ProbabilityToUseZipline; // 0x108 (0x28)
	class UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x130 (0x8)
	unsigned char unreflected_138[0x10]; // 0x138 (0x10) 
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementDigestedSkillSet; // 0x148 (0x8)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0x150 (0x8)
	unsigned char padding_158[0xd8]; // 0x158 (0xd8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Movement.OnCurrentUnstuckSteeringAttemptFinished (Underlying native function: OnCurrentUnstuckSteeringAttemptFinished 0xa374f34)
	void OnCurrentUnstuckSteeringAttemptFinished(enum EBotUnstuckSteeringReason& UnstuckSteeringReason); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Movement.EvaluateIsolatedIslandSteering (Underlying native function: EvaluateIsolatedIslandSteering 0xa374d8c)
	void EvaluateIsolatedIslandSteering(); // (Final | Native | Private)
};

