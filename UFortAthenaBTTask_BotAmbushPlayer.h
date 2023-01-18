// Class /Script/FortniteAI.FortAthenaBTTask_BotAmbushPlayer
// Size: 0x108
class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait
{
	float FacingPrecision; // 0x78 (0x4)
	float WeaponCooldown; // 0x7c (0x4)
	bool bClearBlackboardOnFinished; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FBlackboardKeySelector TargetedPlayerKeySelector; // 0x88 (0x28)
	struct FBlackboardKeySelector MaxLocationErrorKeySelector; // 0xb0 (0x28)
	struct FBlackboardKeySelector MinLocationErrorKeySelector; // 0xd8 (0x28)
	unsigned char padding_100[0x8]; // 0x100 (0x8)
};

