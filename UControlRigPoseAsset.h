// Class /Script/ControlRig.ControlRigPoseAsset
// Size: 0x88
class UControlRigPoseAsset : public UObject
{
	struct FControlRigControlPose Pose; // 0x28 (0x60)

	/* Functions */

	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls (Underlying native function: SelectControls 0x7b36e78)
	void SelectControls(class UControlRig*& InControlRig, bool& bDoMirror); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose (Underlying native function: SavePose 0x7b36db0)
	void SavePose(class UControlRig*& InControlRig, bool& bUseAll); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName (Underlying native function: ReplaceControlName 0x7b36cd8)
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose (Underlying native function: PastePose 0x7b365d0)
	void PastePose(class UControlRig*& InControlRig, bool& bDoKey, bool& bDoMirror); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose (Underlying native function: GetCurrentPose 0x7b352ec)
	void GetCurrentPose(class UControlRig*& InControlRig, struct FControlRigControlPose& OutPose); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames (Underlying native function: GetControlNames 0x7b351b8)
	struct TArray<struct FName> GetControlNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch (Underlying native function: DoesMirrorMatch 0x7b34c84)
	bool DoesMirrorMatch(class UControlRig*& ControlRig, struct FName& ControlName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

