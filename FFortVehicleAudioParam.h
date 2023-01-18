// ScriptStruct /Script/FortniteGame.FortVehicleAudioParam
// Size: 0x20
struct FFortVehicleAudioParam
{
	float Value; // 0x0 (0x4)
	enum EVehicleAudioInterpolationType InterpType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	class UCurveFloat* Curve; // 0x8 (0x8)
	float AttackSpeed; // 0x10 (0x4)
	float ReleaseSpeed; // 0x14 (0x4)
	unsigned char padding_18[0x8]; // 0x18 (0x8)
};

