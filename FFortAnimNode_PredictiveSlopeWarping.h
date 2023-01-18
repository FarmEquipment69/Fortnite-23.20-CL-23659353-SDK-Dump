// ScriptStruct /Script/FortniteGame.FortAnimNode_PredictiveSlopeWarping
// Size: 0x570
struct FFortAnimNode_PredictiveSlopeWarping : FFortAnimNode_SlopeWarping
{
	struct FBoneReference LFootPrediction; // 0x2e8 (0xc)
	struct FBoneReference RFootPrediction; // 0x2f4 (0xc)
	float MaxMovementDistBeforeNewTrace; // 0x300 (0x4)
	struct TEnumAsByte<ECollisionChannel> FootTraceChannel; // 0x304 (0x1)
	unsigned char unreflected_305[0x3]; // 0x305 (0x3) 
	unsigned char bCorrectForMeshOffset; // 0x308 (0x1)
	unsigned char bUseWorldGravityDirectionForOffset; // 0x308 (0x1)
	unsigned char bAbsentCurveMeansFootDown; // 0x308 (0x1)
	unsigned char unreflected_309[0x3]; // 0x309 (0x3) 
	struct FName LFootOnGroundCurveName; // 0x30c (0x4)
	unsigned char bLeftCurveHighMeansFootDown; // 0x310 (0x1)
	unsigned char unreflected_311[0x3]; // 0x311 (0x3) 
	struct FName RFootOnGroundCurveName; // 0x314 (0x4)
	unsigned char bRightCurveHighMeansFootDown; // 0x318 (0x1)
	unsigned char padding_319[0x257]; // 0x319 (0x257)
};

