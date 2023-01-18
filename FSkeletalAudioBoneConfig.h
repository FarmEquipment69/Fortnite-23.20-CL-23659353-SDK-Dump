// ScriptStruct /Script/FortniteGame.SkeletalAudioBoneConfig
// Size: 0x38
struct FSkeletalAudioBoneConfig
{
	struct FName BoneName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class USoundBase* SoundLoop; // 0x8 (0x8)
	class USoundBase* SoundMediumDelta; // 0x10 (0x8)
	class USoundBase* SoundHighDelta; // 0x18 (0x8)
	float ThresholdLoop; // 0x20 (0x4)
	float ThresholdMedium; // 0x24 (0x4)
	float ThresholdHigh; // 0x28 (0x4)
	float RetriggerDelay; // 0x2c (0x4)
	enum ESkeletalAudioBoneSpace TrackingSpace; // 0x30 (0x1)
	enum ESkeletalAudioBoneVelocityType VelocityTrackingType; // 0x31 (0x1)
	unsigned char padding_32[0x6]; // 0x32 (0x6)
};

