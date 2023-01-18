// ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x100
struct FAnimNode_ModifyCurve : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10 (0x10)
	struct TMap<struct FName, float> CurveMap; // 0x20 (0x50)
	struct TArray<float> CurveValues; // 0x70 (0x10)
	struct TArray<struct FName> CurveNames; // 0x80 (0x10)
	unsigned char unreflected_90[0x64]; // 0x90 (0x64) 
	float Alpha; // 0xf4 (0x4)
	enum EModifyCurveApplyMode ApplyMode; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)
};

