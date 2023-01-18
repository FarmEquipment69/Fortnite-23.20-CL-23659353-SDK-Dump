// BlueprintGeneratedClass /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// Size: 0x3a8
class ABP_Frontend_ShopBG_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UStaticMeshComponent* StandardBackgroundPlane1; // 0x290 (0x8)
	class UStaticMeshComponent* StandardBackgroundPlane; // 0x298 (0x8)
	class UStaticMeshComponent* Cone; // 0x2a0 (0x8)
	class UStaticMeshComponent* Plane; // 0x2a8 (0x8)
	class USceneComponent* Scene; // 0x2b0 (0x8)
	class UStaticMeshComponent* BackgroundTexturePlane; // 0x2b8 (0x8)
	class UStaticMeshComponent* VeryLargeBackgroundPlane; // 0x2c0 (0x8)
	class USceneComponent* SceneSignal; // 0x2c8 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x2d0 (0x8)
	struct FRotator RotIntro; // 0x2d8 (0x18)
	struct FRotator NextRot; // 0x2f0 (0x18)
	struct FRotator Rot0; // 0x308 (0x18)
	struct FRotator Rot2; // 0x320 (0x18)
	double PlayRate; // 0x338 (0x8)
	struct FRotator RotIntroStart; // 0x340 (0x18)
	bool bHasEvent; // 0x358 (0x1)
	unsigned char unreflected_359[0x7]; // 0x359 (0x7) 
	double YInitial; // 0x360 (0x8)
	double YEnd; // 0x368 (0x8)
	class UMaterialInstanceDynamic* Mid; // 0x370 (0x8)
	class ACMSLobbyDirector_C* CMSDirector; // 0x378 (0x8)
	struct FString BPEnvName; // 0x380 (0x10)
	bool ShopEntered; // 0x390 (0x1)
	unsigned char unreflected_391[0x7]; // 0x391 (0x7) 
	struct FTimerHandle* DonutSeqTimerHandle; // 0x398 (0x8)
	class AActor* DomeObstruction; // 0x3a0 (0x8)

	/* Functions */

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG (Has no native function)
	void SetDynamicBG(class UTexture*& InTexture); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG (Has no native function)
	void EnableDynamicShopBG(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent (Has no native function)
	void SetDynamicEnvironmentEvent(struct FString& InPresetEnvName); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG (Has no native function)
	void DebugShopBG(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide (Has no native function)
	void HandleRequestHide(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered (Has no native function)
	void HandleItemShopEntered(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered (Has no native function)
	void HandleStoreEntered(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut (Has no native function)
	void ResetDonut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG (Has no native function)
	void ExecuteUbergraphBPFrontendShopBG(int& EntryPoint, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct FString& K2NodeCustomEventInPresetEnvName, bool& K2NodeSwitchStringCmpSuccess, struct TArray<class ACMSLobbyDirector_C*>& CallFuncGetAllActorsOfClassOutActors, class ACMSLobbyDirector_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncIsValidReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& K2NodeSwitchStringCmpSuccess1, struct TArray<class AActor*>& CallFuncGetAllActorsWithTagOutActors, class AActor*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncGreaterIntIntReturnValue1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, class UTexture*& K2NodeCustomEventInTexture, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& K2NodeSwitchStringCmpSuccess2, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, bool& CallFuncGetHasDonutShopSequenceBeenSeenReturnValue, bool& CallFuncNotPreBoolReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue2, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, bool& CallFuncGetHasDonutShopSequenceBeenSeenReturnValue1, bool& CallFuncNotPreBoolReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

