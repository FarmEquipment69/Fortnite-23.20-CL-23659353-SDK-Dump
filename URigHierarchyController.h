// Class /Script/ControlRig.RigHierarchyController
// Size: 0xa0
class URigHierarchyController : public UObject
{
	bool bReportWarningsAndErrors; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct TWeakObjectPtr<class URigHierarchy> Hierarchy; // 0x2c (0x8)
	unsigned char padding_34[0x6c]; // 0x34 (0x6c)

	/* Functions */

	// Function /Script/ControlRig.RigHierarchyController.SetSelection (Underlying native function: SetSelection 0x7b37540)
	bool SetSelection(struct TArray<struct FRigElementKey*>& InKeys, bool& bPrintPythonCommand); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.SetParent (Underlying native function: SetParent 0x7b373b8)
	bool SetParent(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, bool& bMaintainGlobalTransform, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy (Underlying native function: SetHierarchy 0x7b37338)
	void SetHierarchy(class URigHierarchy*& InHierarchy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName (Underlying native function: SetDisplayName 0x7b371a8)
	struct FName SetDisplayName(struct FRigElementKey*& InControl, struct FName& InDisplayName, bool& bRenameElement, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings (Underlying native function: SetControlSettings 0x7b37050)
	bool SetControlSettings(struct FRigElementKey*& InKey, struct FRigControlSettings& InSettings, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchyController.SelectElement (Underlying native function: SelectElement 0x7b36f40)
	bool SelectElement(struct FRigElementKey*& InKey, bool& bSelect, bool& bClearSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.RenameElement (Underlying native function: RenameElement 0x7b36b58)
	struct FRigElementKey* RenameElement(struct FRigElementKey*& InElement, struct FName& InName, bool& bSetupUndo, bool& bPrintPythonCommand, bool& bClearSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.RemoveParent (Underlying native function: RemoveParent 0x7b369d0)
	bool RemoveParent(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, bool& bMaintainGlobalTransform, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.RemoveElement (Underlying native function: RemoveElement 0x7b368d0)
	bool RemoveElement(struct FRigElementKey*& InElement, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents (Underlying native function: RemoveAllParents 0x7b3678c)
	bool RemoveAllParents(struct FRigElementKey*& InChild, bool& bMaintainGlobalTransform, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.MirrorElements (Underlying native function: MirrorElements 0x7b36140)
	struct TArray<struct FRigElementKey*> MirrorElements(struct TArray<struct FRigElementKey*>& InKeys, struct FRigMirrorSettings& InSettings, bool& bSelectNewElements, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.ImportFromText (Underlying native function: ImportFromText 0x7b35e98)
	struct TArray<struct FRigElementKey*> ImportFromText(struct FString& InContent, bool& bReplaceExistingElements, bool& bSelectNewElements, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.ImportCurves (Underlying native function: ImportCurves 0x7b35760)
	struct TArray<struct FRigElementKey*> ImportCurves(class USkeleton*& InSkeleton, struct FName& InNameSpace, bool& bSelectCurves, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.ImportBones (Underlying native function: ImportBones 0x7b354b4)
	struct TArray<struct FRigElementKey*> ImportBones(class USkeleton*& InSkeleton, struct FName& InNameSpace, bool& bReplaceExistingBones, bool& bRemoveObsoleteBones, bool& bSelectBones, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy (Underlying native function: GetHierarchy 0x7b3544c)
	class URigHierarchy* GetHierarchy(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings (Underlying native function: GetControlSettings 0x7b35224)
	struct FRigControlSettings GetControlSettings(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchyController.ExportToText (Underlying native function: ExportToText 0x7b34ff8)
	struct FString ExportToText(struct TArray<struct FRigElementKey*>& InKeys); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText (Underlying native function: ExportSelectionToText 0x7b34f84)
	struct FString ExportSelectionToText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements (Underlying native function: DuplicateElements 0x7b34d54)
	struct TArray<struct FRigElementKey*> DuplicateElements(struct TArray<struct FRigElementKey*>& InKeys, bool& bSelectNewElements, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.DeselectElement (Underlying native function: DeselectElement 0x7b34bec)
	bool DeselectElement(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.ClearSelection (Underlying native function: ClearSelection 0x7b34b98)
	bool ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody (Underlying native function: AddRigidBody 0x7b3491c)
	struct FRigElementKey* AddRigidBody(struct FName& InName, struct FRigElementKey*& InParent, struct FRigRigidBodySettings& InSettings, struct FTransform& InLocalTransform, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddParent (Underlying native function: AddParent 0x7b34788)
	bool AddParent(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, float& InWeight, bool& bMaintainGlobalTransform, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddNull (Underlying native function: AddNull 0x7b34504)
	struct FRigElementKey* AddNull(struct FName& InName, struct FRigElementKey*& InParent, struct FTransform& InTransform, bool& bTransformInGlobal, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddCurve (Underlying native function: AddCurve 0x7b343c8)
	struct FRigElementKey* AddCurve(struct FName& InName, float& InValue, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint (Underlying native function: AddControl_ForBlueprint 0x7b33f50)
	struct FRigElementKey* AddControlForBlueprint(struct FName& InName, struct FRigElementKey*& InParent, struct FRigControlSettings& InSettings, struct FRigControlValue& InValue, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddBone (Underlying native function: AddBone 0x7b33c88)
	struct FRigElementKey* AddBone(struct FName& InName, struct FRigElementKey*& InParent, struct FTransform& InTransform, bool& bTransformInGlobal, enum ERigBoneType& InBoneType, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint (Underlying native function: AddAnimationChannel_ForBlueprint 0x7b33a78)
	struct FRigElementKey* AddAnimationChannelForBlueprint(struct FName& InName, struct FRigElementKey*& InParentControl, struct FRigControlSettings& InSettings, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | BlueprintCallable)
};

