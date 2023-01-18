// Class /Script/FortniteGame.FortCameraMode_Tethered
// Size: 0x1b70
class UFortCameraMode_Tethered : public UFortCameraMode_ThirdPerson
{
	struct FVector OriginOffset; // 0x1b18 (0x18)
	struct FVector2D TetherOffsetRangeX; // 0x1b30 (0x10)
	struct FVector2D TetherDistanceRange; // 0x1b40 (0x10)
	float TetherJumpOffset; // 0x1b50 (0x4)
	float TetherJumpOffsetTime; // 0x1b54 (0x4)
	unsigned char unreflected_1b58[0xc]; // 0x1b58 (0xc) 
	float TetheredBoostFOV; // 0x1b64 (0x4)
	float FOVInterpSpeed; // 0x1b68 (0x4)
	unsigned char padding_1b6c[0x4]; // 0x1b6c (0x4)
};

