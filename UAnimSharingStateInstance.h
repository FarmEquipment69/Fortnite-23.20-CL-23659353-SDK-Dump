// Class /Script/AnimationSharing.AnimSharingStateInstance
// Size: 0x370
class UAnimSharingStateInstance : public UAnimInstance
{
	class UAnimSequence* AnimationToPlay; // 0x348 (0x8)
	float PermutationTimeOffset; // 0x350 (0x4)
	float PlayRate; // 0x354 (0x4)
	bool bStateBool; // 0x358 (0x1)
	unsigned char unreflected_359[0x7]; // 0x359 (0x7) 
	class UAnimSharingInstance* Instance; // 0x360 (0x8)
	unsigned char padding_368[0x8]; // 0x368 (0x8)

	/* Functions */

	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors (Underlying native function: GetInstancedActors 0x7802734)
	void GetInstancedActors(struct TArray<class AActor*>& Actors); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

