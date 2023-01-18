// Class /Script/FortniteGame.FortMovementComp_CharacterAthena
// Size: 0x4df0
class UFortMovementComp_CharacterAthena : public UFortMovementComp_Character
{
	struct TArray<struct FAthenaJumpPenalty*> JumpPenalties; // 0x4d70 (0x10)
	float JumpPenaltyResetTime; // 0x4d80 (0x4)
	unsigned char unreflected_4d84[0xc]; // 0x4d84 (0xc) 
	int NetworkSkipSkyDivingCollisionForPawnLOD; // 0x4d90 (0x4)
	float MaxAccelerationFlying; // 0x4d94 (0x4)
	unsigned char padding_4d98[0x58]; // 0x4d98 (0x58)
};

