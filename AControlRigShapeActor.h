// Class /Script/ControlRig.ControlRigShapeActor
// Size: 0x2c8
class AControlRigShapeActor : public AActor
{
	class USceneComponent* ActorRootComponent; // 0x288 (0x8)
	class UStaticMeshComponent* StaticMeshComponent; // 0x290 (0x8)
	uint32_t ControlRigIndex; // 0x298 (0x4)
	struct TWeakObjectPtr<class UControlRig> ControlRig; // 0x29c (0x8)
	struct FName ControlName; // 0x2a4 (0x4)
	struct FName ShapeName; // 0x2a8 (0x4)
	struct FName ColorParameterName; // 0x2ac (0x4)
	unsigned char unreflected_2b0[0x10]; // 0x2b0 (0x10) 
	unsigned char bSelected; // 0x2c0 (0x1)
	unsigned char bHovered; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x7]; // 0x2c1 (0x7)

	/* Functions */

	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected (Underlying native function: SetSelected 0x7a9f118)
	void SetSelected(bool& bInSelected); // (Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable (Underlying native function: SetSelectable 0x7a9f094)
	void SetSelectable(bool& bInSelectable); // (Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered (Underlying native function: SetHovered 0x7a9ea30)
	void SetHovered(bool& bInHovered); // (Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform (Underlying native function: SetGlobalTransform 0x7a9e920)
	void SetGlobalTransform(struct FTransform& InTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled (Underlying native function: SetEnabled 0x7a9e818)
	void SetEnabled(bool& bInEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged (Has no native function)
	void OnTransformChanged(struct FTransform& NewTransform); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged (Has no native function)
	void OnSelectionChanged(bool& bIsSelected); // (Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged (Has no native function)
	void OnManipulatingChanged(bool& bIsManipulating); // (Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged (Has no native function)
	void OnHoveredChanged(bool& bIsSelected); // (Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged (Has no native function)
	void OnEnabledChanged(bool& bIsEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor (Underlying native function: IsSelectedInEditor 0x7a9d4dc)
	bool IsSelectedInEditor(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered (Underlying native function: IsHovered 0x7a9d4b4)
	bool IsHovered(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled (Underlying native function: IsEnabled 0x7a9d48c)
	bool IsEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform (Underlying native function: GetGlobalTransform 0x7a9cd74)
	struct FTransform GetGlobalTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

