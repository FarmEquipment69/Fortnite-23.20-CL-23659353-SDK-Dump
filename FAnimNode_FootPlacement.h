// ScriptStruct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
// Size: 0x400
struct FAnimNode_FootPlacement : FAnimNode_SkeletalControlBase
{
	enum EWarpingEvaluationMode PlantSpeedMode; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	struct FBoneReference IKFootRootBone; // 0xcc (0xc)
	struct FBoneReference PelvisBone; // 0xd8 (0xc)
	struct FFootPlacementPelvisSettings PelvisSettings; // 0xe4 (0x1c)
	struct TArray<struct FFootPlacemenLegDefinition> LegDefinitions; // 0x100 (0x10)
	struct FFootPlacementPlantSettings PlantSettings; // 0x110 (0x34)
	struct FFootPlacementInterpolationSettings InterpolationSettings; // 0x144 (0x24)
	struct FFootPlacementTraceSettings TraceSettings; // 0x168 (0x1c)
	unsigned char padding_184[0x27c]; // 0x184 (0x27c)
};

