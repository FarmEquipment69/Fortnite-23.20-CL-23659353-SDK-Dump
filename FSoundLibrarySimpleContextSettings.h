// ScriptStruct /Script/SoundLibrary.SoundLibrarySimpleContextSettings
// Size: 0x58
struct FSoundLibrarySimpleContextSettings
{
	struct FGameplayTag EventName; // 0x0 (0x4)
	bool bAttachedSound; // 0x4 (0x1)
	bool bStopWhenAttachedDestroyed; // 0x5 (0x1)
	bool bAutoDestroy; // 0x6 (0x1)
	bool bForceComponentCreation; // 0x7 (0x1)
	float VolumeMultiplier; // 0x8 (0x4)
	float PitchMultiplier; // 0xc (0x4)
	float StartTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class USoundConcurrency* ConcurrencySettings; // 0x18 (0x8)
	class USoundAttenuation* AttenuationSettings; // 0x20 (0x8)
	struct FName AttachName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class USceneComponent* AttachToComponent; // 0x30 (0x8)
	struct TEnumAsByte<EAttachLocation> LocationType; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FVector Location; // 0x40 (0x18)
};

