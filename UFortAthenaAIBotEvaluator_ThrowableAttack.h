// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_ThrowableAttack
// Size: 0x298
class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack
{
	struct FName WeaponTriggerThrowableName; // 0x248 (0x4)
	struct FName ThrowableAttackIsReadyToThrowName; // 0x24c (0x4)
	unsigned char unreflected_250[0x8]; // 0x250 (0x8) 
	class UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet; // 0x258 (0x8)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet; // 0x260 (0x8)
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0x268 (0x8)
	class UFortWorldItem* ChosenWeapon; // 0x270 (0x8)
	class AFortPawn* CachedFortPawn; // 0x278 (0x8)
	unsigned char padding_280[0x18]; // 0x280 (0x18)
};

