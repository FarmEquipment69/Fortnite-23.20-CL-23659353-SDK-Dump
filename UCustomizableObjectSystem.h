// Class /Script/CustomizableObject.CustomizableObjectSystem
// Size: 0x158
class UCustomizableObjectSystem : public UObject
{
	struct TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x28 (0x10)
	class UDefaultImageProvider* DefaultImageProvider; // 0x38 (0x8)
	class UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement; // 0x40 (0x8)
	class UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement; // 0x48 (0x8)
	struct TArray<class UTexture2D*> ProtectedCachedTextures; // 0x50 (0x10)
	unsigned char padding_60[0xf8]; // 0x60 (0xf8)

	/* Functions */

	// Function /Script/CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately (Underlying native function: SetReleaseMutableTexturesImmediately 0x7506b28)
	void SetReleaseMutableTexturesImmediately(bool& bReleaseTextures); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTotalInstances (Underlying native function: GetTotalInstances 0x7506b0c)
	int GetTotalInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed (Underlying native function: GetTextureMemoryUsed 0x7506af0)
	int GetTextureMemoryUsed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetPluginVersion (Underlying native function: GetPluginVersion 0x75069a4)
	struct FString GetPluginVersion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances (Underlying native function: GetNumPendingInstances 0x7506988)
	int GetNumPendingInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumInstances (Underlying native function: GetNumInstances 0x7506970)
	int GetNumInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstance (Underlying native function: GetInstance 0x750694c)
	static class UCustomizableObjectSystem* GetInstance(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime (Underlying native function: GetAverageBuildTime 0x7506920)
	int GetAverageBuildTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

