// Class /Script/FortniteAI.FortAthenaBTTask_BotUnstuckTeleport
// Size: 0xf0
class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode
{
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70 (0x48)
	struct FName CanReachDestinationKeyName; // 0xb8 (0x4)
	struct FName TeleportExecutionStatusKeyName; // 0xbc (0x4)
	struct FName LastPartialPathTimeKeyName; // 0xc0 (0x4)
	struct FName LastPartialPathCountKeyName; // 0xc4 (0x4)
	unsigned char unreflected_c8[0x20]; // 0xc8 (0x20) 
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0xe8 (0x8)
};

