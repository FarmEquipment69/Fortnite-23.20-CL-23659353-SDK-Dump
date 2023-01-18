// ScriptStruct /Script/FortniteGame.FortWindImpulseCylinderRadial
// Size: 0x68
struct FFortWindImpulseCylinderRadial
{
	struct FVector Location; // 0x0 (0x18)
	float InnerRadius; // 0x18 (0x4)
	float OuterRadius; // 0x1c (0x4)
	float Magnitude; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FBox WorldBounds; // 0x28 (0x38)
	bool bIsChanging; // 0x60 (0x1)
	bool bIsChangePending; // 0x61 (0x1)
	unsigned char unreflected_62[0x2]; // 0x62 (0x2) 
	struct FFortWindImpulseHandle Handle; // 0x64 (0x4)
};

