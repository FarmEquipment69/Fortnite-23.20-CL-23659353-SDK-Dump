// Class /Script/Engine.CameraComponent
// Size: 0xa30
class UCameraComponent : public USceneComponent
{
	float FieldOfView; // 0x2a0 (0x4)
	float OrthoWidth; // 0x2a4 (0x4)
	float OrthoNearClipPlane; // 0x2a8 (0x4)
	float OrthoFarClipPlane; // 0x2ac (0x4)
	float AspectRatio; // 0x2b0 (0x4)
	unsigned char bConstrainAspectRatio; // 0x2b4 (0x1)
	unsigned char bUseFieldOfViewForLOD; // 0x2b4 (0x1)
	unsigned char bLockToHmd; // 0x2b4 (0x1)
	unsigned char bUsePawnControlRotation; // 0x2b4 (0x1)
	struct TEnumAsByte<ECameraProjectionMode> ProjectionMode; // 0x2b5 (0x1)
	unsigned char unreflected_2b6[0x6a]; // 0x2b6 (0x6a) 
	float PostProcessBlendWeight; // 0x320 (0x4)
	unsigned char unreflected_324[0x2c]; // 0x324 (0x2c) 
	struct FPostProcessSettings PostProcessSettings; // 0x350 (0x6e0)

	/* Functions */

	// Function /Script/Engine.CameraComponent.SetUseFieldOfViewForLOD (Underlying native function: SetUseFieldOfViewForLOD 0x9c9d710)
	void SetUseFieldOfViewForLOD(bool& bInUseFieldOfViewForLOD); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetProjectionMode (Underlying native function: SetProjectionMode 0x9c9d32c)
	void SetProjectionMode(struct TEnumAsByte<ECameraProjectionMode>& InProjectionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetPostProcessBlendWeight (Underlying native function: SetPostProcessBlendWeight 0x9c9d224)
	void SetPostProcessBlendWeight(float& InPostProcessBlendWeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoWidth (Underlying native function: SetOrthoWidth 0x9c9d1a0)
	void SetOrthoWidth(float& InOrthoWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoNearClipPlane (Underlying native function: SetOrthoNearClipPlane 0x9c9d11c)
	void SetOrthoNearClipPlane(float& InOrthoNearClipPlane); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoFarClipPlane (Underlying native function: SetOrthoFarClipPlane 0x9c9d098)
	void SetOrthoFarClipPlane(float& InOrthoFarClipPlane); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetFieldOfView (Underlying native function: SetFieldOfView 0x28fbcd4)
	void SetFieldOfView(float& InFieldOfView); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetConstraintAspectRatio (Underlying native function: SetConstraintAspectRatio 0x9c9c7e8)
	void SetConstraintAspectRatio(bool& bInConstrainAspectRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetAspectRatio (Underlying native function: SetAspectRatio 0x9c9c764)
	void SetAspectRatio(float& InAspectRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.RemoveBlendable (Underlying native function: RemoveBlendable 0x9c9c6d0)
	void RemoveBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.OnCameraMeshHiddenChanged (Underlying native function: OnCameraMeshHiddenChanged 0x26daa0c)
	void OnCameraMeshHiddenChanged(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.GetCameraView (Underlying native function: GetCameraView 0x9c9baa0)
	void GetCameraView(float& DeltaTime, struct FMinimalViewInfo& DesiredView); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.AddOrUpdateBlendable (Underlying native function: AddOrUpdateBlendable 0x9c9b4d8)
	void AddOrUpdateBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject, float& InWeight); // (Final | Native | Public | BlueprintCallable)
};

