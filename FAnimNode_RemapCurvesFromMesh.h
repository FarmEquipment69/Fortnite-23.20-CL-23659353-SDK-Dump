// ScriptStruct /Script/CurveExpression.AnimNode_RemapCurvesFromMesh
// Size: 0x1a0
struct FAnimNode_RemapCurvesFromMesh : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10 (0x10)
	struct TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent; // 0x20 (0x8)
	bool bUseAttachedParent; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TMap<struct FName, struct FString> CurveExpressions; // 0x30 (0x50)
	bool bExpressionsImmutable; // 0x80 (0x1)
	unsigned char padding_81[0x11f]; // 0x81 (0x11f)
};

