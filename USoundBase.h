// Class /Script/Engine.SoundBase
// Size: 0x168
class USoundBase : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class USoundClass* SoundClassObject; // 0x30 (0x8)
	unsigned char bDebug; // 0x38 (0x1)
	unsigned char bOverrideConcurrency; // 0x38 (0x1)
	unsigned char bEnableBusSends; // 0x38 (0x1)
	unsigned char bEnableBaseSubmix; // 0x38 (0x1)
	unsigned char bEnableSubmixSends; // 0x38 (0x1)
	unsigned char bHasDelayNode; // 0x38 (0x1)
	unsigned char bHasConcatenatorNode; // 0x38 (0x1)
	unsigned char bBypassVolumeScaleForPriority; // 0x38 (0x1)
	enum EVirtualizationMode VirtualizationMode; // 0x39 (0x1)
	unsigned char unreflected_3a[0x56]; // 0x3a (0x56) 
	struct TSet<class USoundConcurrency*> ConcurrencySet; // 0x90 (0x50)
	struct FSoundConcurrencySettings ConcurrencyOverrides; // 0xe0 (0x20)
	float Duration; // 0x100 (0x4)
	float MaxDistance; // 0x104 (0x4)
	float TotalSamples; // 0x108 (0x4)
	float Priority; // 0x10c (0x4)
	class USoundAttenuation* AttenuationSettings; // 0x110 (0x8)
	class USoundSubmixBase* SoundSubmixObject; // 0x118 (0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x120 (0x10)
	class USoundEffectSourcePresetChain* SourceEffectChain; // 0x130 (0x8)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x138 (0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x148 (0x10)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x158 (0x10)
};

