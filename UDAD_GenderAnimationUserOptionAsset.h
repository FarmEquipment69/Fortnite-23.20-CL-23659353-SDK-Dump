// Class /Script/FortniteGame.DAD_GenderAnimationUserOptionAsset
// Size: 0x80
class UDAD_GenderAnimationUserOptionAsset : public UPrimaryDataAsset
{
	struct FFortAnimationsPerGender GenderAnimation; // 0x30 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.DAD_GenderAnimationUserOptionAsset.GetAnimationForGender (Underlying native function: GetAnimationForGender 0x87b2250)
	struct TWeakObjectPtr<class UAnimSequenceBase> GetAnimationForGender(struct TEnumAsByte<EFortCustomGender>& Gender); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

