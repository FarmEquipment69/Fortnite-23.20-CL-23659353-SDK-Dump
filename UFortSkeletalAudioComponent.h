// Class /Script/FortniteGame.FortSkeletalAudioComponent
// Size: 0x118
class UFortSkeletalAudioComponent : public UActorComponent
{
	class UFortSkeletalAudioAssetBank* AudioAssetBank; // 0xa0 (0x8)
	bool bShouldIgnoreDilation; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	float InterpSpeed; // 0xac (0x4)
	bool bShouldAttachOneShots; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct TArray<struct FSkeletalAudioBoneInstance> BoneInstances; // 0xb8 (0x10)
	class USkeletalMeshComponent* SkeletalMesh; // 0xc8 (0x8)
	struct FMulticastInlineDelegate OnLoopSoundTriggered; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnLoopSoundModulated; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnMediumSoundTriggered; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnHeavySoundTriggered; // 0x100 (0x10)
	unsigned char padding_110[0x8]; // 0x110 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSkeletalAudioComponent.SetVolumeMultiplier (Underlying native function: SetVolumeMultiplier 0x8e60fa0)
	void SetVolumeMultiplier(float& Multiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkeletalAudioComponent.SetSkeletalMesh (Underlying native function: SetSkeletalMesh 0x8e60e08)
	void SetSkeletalMesh(class USkeletalMeshComponent*& NewSkeletalMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkeletalAudioComponent.SetCustomTrackedTransform (Underlying native function: SetCustomTrackedTransform 0x8e606a4)
	void SetCustomTrackedTransform(int& Index, struct FTransform& Transform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSkeletalAudioComponent.SetCanPlay (Underlying native function: SetCanPlay 0x8e60624)
	void SetCanPlay(bool& CanPlay); // (Final | Native | Public | BlueprintCallable)
};

