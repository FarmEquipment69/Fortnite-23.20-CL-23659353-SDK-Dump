// Class /Script/FortniteGame.GameplayCueBurst_CollisionEffect_Parent
// Size: 0x368
class UGameplayCueBurst_CollisionEffect_Parent : public UFortGameplayCueNotify_Burst
{
	class USoundBase* DefaultSoundAsset; // 0x210 (0x8)
	class USoundBase* SmallSoundAsset; // 0x218 (0x8)
	class USoundBase* AverageSoundAsset; // 0x220 (0x8)
	class USoundBase* MediumSoundAsset; // 0x228 (0x8)
	class USoundBase* LargeSoundAsset; // 0x230 (0x8)
	class USoundBase* ZeroGSoundAsset; // 0x238 (0x8)
	struct FAudioParameter AudioParamsArray[0x2]; // 0x240 (0x90) (ARRAY) 
	unsigned char padding_360[0x8]; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.GameplayCueBurst_CollisionEffect_Parent.GetTargetActor (Underlying native function: GetTargetActor 0x8140c20)
	class AActor* GetTargetActor(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

