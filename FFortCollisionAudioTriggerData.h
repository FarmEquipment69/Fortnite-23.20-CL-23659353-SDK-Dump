// ScriptStruct /Script/FortniteGame.FortCollisionAudioTriggerData
// Size: 0x70
struct FFortCollisionAudioTriggerData
{
	class USoundBase* Asset; // 0x0 (0x8)
	struct FVector2D ImpulseMagnitudeRange; // 0x8 (0x10)
	bool bImpulseMagnitudeLowerBound; // 0x18 (0x1)
	bool bImpulseMagnitudeUpperBound; // 0x19 (0x1)
	unsigned char unreflected_1a[0x6]; // 0x1a (0x6) 
	struct FVector2D VolumeRange; // 0x20 (0x10)
	struct FVector2D PitchRange; // 0x30 (0x10)
	float MinRetriggerTime; // 0x40 (0x4)
	float MaxTriggerDistance; // 0x44 (0x4)
	unsigned char padding_48[0x28]; // 0x48 (0x28)
};

