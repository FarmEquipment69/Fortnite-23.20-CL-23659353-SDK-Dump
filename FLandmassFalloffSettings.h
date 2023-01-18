// ScriptStruct /Script/Landmass.LandmassFalloffSettings
// Size: 0x14
struct FLandmassFalloffSettings
{
	enum EBrushFalloffMode FalloffMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float FalloffAngle; // 0x4 (0x4)
	float FalloffWidth; // 0x8 (0x4)
	float EdgeOffset; // 0xc (0x4)
	float ZOffset; // 0x10 (0x4)
};

