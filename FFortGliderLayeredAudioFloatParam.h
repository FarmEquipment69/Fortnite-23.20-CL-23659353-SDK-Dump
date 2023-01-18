// ScriptStruct /Script/FortniteGame.FortGliderLayeredAudioFloatParam
// Size: 0x28
struct FFortGliderLayeredAudioFloatParam
{
	enum ELayeredAudioInterpolationType InterpType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UCurveFloat* Curve; // 0x8 (0x8)
	float AttackSpeed; // 0x10 (0x4)
	float ReleaseSpeed; // 0x14 (0x4)
	struct TArray<struct FFortGliderLayeredAudioOneshotGate> Oneshots; // 0x18 (0x10)
};

