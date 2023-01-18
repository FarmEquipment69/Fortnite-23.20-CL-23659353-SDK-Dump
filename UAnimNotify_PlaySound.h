// Class /Script/Engine.AnimNotify_PlaySound
// Size: 0x50
class UAnimNotify_PlaySound : public UAnimNotify
{
	class USoundBase* sound; // 0x38 (0x8)
	float VolumeMultiplier; // 0x40 (0x4)
	float PitchMultiplier; // 0x44 (0x4)
	unsigned char bFollow; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FName AttachName; // 0x4c (0x4)
};

