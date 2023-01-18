// Class /Script/FortniteGame.FortPlayerCameraBase
// Size: 0x3c10
class AFortPlayerCameraBase : public APlayerCameraManager
{
	struct TArray<struct FActiveFortCamera> CameraBlendStack; // 0x3340 (0x10)
	struct TArray<struct FFortCameraInstanceEntry> CameraInstances; // 0x3350 (0x10)
	unsigned char unreflected_3360[0x10]; // 0x3360 (0x10) 
	class UFortUICameraManagerComponent* UICamera; // 0x3370 (0x8)
	class UClass* Base3PClass; // 0x3378 (0x8)
	class UClass* Targeting3PClass; // 0x3380 (0x8)
	class UClass* OverrideCameraClass; // 0x3388 (0x8)
	class UClass* CinematicCameraClass; // 0x3390 (0x8)
	class UClass* DBNOCameraClass; // 0x3398 (0x8)
	class UClass* DBNOCarriedCameraClass; // 0x33a0 (0x8)
	class UClass* DeathCameraClass; // 0x33a8 (0x8)
	class UClass* RespawnedInAirCameraClass; // 0x33b0 (0x8)
	class UClass* SkydiveGlideCameraClass; // 0x33b8 (0x8)
	class UClass* SkydiveDiveCameraClass; // 0x33c0 (0x8)
	class UClass* SkydiveParachuteCameraClass; // 0x33c8 (0x8)
	class UClass* HoverboardCameraClass; // 0x33d0 (0x8)
	class UClass* WaterSprintBoostCameraClass; // 0x33d8 (0x8)
	class UClass* FocalPointCameraClass; // 0x33e0 (0x8)
	class UClass* TetheredTargeting3PClass; // 0x33e8 (0x8)
	class UClass* RCActorCameraClass; // 0x33f0 (0x8)
	struct TArray<struct FFortCameraPrototype> CameraPrototypes; // 0x33f8 (0x10)
	unsigned char unreflected_3408[0x8]; // 0x3408 (0x8) 
	class APostProcessVolume* ZoomPostProcessVolume; // 0x3410 (0x8)
	struct TArray<struct FCameraModeTaggedOverrideEntry> TaggedOverrideStack; // 0x3418 (0x10)
	unsigned char unreflected_3428[0x7d8]; // 0x3428 (0x7d8) 
	bool bLockCameraWhileInactiveForNextTransition; // 0x3c00 (0x1)
	unsigned char padding_3c01[0xf]; // 0x3c01 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerCameraBase.RemoveCameraModeOverride (Underlying native function: RemoveCameraModeOverride 0x868c960)
	void RemoveCameraModeOverride(struct FGameplayTag& tag); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerCameraBase.AddCameraModeOverride (Underlying native function: AddCameraModeOverride 0x868b470)
	void AddCameraModeOverride(class UClass*& CameraModeClass, struct FGameplayTag& tag); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

