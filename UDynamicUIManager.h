// Class /Script/DynamicUI.DynamicUIManager
// Size: 0x98
class UDynamicUIManager : public UWorldSubsystem
{
	unsigned char unreflected_30[0x18]; // 0x30 (0x18) 
	struct TMap<struct TWeakObjectPtr<class ULocalPlayer>, struct FDynamicUIPlayerData> PlayerDataMap; // 0x48 (0x50)

	/* Functions */

	// Function /Script/DynamicUI.DynamicUIManager.RemoveScenes (Underlying native function: RemoveScenes 0x70b0358)
	void RemoveScenes(struct TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer (Underlying native function: RemoveSceneFromFirstLocalPlayer 0x70b01d4)
	void RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene*& Scene); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIManager.RemoveScene (Underlying native function: RemoveScene 0x70affdc)
	void RemoveScene(class UDynamicUIScene*& Scene, class APlayerController*& Player); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer (Underlying native function: AddSceneToFirstLocalPlayer 0x70afc28)
	void AddSceneToFirstLocalPlayer(class UDynamicUIScene*& Scene); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIManager.AddScenes (Underlying native function: AddScenes 0x70afdac)
	void AddScenes(struct TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIManager.AddScene (Underlying native function: AddScene 0x70afa30)
	void AddScene(class UDynamicUIScene*& Scene, class APlayerController*& Player); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

