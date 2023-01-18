// ScriptStruct /Script/FortniteGame.IndicatedActorData
// Size: 0xd8
struct FIndicatedActorData
{
	struct FString GroupIdentifier; // 0x0 (0x10)
	float Duration; // 0x10 (0x4)
	float StepTime; // 0x14 (0x4)
	struct FVector IndicatorOffset; // 0x18 (0x18)
	struct FVector IndicatorDBNOOffset; // 0x30 (0x18)
	enum EShareActorWith ShareActorWith; // 0x48 (0x1)
	unsigned char ShareActorWithMask; // 0x49 (0x1)
	unsigned char DisplayTeamOverride; // 0x4a (0x1)
	bool bClampToScreen; // 0x4b (0x1)
	struct FIndicatedActorScaleAndOpacityData ScaleAndOpacityData; // 0x4c (0x1c)
	struct FIndicatedActorParticleSystemData ParticleSystemData; // 0x68 (0x48)
	class USoundBase* sound; // 0xb0 (0x8)
	enum EIndicatorStateImage StateImageOverride; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	struct FDelegate OnActorAdded; // 0xbc (0xc)
	struct FDelegate OnActorRemoved; // 0xc8 (0xc)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)
};

