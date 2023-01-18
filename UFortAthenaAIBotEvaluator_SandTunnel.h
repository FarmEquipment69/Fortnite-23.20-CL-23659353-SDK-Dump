// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_SandTunnel
// Size: 0x150
class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery
{
	struct FName JumpExecutionStatusName; // 0xd8 (0x4)
	struct FName LootInteractionExecutionStatusName; // 0xdc (0x4)
	struct FName WeaponTriggerMeleeName; // 0xe0 (0x4)
	struct FName WeaponFireName; // 0xe4 (0x4)
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	struct FGameplayTagQuery BuriedTagQuery; // 0xf0 (0x48)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x138 (0x8)
	unsigned char padding_140[0x10]; // 0x140 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged (Underlying native function: OnBotControllerAlertLevelChanged 0xa38ccd8)
	void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController*& BotController, enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_SandTunnel.Jump (Underlying native function: Jump 0xa38ccc4)
	void Jump(); // (Final | Native | Protected)
};

