// Class /Script/IKRig.IKRigDefinition
// Size: 0x100
class UIKRigDefinition : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TWeakObjectPtr<class USkeletalMesh> PreviewSkeletalMesh; // 0x30 (0x28)
	struct FIKRigSkeleton Skeleton; // 0x58 (0x70)
	struct TArray<class UIKRigEffectorGoal*> Goals; // 0xc8 (0x10)
	struct TArray<class UIKRigSolver*> Solvers; // 0xd8 (0x10)
	struct FRetargetDefinition RetargetDefinition; // 0xe8 (0x18)
};

