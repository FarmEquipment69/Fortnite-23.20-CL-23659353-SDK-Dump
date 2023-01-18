// Class /Script/Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x78
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
	class UParticleSystem* PSTemplate; // 0x30 (0x8)
	struct FName SocketName; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector LocationOffset; // 0x40 (0x18)
	struct FRotator RotationOffset; // 0x58 (0x18)
	bool bDestroyAtEnd; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

