// ScriptStruct /Script/FortniteGame.FortWindImpulseRadius
// Size: 0x78
struct FFortWindImpulseRadius
{
	struct FVector Location; // 0x0 (0x18)
	float Radius; // 0x18 (0x4)
	float CurrentRadius; // 0x1c (0x4)
	float PreviousRadius; // 0x20 (0x4)
	float Magnitude; // 0x24 (0x4)
	float CurrentMagnitude; // 0x28 (0x4)
	float PreviousMagnitude; // 0x2c (0x4)
	float BlendTime; // 0x30 (0x4)
	float CurrentBlendTime; // 0x34 (0x4)
	struct FBox WorldBounds; // 0x38 (0x38)
	struct FFortWindImpulseHandle Handle; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

