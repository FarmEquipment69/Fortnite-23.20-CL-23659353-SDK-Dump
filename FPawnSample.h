// ScriptStruct /Script/FortniteGame.PawnSample
// Size: 0x50
struct FPawnSample : FBaseSample
{
	struct FRotator Rotation; // 0x28 (0x18)
	float Health; // 0x40 (0x4)
	float Shield; // 0x44 (0x4)
	unsigned char bIsJumpingOrFalling; // 0x48 (0x1)
	unsigned char bIsInVehicle; // 0x48 (0x1)
	unsigned char bIsParachuteOpen; // 0x48 (0x1)
	unsigned char bIsDBNO; // 0x48 (0x1)
	unsigned char bIsDead; // 0x48 (0x1)
	unsigned char bIsSwimming; // 0x48 (0x1)
	unsigned char unreflected_49[0x1]; // 0x49 (0x1) 
	int16_t POITag; // 0x4a (0x2)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

