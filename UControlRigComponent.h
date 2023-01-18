// Class /Script/ControlRig.ControlRigComponent
// Size: 0x6a0
class UControlRigComponent : public UPrimitiveComponent
{
	class UClass* ControlRigClass; // 0x540 (0x8)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x558 (0x10)
	struct FMulticastInlineDelegate OnPreConstructionDelegate; // 0x568 (0x10)
	struct FMulticastInlineDelegate OnPostConstructionDelegate; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x588 (0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x598 (0x10)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements; // 0x5a8 (0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x5b8 (0x10)
	bool bEnableLazyEvaluation; // 0x5c8 (0x1)
	unsigned char unreflected_5c9[0x3]; // 0x5c9 (0x3) 
	float LazyEvaluationPositionThreshold; // 0x5cc (0x4)
	float LazyEvaluationRotationThreshold; // 0x5d0 (0x4)
	float LazyEvaluationScaleThreshold; // 0x5d4 (0x4)
	bool bResetTransformBeforeTick; // 0x5d8 (0x1)
	bool bResetInitialsBeforeConstruction; // 0x5d9 (0x1)
	bool bUpdateRigOnTick; // 0x5da (0x1)
	bool bUpdateInEditor; // 0x5db (0x1)
	bool bDrawBones; // 0x5dc (0x1)
	bool bShowDebugDrawing; // 0x5dd (0x1)
	unsigned char unreflected_5de[0x2]; // 0x5de (0x2) 
	class UControlRig* ControlRig; // 0x5e0 (0x8)
	unsigned char padding_5e8[0xb8]; // 0x5e8 (0xb8)

	/* Functions */

	// Function /Script/ControlRig.ControlRigComponent.Update (Underlying native function: Update 0x7a9f3cc)
	void Update(float& DeltaTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding (Underlying native function: SetObjectBinding 0x7a9f014)
	void SetObjectBinding(class UObject*& InObjectToBind); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements (Underlying native function: SetMappedElements 0x7a9ef38)
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement>& NewMappedElements); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform (Underlying native function: SetInitialSpaceTransform 0x7a9ec9c)
	void SetInitialSpaceTransform(struct FName& SpaceName, struct FTransform& InitialTransform, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform (Underlying native function: SetInitialBoneTransform 0x7a9eab4)
	void SetInitialBoneTransform(struct FName& BoneName, struct FTransform& InitialTransform, enum EControlRigComponentSpace& Space, bool& bPropagateToChildren); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D (Underlying native function: SetControlVector2D 0x7a9e6cc)
	void SetControlVector2D(struct FName& ControlName, struct FVector2D& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform (Underlying native function: SetControlTransform 0x7a9e530)
	void SetControlTransform(struct FName& ControlName, struct FTransform& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlScale (Underlying native function: SetControlScale 0x7a9e428)
	void SetControlScale(struct FName& ControlName, struct FVector& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator (Underlying native function: SetControlRotator 0x7a9e320)
	void SetControlRotator(struct FName& ControlName, struct FRotator& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass (Underlying native function: SetControlRigClass 0x7a9e298)
	void SetControlRigClass(class UClass*& InControlRigClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition (Underlying native function: SetControlPosition 0x7a9e190)
	void SetControlPosition(struct FName& ControlName, struct FVector& Value, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset (Underlying native function: SetControlOffset 0x7a9dff4)
	void SetControlOffset(struct FName& ControlName, struct FTransform& OffsetTransform, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlInt (Underlying native function: SetControlInt 0x7a9df34)
	void SetControlInt(struct FName& ControlName, int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat (Underlying native function: SetControlFloat 0x7a9de6c)
	void SetControlFloat(struct FName& ControlName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetControlBool (Underlying native function: SetControlBool 0x7a9dda8)
	void SetControlBool(struct FName& ControlName, bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform (Underlying native function: SetBoneTransform 0x7a9db74)
	void SetBoneTransform(struct FName& BoneName, struct FTransform& Transform, enum EControlRigComponentSpace& Space, float& Weight, bool& bPropagateToChildren); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh (Underlying native function: SetBoneInitialTransformsFromSkeletalMesh 0x7a9dadc)
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh*& InSkeletalMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize (Underlying native function: OnPreInitialize 0x7a9d798)
	void OnPreInitialize(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve (Underlying native function: OnPreForwardsSolve 0x7a9d714)
	void OnPreForwardsSolve(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction (Underlying native function: OnPreConstruction 0x7a9d690)
	void OnPreConstruction(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize (Underlying native function: OnPostInitialize 0x7a9d60c)
	void OnPostInitialize(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve (Underlying native function: OnPostForwardsSolve 0x7a9d588)
	void OnPostForwardsSolve(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction (Underlying native function: OnPostConstruction 0x7a9d504)
	void OnPostConstruction(class UControlRigComponent*& Component); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/ControlRig.ControlRigComponent.Initialize (Underlying native function: Initialize 0x7a9d3d8)
	void Initialize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform (Underlying native function: GetSpaceTransform 0x7a9d14c)
	struct FTransform GetSpaceTransform(struct FName& SpaceName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform (Underlying native function: GetInitialSpaceTransform 0x7a9cf94)
	struct FTransform GetInitialSpaceTransform(struct FName& SpaceName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform (Underlying native function: GetInitialBoneTransform 0x7a9ce80)
	struct FTransform GetInitialBoneTransform(struct FName& BoneName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetElementNames (Underlying native function: GetElementNames 0x7a9cc04)
	struct TArray<struct FName> GetElementNames(enum ERigElementType& ElementType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D (Underlying native function: GetControlVector2D 0x7a9cb4c)
	struct FVector2D GetControlVector2D(struct FName& ControlName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform (Underlying native function: GetControlTransform 0x7a9ca38)
	struct FTransform GetControlTransform(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlScale (Underlying native function: GetControlScale 0x7a9c938)
	struct FVector GetControlScale(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator (Underlying native function: GetControlRotator 0x7a9c82c)
	struct FRotator GetControlRotator(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlRig (Underlying native function: GetControlRig 0x7a9c808)
	class UControlRig* GetControlRig(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition (Underlying native function: GetControlPosition 0x7a9c708)
	struct FVector GetControlPosition(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset (Underlying native function: GetControlOffset 0x7a9c5f4)
	struct FTransform GetControlOffset(struct FName& ControlName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.GetControlInt (Underlying native function: GetControlInt 0x7a9c568)
	int GetControlInt(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat (Underlying native function: GetControlFloat 0x7a9c4d8)
	float GetControlFloat(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetControlBool (Underlying native function: GetControlBool 0x7a9c44c)
	bool GetControlBool(struct FName& ControlName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform (Underlying native function: GetBoneTransform 0x7a9c338)
	struct FTransform GetBoneTransform(struct FName& BoneName, enum EControlRigComponentSpace& Space); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime (Underlying native function: GetAbsoluteTime 0x7a9c30c)
	float GetAbsoluteTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist (Underlying native function: DoesElementExist 0x7a9bfe8)
	bool DoesElementExist(struct FName& Name, enum ERigElementType& ElementType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements (Underlying native function: ClearMappedElements 0x7a9bdf4)
	void ClearMappedElements(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.CanExecute (Underlying native function: CanExecute 0x7a9bdbc)
	bool CanExecute(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh (Underlying native function: AddMappedSkeletalMesh 0x7a9bc5c)
	void AddMappedSkeletalMesh(class USkeletalMeshComponent*& SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone*>& Bones, struct TArray<struct FControlRigComponentMappedCurve*>& Curves); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements (Underlying native function: AddMappedElements 0x7a9bbb4)
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement>& NewMappedElements); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents (Underlying native function: AddMappedComponents 0x7a9ba18)
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent>& Components); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh (Underlying native function: AddMappedCompleteSkeletalMesh 0x7a9b974)
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent*& SkeletalMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

