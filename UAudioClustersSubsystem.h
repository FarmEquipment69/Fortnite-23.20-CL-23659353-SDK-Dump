// Class /Script/AudioClustersRuntime.AudioClustersSubsystem
// Size: 0x38
class UAudioClustersSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_38[0x38]; 

	/* Functions */

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters (Underlying native function: UpdateClusters 0x72623b0)
	void UpdateClusters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Unregister (Underlying native function: Unregister 0x72622f8)
	bool Unregister(struct FAudioClusterActorInfo& ActorInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetParam (Underlying native function: SetParam 0x7262204)
	bool SetParam(struct FGameplayTag& tag, double& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition (Underlying native function: SetListenerPosition 0x726217c)
	void SetListenerPosition(struct FVector& InListenerPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap (Underlying native function: RemoveConfigMap 0x7262020)
	bool RemoveConfigMap(class UAudioClusterConfigMap*& Map); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Register (Underlying native function: Register 0x7261f74)
	bool Register(struct FAudioClusterActorInfo& ActorInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap (Underlying native function: AddConfigMap 0x7261df4)
	bool AddConfigMap(class UAudioClusterConfigMap*& Map); // (Final | Native | Public | BlueprintCallable)
};

