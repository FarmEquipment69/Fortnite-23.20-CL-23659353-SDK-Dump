// ScriptStruct /Script/FortniteGame.AthenaBatchedDamageGameplayCues_Shared
// Size: 0x78
struct FAthenaBatchedDamageGameplayCues_Shared
{
	struct FVector_NetQuantize10 Location; // 0x0 (0x18)
	struct FVector_NetQuantizeNormal Normal; // 0x18 (0x18)
	float Magnitude; // 0x30 (0x4)
	bool bWeaponActivate; // 0x34 (0x1)
	bool bIsFatal; // 0x35 (0x1)
	bool bIsCritical; // 0x36 (0x1)
	bool bIsShield; // 0x37 (0x1)
	bool bIsShieldDestroyed; // 0x38 (0x1)
	bool bIsShieldApplied; // 0x39 (0x1)
	bool bIsBallistic; // 0x3a (0x1)
	bool bIsBeam; // 0x3b (0x1)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector_NetQuantize10 NonPlayerLocation; // 0x40 (0x18)
	struct FVector_NetQuantizeNormal NonPlayerNormal; // 0x58 (0x18)
	float NonPlayerMagnitude; // 0x70 (0x4)
	bool NonPlayerbIsFatal; // 0x74 (0x1)
	bool NonPlayerbIsCritical; // 0x75 (0x1)
	bool bIsValid; // 0x76 (0x1)
	unsigned char padding_77[0x1]; // 0x77 (0x1)
};

