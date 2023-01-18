// Class /Script/AnimationSharing.AnimSharingInstance
// Size: 0x120
class UAnimSharingInstance : public UObject
{
	struct TArray<class AActor*> RegisteredActors; // 0x28 (0x10)
	unsigned char unreflected_38[0x50]; // 0x38 (0x50) 
	class UAnimationSharingStateProcessor* StateProcessor; // 0x88 (0x8)
	unsigned char unreflected_90[0x38]; // 0x90 (0x38) 
	struct TArray<class UAnimSequence*> UsedAnimationSequences; // 0xc8 (0x10)
	unsigned char unreflected_d8[0x10]; // 0xd8 (0x10) 
	class UEnum* StateEnum; // 0xe8 (0x8)
	class AActor* SharingActor; // 0xf0 (0x8)
	unsigned char padding_f8[0x28]; // 0xf8 (0x28)
};

