// ScriptStruct /Script/FortniteGame.SourceDriver
// Size: 0x30
struct FSourceDriver
{
	struct FBoneReference SourceBone; // 0x0 (0xc)
	struct TEnumAsByte<EComponentType> SourceComponent; // 0xc (0x1)
	bool UseQuaternion; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	class UCurveFloat* DrivingCurve; // 0x10 (0x8)
	float Multiplier; // 0x18 (0x4)
	bool bUseRange; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float RangeMin; // 0x20 (0x4)
	float RangeMax; // 0x24 (0x4)
	float RemappedMin; // 0x28 (0x4)
	float RemappedMax; // 0x2c (0x4)
};

