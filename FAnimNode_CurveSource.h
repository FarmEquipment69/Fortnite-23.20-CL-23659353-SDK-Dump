// ScriptStruct /Script/AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x38
struct FAnimNode_CurveSource : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10 (0x10)
	struct FName SourceBinding; // 0x20 (0x4)
	float Alpha; // 0x24 (0x4)
	struct TScriptInterface<class ICurveSourceInterface> CurveSource; // 0x28 (0x10)
};

