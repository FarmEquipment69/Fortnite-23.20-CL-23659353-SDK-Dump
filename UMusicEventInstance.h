// Class /Script/FortniteGame.MusicEventInstance
// Size: 0xf8
class UMusicEventInstance : public UObject
{
	struct TWeakObjectPtr<class UAudioComponent> Component; // 0x28 (0x8)
	unsigned char unreflected_30[0x68]; // 0x30 (0x68) 
	class UMusicEventSubsystem* Subsystem; // 0x98 (0x8)
	class UMusicEventSubsystemData* SubsystemData; // 0xa0 (0x8)
	struct FMulticastInlineDelegate OnPlaybackCompleted; // 0xa8 (0x10)
	unsigned char padding_b8[0x40]; // 0xb8 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.MusicEventInstance.OnComponentOwnerEndPlay (Underlying native function: OnComponentOwnerEndPlay 0x8e7f4cc)
	void OnComponentOwnerEndPlay(class AActor*& Owner, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.MusicEventInstance.OnAudioComponentFinished (Underlying native function: OnAudioComponentFinished 0x1800cd4)
	void OnAudioComponentFinished(); // (Final | Native | Private)

	// Function /Script/FortniteGame.MusicEventInstance.GetVolume (Underlying native function: GetVolume 0x712055c)
	float GetVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetPriority (Underlying native function: GetPriority 0x6d2c944)
	int GetPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetOwner (Underlying native function: GetOwner 0x8e7ea04)
	class AActor* GetOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetMaxDistance (Underlying native function: GetMaxDistance 0x87b2c90)
	float GetMaxDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetIsWithinAttenuationThreshold (Underlying native function: GetIsWithinAttenuationThreshold 0x8e7e7f8)
	bool GetIsWithinAttenuationThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetIsTickable (Underlying native function: GetIsTickable 0x8e7e7d4)
	bool GetIsTickable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetIsPlaying (Underlying native function: GetIsPlaying 0x868bab8)
	bool GetIsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetIsInFront (Underlying native function: GetIsInFront 0x8e7e7bc)
	bool GetIsInFront(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetIsAudible (Underlying native function: GetIsAudible 0x8e7e7a4)
	bool GetIsAudible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetEventData (Underlying native function: GetEventData 0x8e7e468)
	struct FMusicEventData GetEventData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetDistSqToListener (Underlying native function: GetDistSqToListener 0x8e7e450)
	float GetDistSqToListener(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetComponent (Underlying native function: GetComponent 0x8e7e354)
	class UAudioComponent* GetComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetAttenuationEval (Underlying native function: GetAttenuationEval 0x8e7e16c)
	float GetAttenuationEval(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventInstance.GetAsset (Underlying native function: GetAsset 0x7399960)
	class USoundBase* GetAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

