// Class /Script/FortniteGame.FortEventLevelCamera
// Size: 0xb60
class AFortEventLevelCamera : public AFortCameraBase
{
	struct FGameplayTag CameraTag; // 0x9f0 (0x4)
	struct FGameplayTag PreviousCamera; // 0x9f4 (0x4)
	struct FGameplayTag BackOutCamera; // 0x9f8 (0x4)
	unsigned char unreflected_9fc[0x4]; // 0x9fc (0x4) 
	struct TWeakObjectPtr<class AFortEventLevelNavigationActor> DefaultSelectedObject; // 0xa00 (0x28)
	bool bRestorLastSelected; // 0xa28 (0x1)
	unsigned char unreflected_a29[0x7]; // 0xa29 (0x7) 
	struct TWeakObjectPtr<class AFortEventLevelNavigationActor> LastSelectedObject; // 0xa30 (0x28)
	struct FViewTargetTransitionParams FallbackTransitionParams; // 0xa58 (0x10)
	struct TMap<struct FGameplayTag, struct FCameraSequence> CameraTransitionParams; // 0xa68 (0x50)
	struct TWeakObjectPtr<class AActor> LightswitchToActivate; // 0xab8 (0x28)
	struct TWeakObjectPtr<class UClass> SpatialScreenClass; // 0xae0 (0x28)
	struct TArray<struct TWeakObjectPtr<class AFortEventLevelNavigationActor>> NavigationActorsToTurnOn; // 0xb08 (0x10)
	struct TWeakObjectPtr<class UFortGameStateComponent_EventLevel> WeakDynamicLevelComp; // 0xb18 (0x8)
	struct FVector DefaultCameraLocation; // 0xb20 (0x18)
	struct FRotator DefaultCameraRotation; // 0xb38 (0x18)
	unsigned char padding_b50[0x10]; // 0xb50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortEventLevelCamera.UpdateLevelLightSwitch (Underlying native function: UpdateLevelLightSwitch 0x868ce10)
	void UpdateLevelLightSwitch(bool& bTurnOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortEventLevelCamera.StartLevelTransition (Underlying native function: StartLevelTransition 0x868cd90)
	void StartLevelTransition(bool& bStreamIn); // (Final | Native | Public | BlueprintCallable)
};

