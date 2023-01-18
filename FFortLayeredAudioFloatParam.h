// ScriptStruct /Script/FortniteGame.FortLayeredAudioFloatParam
// Size: 0x58
struct FFortLayeredAudioFloatParam
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName Name; // 0x4 (0x4)
	float Value; // 0x8 (0x4)
	enum ELayeredAudioInterpolationType InterpType; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	class UCurveFloat* Curve; // 0x10 (0x8)
	float AttackSpeed; // 0x18 (0x4)
	float ReleaseSpeed; // 0x1c (0x4)
	struct FVector2D ParamRange; // 0x20 (0x10)
	struct TArray<struct FFortLayeredAudioOneshotGate> Oneshots; // 0x30 (0x10)
	class UFortLayeredAudioComponent* Owner; // 0x40 (0x8)
	unsigned char padding_48[0x10]; // 0x48 (0x10)
};

