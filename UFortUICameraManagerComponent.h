// Class /Script/FortniteGame.FortUICameraManagerComponent
// Size: 0x2c0
class UFortUICameraManagerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct TWeakObjectPtr<class AActor> ViewTarget; // 0xb0 (0x8)
	bool bUpdatingViewTarget; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x1]; // 0xb9 (0x1) 
	enum EFrontEndCamera CurrentCamera; // 0xba (0x1)
	unsigned char unreflected_bb[0x5]; // 0xbb (0x5) 
	struct TMap<enum EFrontEndCamera, class AFortCameraBase*> CameraMapping; // 0xc0 (0x50)
	unsigned char padding_110[0x1b0]; // 0x110 (0x1b0)

	/* Functions */

	// Function /Script/FortniteGame.FortUICameraManagerComponent.SetZoomLevel (Underlying native function: SetZoomLevel 0x868ccf8)
	void SetZoomLevel(float& ZoomLevel); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.SetFrameTarget (Underlying native function: SetFrameTarget 0x868cba4)
	void SetFrameTarget(struct TScriptInterface<class IFortUICameraFrameTargetInterface>& FrameTarget); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.SetCustomCameraRotationOffset (Underlying native function: SetCustomCameraRotationOffset 0x868cb1c)
	void SetCustomCameraRotationOffset(struct FRotator& Offset); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.SetCameraFrame (Underlying native function: SetCameraFrame 0x868ca8c)
	void SetCameraFrame(struct TScriptInterface<class IFortUICameraFrameInterface>& NewFrame); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.SetCamera (Underlying native function: SetCamera 0x868ca0c)
	void SetCamera(enum EFrontEndCamera& NewCamera); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.HandleCameraFrameTargetSettingsChanged (Underlying native function: HandleCameraFrameTargetSettingsChanged 0x868c6a4)
	void HandleCameraFrameTargetSettingsChanged(struct TScriptInterface<class IFortUICameraFrameTargetInterface>& FrameTarget); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.GetZoomLevel (Underlying native function: GetZoomLevel 0x868c68c)
	float GetZoomLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.GetCameraActor (Underlying native function: GetCameraActor 0x868bad0)
	class AFortCameraBase* GetCameraActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUICameraManagerComponent.GetCamera (Underlying native function: GetCamera 0x868bab8)
	enum EFrontEndCamera GetCamera(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

