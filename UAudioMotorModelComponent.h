// Class /Script/AudioMotorSim.AudioMotorModelComponent
// Size: 0x100
class UAudioMotorModelComponent : public UActorComponent
{
	struct TArray<struct FMotorSimEntry> SimComponents; // 0xa0 (0x10)
	struct TArray<struct TScriptInterface<class IAudioMotorSimOutput>> AudioComponents; // 0xb0 (0x10)
	unsigned char padding_c0[0x40]; // 0xc0 (0x40)

	/* Functions */

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Update (Underlying native function: Update 0x194c418)
	void Update(struct FAudioMotorSimInputContext& Input); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StopOutput (Underlying native function: StopOutput 0x14cfdb4)
	void StopOutput(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StartOutput (Underlying native function: StartOutput 0x292d060)
	void StartOutput(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Reset (Underlying native function: Reset 0x25f7420)
	void Reset(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent (Underlying native function: RemoveMotorSimComponent 0x720d368)
	void RemoveMotorSimComponent(struct TScriptInterface<class IAudioMotorSim>& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent (Underlying native function: RemoveMotorAudioComponent 0x720d2c0)
	void RemoveMotorAudioComponent(struct TScriptInterface<class IAudioMotorSimOutput>& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo (Underlying native function: GetRuntimeInfo 0x252441c)
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRpm (Underlying native function: GetRpm 0x720d2a8)
	float GetRpm(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetGear (Underlying native function: GetGear 0x2a66ad0)
	int GetGear(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetCachedInputData (Underlying native function: GetCachedInputData 0x2405a74)
	struct FAudioMotorSimInputContext GetCachedInputData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent (Underlying native function: AddMotorSimComponent 0x2255998)
	void AddMotorSimComponent(struct TScriptInterface<class IAudioMotorSim>& InComponent, int& SortOrder); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent (Underlying native function: AddMotorAudioComponent 0x2522edc)
	void AddMotorAudioComponent(struct TScriptInterface<class IAudioMotorSimOutput>& InComponent); // (Final | Native | Public | BlueprintCallable)
};

