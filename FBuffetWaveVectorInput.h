// ScriptStruct /Script/FortniteGame.BuffetWaveVectorInput
// Size: 0x80
struct FBuffetWaveVectorInput
{
	struct FRotator Amplitudes; // 0x0 (0x18)
	struct FRotator Frequencies; // 0x18 (0x18)
	struct FRotator Offsets; // 0x30 (0x18)
	bool bUseNoise; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FVector min; // 0x50 (0x18)
	struct FVector max; // 0x68 (0x18)
};

