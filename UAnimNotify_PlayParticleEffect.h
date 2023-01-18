// Class /Script/Engine.AnimNotify_PlayParticleEffect
// Size: 0xc0
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
	class UParticleSystem* PSTemplate; // 0x38 (0x8)
	struct FVector LocationOffset; // 0x40 (0x18)
	struct FRotator RotationOffset; // 0x58 (0x18)
	struct FVector Scale; // 0x70 (0x18)
	unsigned char unreflected_88[0x28]; // 0x88 (0x28) 
	unsigned char Attached; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	struct FName SocketName; // 0xb4 (0x4)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)
};

