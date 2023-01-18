// ScriptStruct /Script/Engine.AnimBlueprintFunction
// Size: 0x70
struct FAnimBlueprintFunction
{
	struct FName Name; // 0x0 (0x4)
	struct FName Group; // 0x4 (0x4)
	int OutputPoseNodeIndex; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FName> InputPoseNames; // 0x10 (0x10)
	struct TArray<int> InputPoseNodeIndices; // 0x20 (0x10)
	unsigned char unreflected_30[0x38]; // 0x30 (0x38) 
	bool bImplemented; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

