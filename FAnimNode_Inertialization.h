// ScriptStruct /Script/Engine.AnimNode_Inertialization
// Size: 0x100
struct FAnimNode_Inertialization : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10 (0x10)
	class UBlendProfile* DefaultBlendProfile; // 0x20 (0x8)
	struct TArray<struct FName> FilteredCurves; // 0x28 (0x10)
	unsigned char unreflected_38[0x68]; // 0x38 (0x68) 
	struct TArray<struct FInertializationRequest> RequestQueue; // 0xa0 (0x10)
	unsigned char padding_b0[0x50]; // 0xb0 (0x50)
};

