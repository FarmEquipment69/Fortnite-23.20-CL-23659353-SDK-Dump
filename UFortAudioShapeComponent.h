// Class /Script/FortniteGame.FortAudioShapeComponent
// Size: 0x120
class UFortAudioShapeComponent : public UActorComponent
{
	float UpdateFrequencyInaudible; // 0xa0 (0x4)
	float UpdateFrequencyAudible; // 0xa4 (0x4)
	float MaxDistanceOffset; // 0xa8 (0x4)
	float SmoothingDistance; // 0xac (0x4)
	struct TMap<struct FName, class UAudioComponent*> AudioComponents; // 0xb0 (0x50)
	struct TArray<struct TWeakObjectPtr<class APlayerController>> LocalControllers; // 0x100 (0x10)
	struct FTimerHandle* AudioShapeInitTimer; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAudioShapeComponent.UpdateAudioShape (Underlying native function: UpdateAudioShape 0x8e61334)
	void UpdateAudioShape(struct TArray<struct TWeakObjectPtr<class APlayerController>>& InLocalControllers); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAudioShapeComponent.Enable (Underlying native function: Enable 0x206352c)
	void Enable(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioShapeComponent.Disable (Underlying native function: Disable 0x720c758)
	void Disable(float& FadeTime); // (0x00000002 | Native | Public | BlueprintCallable)
};

