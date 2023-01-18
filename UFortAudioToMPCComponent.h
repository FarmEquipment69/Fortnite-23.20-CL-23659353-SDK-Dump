// Class /Script/FortniteGame.FortAudioToMPCComponent
// Size: 0x160
class UFortAudioToMPCComponent : public UActorComponent
{
	bool bPushDataToMPC; // 0xa0 (0x1)
	bool bCacheDataForBlueprintUse; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x6]; // 0xa2 (0x6) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0xa8 (0x8)
	struct TArray<struct FChannelData> ChannelDataArray; // 0xb0 (0x10)
	struct TArray<struct FVector4ChannelData> VectorChannelDataArray; // 0xc0 (0x10)
	struct TArray<struct FSoundWaveSpectralDataPerSound> FFTDataArray; // 0xd0 (0x10)
	struct TArray<struct FSoundWaveSpectralDataPerSound> TempFFTDataArray; // 0xe0 (0x10)
	bool bWasPlaying; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x1f]; // 0xf1 (0x1f) 
	struct TSet<class UAudioComponent*> TrackedAudioComponents; // 0x110 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAudioToMPCComponent.RemoveTrackedAudioComponent (Underlying native function: RemoveTrackedAudioComponent 0x888b798)
	bool RemoveTrackedAudioComponent(class UAudioComponent*& InAudioComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioToMPCComponent.OnGatheredFFTData (Has no native function)
	void OnGatheredFFTData(struct TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAudioToMPCComponent.GetCachedMagnitudeForChannel (Underlying native function: GetCachedMagnitudeForChannel 0x888b5e8)
	float GetCachedMagnitudeForChannel(int& ChannelIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioToMPCComponent.GetCachedAverageMagnitude (Underlying native function: GetCachedAverageMagnitude 0x888b5c0)
	float GetCachedAverageMagnitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioToMPCComponent.AddTrackedAudioComponent (Underlying native function: AddTrackedAudioComponent 0x888b530)
	void AddTrackedAudioComponent(class UAudioComponent*& InAudioComponent); // (Final | Native | Public | BlueprintCallable)
};

