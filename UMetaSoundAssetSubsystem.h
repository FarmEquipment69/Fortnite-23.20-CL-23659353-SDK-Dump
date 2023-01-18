// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0x1e0
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies; // 0x38 (0x10)
	unsigned char padding_48[0x198]; // 0x48 (0x198)

	/* Functions */

	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories (Underlying native function: UnregisterAssetClassesInDirectories 0x79faa74)
	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories (Underlying native function: RegisterAssetClassesInDirectories 0x79fa9dc)
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

