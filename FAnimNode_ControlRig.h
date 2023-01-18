// ScriptStruct /Script/ControlRig.AnimNode_ControlRig
// Size: 0x470
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{
	class UClass* ControlRigClass; // 0x270 (0x8)
	class UControlRig* ControlRig; // 0x278 (0x8)
	float Alpha; // 0x280 (0x4)
	enum EAnimAlphaInputType AlphaInputType; // 0x284 (0x1)
	unsigned char bAlphaBoolEnabled; // 0x285 (0x1)
	unsigned char bSetRefPoseFromSkeleton; // 0x285 (0x1)
	unsigned char unreflected_286[0x2]; // 0x286 (0x2) 
	struct FInputScaleBias* AlphaScaleBias; // 0x288 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x290 (0x48)
	struct FName AlphaCurveName; // 0x2d8 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x2dc (0x30)
	unsigned char unreflected_30c[0x4]; // 0x30c (0x4) 
	struct TMap<struct FName, struct FName> InputMapping; // 0x310 (0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x360 (0x50)
	unsigned char unreflected_3b0[0xb0]; // 0x3b0 (0xb0) 
	int LODThreshold; // 0x460 (0x4)
	unsigned char padding_464[0xc]; // 0x464 (0xc)
};

